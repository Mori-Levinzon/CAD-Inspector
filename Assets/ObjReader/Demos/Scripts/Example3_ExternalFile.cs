using UnityEngine;
using System.Collections;

public class Example3_ExternalFile : MonoBehaviour {

	public string objFileName = "Car_obj.txt";
	public Material standardMaterial;
	public Material transparentMaterial;
	
	private string loadingText = "";

	IEnumerator Start () {
		loadingText = "Loading...";
		yield return null;
		yield return null;
		
		objFileName = Application.dataPath + "/ObjReader/Sample Files/" + objFileName;
		
		ObjReader.use.ConvertFile (objFileName, true, standardMaterial, transparentMaterial);
		
		loadingText = "";
	}
	
	void OnGUI () {
		GUILayout.BeginArea (new Rect(10, 10, 400, 400));
		GUILayout.Label (loadingText);
		GUILayout.EndArea();
	}
}