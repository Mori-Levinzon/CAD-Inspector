// This example uses OBJ and MTL files from TextAssets, and doesn't supply any material,
// so the default VertexLit materials are used.
// Note that files used as TextAssets should end with ".txt".
// Since ConvertString uses only plain strings, no textures can be loaded.
// In most cases you'd use ConvertFile for local files, or ConvertFileAsync for WWW files.

using UnityEngine;
using System.Collections;

public class Example1_TextAsset : MonoBehaviour {

	public TextAsset objFile;
	public TextAsset mtlFile;
	
	private string loadingText = "";
	
	IEnumerator Start () {
		loadingText = "Loading...";
		yield return null;
		yield return null;
		
		if (mtlFile != null) {
			ObjReader.use.ConvertString (objFile.text, mtlFile.text);
		}
		else {
			ObjReader.use.ConvertString (objFile.text);
		}
		
		loadingText = "";
	}
	
	void OnGUI () {
		GUILayout.BeginArea (new Rect(10, 10, 400, 400));
		GUILayout.Label (loadingText);
		GUILayout.EndArea();
	}
}