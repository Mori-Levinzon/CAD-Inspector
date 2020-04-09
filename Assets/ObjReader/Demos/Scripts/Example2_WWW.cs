// This example loads an OBJ file from the WWW, including the MTL file and any textures that might be referenced

using UnityEngine;
using System.Collections;

public class Example2_WWW : MonoBehaviour {

	public string objFileName = "http://www.starscenesoftware.com/objtest/Spot.obj";
	public Material standardMaterial;	// The shader for non-transparent objects is supplied by this material. Also used for objects that have no MTL file.
	ObjReader.ObjData objData;
	string loadingText = "";
	bool loading = false;

	IEnumerator Load () {
		loading = true;
		if (objData != null && objData.gameObjects != null) {
			for (var i = 0; i < objData.gameObjects.Length; i++) {
				Destroy (objData.gameObjects[i]);
			}
		}
		
		objData = ObjReader.use.ConvertFileAsync (objFileName, true, standardMaterial);
		while (!objData.isDone) {
			loadingText = "Loading... " + (objData.progress*100).ToString("f0") + "%";
			if (Input.GetKeyDown (KeyCode.Escape)) {
				objData.Cancel();
				loadingText = "Cancelled download";
				loading = false;
				yield break;
			}
			yield return null;
		}
		loading = false;
		if (objData == null || objData.gameObjects == null) {
			loadingText = "Error loading file";
			yield return null;
			yield break;
		}
		
		loadingText = "Import completed";
		FocusOnObjects();
	}
	
	void OnGUI () {
		GUILayout.BeginArea (new Rect(10, 10, 400, 400));
		objFileName = GUILayout.TextField (objFileName, GUILayout.Width(400));
		GUILayout.Label ("Also try pig.obj, car.obj, and cube.obj");
		if (GUILayout.Button ("Import") && !loading) {
			StartCoroutine (Load());
		}
		GUILayout.Label (loadingText);
		GUILayout.EndArea();
	}
	
	void FocusOnObjects () {
		var cam = Camera.main;
		var bounds = new Bounds(objData.gameObjects[0].transform.position, Vector3.zero);
		for (var i = 0; i < objData.gameObjects.Length; i++) {
			bounds.Encapsulate (objData.gameObjects[i].GetComponent<Renderer>().bounds);
		}
		
		var maxSize = bounds.size;
		var radius = maxSize.magnitude / 2.0f;
	    var horizontalFOV = 2.0f * Mathf.Atan (Mathf.Tan (cam.fieldOfView * Mathf.Deg2Rad / 2.0f) * cam.aspect) * Mathf.Rad2Deg;
	    var fov = Mathf.Min (cam.fieldOfView, horizontalFOV);
	    var distance = radius / Mathf.Sin (fov * Mathf.Deg2Rad / 2.0f);
	
		cam.transform.position = bounds.center;
		cam.transform.Translate (-Vector3.forward * distance);
		cam.transform.LookAt (bounds.center);
	}
}