using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit;
using System;

public class GesturesListener :  MonoBehaviour
{
    public Interactable LoadBtn;
    public Interactable RemoveBtn;
    public Interactable ScaleBtn;
    public Interactable ExplodeBtn;
    public Interactable PlaceBtn;
    public Interactable CrossCutPanelBtn;
    public Interactable XBtn;
    public Interactable YBtn;
    public Interactable ZBtn;
    public GameObject midAirPositioner;
    public GameObject Cube;
    public GameObject Menu;
    public TimeSpan tapTreshold = new TimeSpan(0, 0, 1);
    private int tapCounter;
    private DateTime latestTap;
    private List<Vector3> pointerDraggedPositions;

    [Tooltip("Assign SpeechConfirmationTooltip.prefab here to display confirmation label. Optional.")]
    public SpeechConfirmationTooltip speechConfirmationTooltipPrefab;
    /// <summary>
    /// Tooltip prefab used to display confirmation label. Optional.
    /// </summary>

    public Color trailColor = new Color(1, 0, 0.38f);
    public float distanceFromCamera = 5;
    public float startWidth = 0.01f;
    public float endWidth = 0.01f;
    public float trailTime = 3f;
    public Material material;
    GazeProvider gazeProvider;
    Vector3 upDir;
    Vector3 fwdDir;
    Vector3 rightDir;

    private enum VerticalDirection { Up,Same,Down};
    private enum HorizontalDirection { Left,Same,Right};

    private List<Tuple<VerticalDirection, HorizontalDirection>> signDirections;

    Transform trailTransform;

    bool isTrailActivated = true;

    bool isPointerOnObject = false; //dont check gestures on pointed objects
    // Start is called before the first frame update
    void Start()
    {
        tapCounter = 1;
        latestTap = DateTime.Now;
        //CoreServices.InputSystem?.RegisterHandler<IMixedRealityGestureHandler>(this);
        //CoreServices.InputSystem?.RegisterHandler<IMixedRealityGestureHandler<Vector3>>(this);
        pointerDraggedPositions = new List<Vector3>();
        signDirections = new List<Tuple<VerticalDirection, HorizontalDirection>>();
        gazeProvider = Camera.main.transform.GetComponent<GazeProvider>();
        upDir = Camera.main.transform.up;
        fwdDir = Camera.main.transform.forward;
        rightDir = Camera.main.transform.right;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void tapClicked()
    {
        DateTime currentTime = DateTime.Now;
        TimeSpan interval = currentTime - latestTap;
        if (interval <= tapTreshold)
        {
            //Debug.Log("another tap");
            tapCounter++;
        }
        else
        {
            //Debug.Log("too slow");
            tapCounter = 1;
        }
        if (tapCounter == 5)
        {
            //Debug.Log("Three taps");
            PressLoadOrRemoveBtn();
            tapCounter = 0;
        }
        latestTap = DateTime.Now;
    }

    void PressLoadOrRemoveBtn()
    {
        if (Cube.activeSelf)
        {
            RemoveBtn.TriggerOnClick();
        }
        else
        {
            LoadBtn.TriggerOnClick();
        }
    }

    public void pointerDown(MixedRealityPointerEventData eventData)
    {

    }

    public void pointerUp(MixedRealityPointerEventData eventData)
    {
        if (isPointerOnObject)//check only when gestures is not on object
        {
            isPointerOnObject = false;
            pointerDraggedPositions.Clear();
            signDirections.Clear();
        }
        else
        {
            checkGestureMatch();
        }

    }

    public void pointerDragged(MixedRealityPointerEventData eventData)
    {
        GameObject objectPointedByGaze = gazeProvider.GazeTarget;
        if (objectPointedByGaze == midAirPositioner || objectPointedByGaze == Cube || objectPointedByGaze == Menu)
        {
            isPointerOnObject = true;
            return;//dont show trail or do gestures on the menu or the loaded object
        }
        Vector3 pointerPosition = gazeProvider.GazeOrigin + gazeProvider.GazeDirection*3;
        Vector3 pointerPositionAdjested = new Vector3(((int)(pointerPosition.x * 10)), ((int)(pointerPosition.y * 10)), ((int)(pointerPosition.z * 10)));
        if (pointerDraggedPositions.Count != 0)
        {
            Vector3 lastPoint = pointerDraggedPositions[pointerDraggedPositions.Count - 1];
            if ((pointerPositionAdjested - lastPoint).magnitude >= 2)
            {
                pointerDraggedPositions.Add(pointerPositionAdjested);
                upDir = Camera.main.transform.up;
                rightDir = Camera.main.transform.right;
                fwdDir = gazeProvider.GazeDirection;
                HorizontalDirection horizontalDirection = isPointOnTheLeftOrRight(fwdDir, pointerPositionAdjested - lastPoint, upDir);
                VerticalDirection verticalDirection = isPointAboveOrBelow(fwdDir, pointerPositionAdjested - lastPoint, rightDir);
                signDirections.Add(new Tuple<VerticalDirection, HorizontalDirection>(verticalDirection, horizontalDirection));
            }
        }
        else
        {
            pointerDraggedPositions.Add(pointerPositionAdjested);
        }
    }

    void DebugDirection(List<Tuple<VerticalDirection, HorizontalDirection>> directionsList)
    {
        String directions = "";
        foreach (Tuple<VerticalDirection, HorizontalDirection> dir in directionsList)
        {
            directions += "( ";
            switch (dir.Item1)
            {
                case VerticalDirection.Down:
                    directions += "Down";
                    break;
                case VerticalDirection.Up:
                    directions += "Up";
                    break;
                case VerticalDirection.Same:
                    directions += "Same";
                    break;
            }
            directions += " , ";
            switch (dir.Item2)
            {
                case HorizontalDirection.Left:
                    directions += "Left";
                    break;
                case HorizontalDirection.Right:
                    directions += "Right";
                    break;
                case HorizontalDirection.Same:
                    directions += "Same";
                    break;
            }
            directions += " ) ->";

        }
    }

    void checkGestureMatch()
    {
        
        List<Tuple<VerticalDirection, HorizontalDirection>> reverseDirections = reverseDirectionsList(signDirections);
        if (isDrawnLetterE(signDirections) || isDrawnLetterE(reverseDirections))
        {
            ExplodeBtn.TriggerOnClick();
            showTooltip("Explode");
        }
        else if (isDrawnLetterS(signDirections) || isDrawnLetterS(reverseDirections)) 
        {
            ScaleBtn.TriggerOnClick();
            showTooltip("Scale");
        }
        else if (isDrawnLetterP(signDirections) || isDrawnLetterP(reverseDirections))
        {
            PlaceBtn.TriggerOnClick();
            showTooltip("Place");
        }
        else if (isDrawnLetterC(signDirections) || isDrawnLetterC(reverseDirections))
        {
            CrossCutPanelBtn.TriggerOnClick();
            showTooltip("Cross Cut Panel");
        }
        else
        {
            isCrossCutAxis();
        }
        pointerDraggedPositions.Clear();
        signDirections.Clear();
    }


    List<Tuple<VerticalDirection,HorizontalDirection>> reverseDirectionsList(List<Tuple<VerticalDirection, HorizontalDirection>> originalList)
    {
        List<Tuple<VerticalDirection, HorizontalDirection>> reversedDirection = new List<Tuple<VerticalDirection, HorizontalDirection>>();
        foreach (Tuple<VerticalDirection, HorizontalDirection> dir in signDirections)
        {
            VerticalDirection reversedVerticalDirection = VerticalDirection.Same;
            HorizontalDirection reversedHorizontalDirection = HorizontalDirection.Same;
            switch (dir.Item1)
            {
                case VerticalDirection.Down:
                    reversedVerticalDirection = VerticalDirection.Up;
                    break;
                case VerticalDirection.Up:
                    reversedVerticalDirection = VerticalDirection.Down;
                    break;
                case VerticalDirection.Same:
                    break;
            }
            switch (dir.Item2)
            {
                case HorizontalDirection.Left:
                    reversedHorizontalDirection = HorizontalDirection.Right;
                    break;
                case HorizontalDirection.Right:
                    reversedHorizontalDirection = HorizontalDirection.Left;
                    break;
                case HorizontalDirection.Same:
                    break;
            }
            Tuple<VerticalDirection, HorizontalDirection> reversedDir = new Tuple<VerticalDirection, HorizontalDirection>(reversedVerticalDirection, reversedHorizontalDirection);

        }

        return reversedDirection;
    }
    bool isDrawnLetterC(List<Tuple<VerticalDirection, HorizontalDirection>> directionsList)
    {
        int i = 0;
        bool wentLeft = false;
        bool wentDown = false;
        int mistakesCounter = 0;
        if (i < directionsList.Count &&  (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right)
        {   //keep down/same height and keep left/
            wentLeft =((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown =((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (!wentLeft)//there was no movement left or down at all
        {
            return false;
        }
        bool wentRight = false;
        if (i < directionsList.Count &&  (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Left)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Left)
        {   //keep down/same height and keep left/
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            i++;
        }
        if (wentDown && wentRight && (Math.Abs(i - directionsList.Count) <= 5))//there was no movement left at all
        {
            return true;
        }
        return false;
    }

    bool isDrawnLetterP(List<Tuple<VerticalDirection, HorizontalDirection>> directionsList)
    {
        //
        //                  ------------------------  <-we now reach to this point 
        //                  -----               ----
        //                  -----               ----
        //                  -----               ----
        //                  -----               ----
        //                  ------------------------ 
        //                  -----
        //                  -----
        //                  -----
        //    this point -> -----
        //
        int i = 0;
        bool wentRight = false;
        bool wentUp = false;
        bool wentDown = false;
        if (i < directionsList.Count && directionsList[i].Item1 == VerticalDirection.Down) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Down  )
        {   //keep down/same height and keep left/
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            wentUp = ((directionsList[i].Item1 == VerticalDirection.Up) ? true : wentUp) || wentUp;
            i++;
        }
        if (!wentUp)//there was no movement left or down at all
        {
            return false;
        }
        if (i < directionsList.Count && directionsList[i].Item2 == HorizontalDirection.Left) i++;
        while (i < directionsList.Count && directionsList[i].Item2 != HorizontalDirection.Left )//for a little down right movement on the top edge of P
        {   //keep down/same height and keep left/
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (!wentUp || !wentRight)//if there was no mevement right and up at all
        {
            return false;
        }
        //
        //                  ------------------------<- start point
        //                  -----             ------             
        //                  -----             ------             
        //                  -----             ------             
        //                  -----             ------             
        //                  -----             ------
        //  end point ->    ------------------------ //we now reach to the bottom half circle
        //                  -----
        //                  -----
        //                  -----
        //                  -----
        //
        bool wentLeft = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right )
        {   //keep down/same height and keep left/
            wentLeft = ((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (wentDown && wentLeft && (Math.Abs(i - directionsList.Count) <= 5))//there was no movement right or up at all
        {
            return true;
        }

        return false;
    }

    bool isDrawnLetterE(List<Tuple<VerticalDirection, HorizontalDirection>> directionsList)
    {
        //
        //                  ------------------------  <-this point 
        //                  -----
        //                  -----
        //                  -----
        //                  -----
        //                  ------------------------
        //                  -----
        //                  -----
        //                  -----
        //                  -----------------------
        //
        int i = 0;
        bool wentLeft = false;
        bool wentDown = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right )
        {   //keep down/same height and keep left/
            wentLeft = ((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (!wentLeft)//there was no movement left or down at all
        {
            return false;
        }
        bool wentRight = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Left)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Left )
        {   //keep down/same height and keep left/
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            i++;
        }
        if (!wentDown || !wentRight)//there was no movement left at all
        {
            return false;
        }
        //
        //                  ------------------------
        //                  -----
        //                  -----
        //                  -----
        //                  -----
        //                  ------------------------<-this point 
        //                  -----
        //                  -----
        //                  -----
        //                  -----------------------
        //
        wentLeft = false;
        wentDown = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right )
        {   //keep down/same height and keep left/
            wentLeft = ((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (!wentLeft)//there was no movement left or down at all
        {
            return false;
        }
        wentRight = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Left)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Left )
        {   //keep down/same height and keep left/
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (wentDown && wentRight && (Math.Abs(i - directionsList.Count) <= 5))//there was no movement left at all
        {
            return true;
        }
        return false;
    }

    bool isDrawnLetterS(List<Tuple<VerticalDirection, HorizontalDirection>> directionsList)
    {
        //
        //                  ------------------------  <-this point 
        //                  -----
        //                  -----
        //                  -----
        //                  -----
        //                  ------------------------ <-we now reach to this point 
        //                                      -----
        //                                      -----
        //                                      -----
        //                  -----------------------
        //
        int i = 0;
        bool wentLeft = false;
        bool wentDown = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right )
        {   //keep down/same height and keep left/
            wentLeft = ((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (!wentLeft)//there was no movement left or down at all
        {
            return false;
        }
        bool wentRight = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Left)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Left )
        {   //keep down/same height and keep left/
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            wentRight = ((directionsList[i].Item2 == HorizontalDirection.Right) ? true : wentRight) || wentRight;
            i++;
        }
        if (!wentDown || !wentRight)//there was no movement left at all
        {
            return false;
        }
        //
        //                  ------------------------
        //                  -----
        //                  -----
        //                  -----
        //                  -----
        //                  ------------------------ <-this point//we now reach to the bottom leftest point by going left/same and down/same 
        //                                      -----
        //                                      -----
        //                                      -----
        //                  -----------------------
        //
        wentLeft = false;
        wentDown = false;
        if (i < directionsList.Count && (directionsList[i].Item1 == VerticalDirection.Up || directionsList[i].Item2 == HorizontalDirection.Right)) i++;
        while (i < directionsList.Count && directionsList[i].Item1 != VerticalDirection.Up && directionsList[i].Item2 != HorizontalDirection.Right )
        {   //keep down/same height and keep left/
            wentLeft = ((directionsList[i].Item2 == HorizontalDirection.Left) ? true : wentLeft) || wentLeft;
            wentDown = ((directionsList[i].Item1 == VerticalDirection.Down) ? true : wentDown) || wentDown;
            i++;
        }
        if (wentDown && wentLeft && (Math.Abs(i- signDirections.Count)<= 5))//there was no movement right or up at all
        {
            return true;
        }
        return false;

    }


    //returns -1 when to the left, 1 to the right, and 0 for forward/backward
    HorizontalDirection isPointOnTheLeftOrRight(Vector3 fwd, Vector3 targetDir, Vector3 up)
    {
        Vector3 right = Vector3.Cross(up, fwd);        // right vector
        float dir = Vector3.Dot(right, targetDir);

        if (dir > 0f)
        {
            //return 1f;
            return HorizontalDirection.Right;
        }
        else if (dir < 0f)
        {
            //return -1f;
            return HorizontalDirection.Left;
        }
        else
        {
            //return 0f;
            return HorizontalDirection.Same;
        }
    }

    //returns -1 when to the left, 1 to the right, and 0 for forward/backward
    VerticalDirection isPointAboveOrBelow(Vector3 fwd, Vector3 targetDir, Vector3 right)
    {
        Vector3 up = Vector3.Cross(fwd, right);        // right vector
        float dir = Vector3.Dot(up, targetDir);

        if (dir > 0f)
        {
            //return 1f;
            return VerticalDirection.Up;
        }
        else if (dir < 0f)
        {
            //return -1f;
            return VerticalDirection.Down;
        }
        else
        {
            //return 0f;
            return VerticalDirection.Same;
        }
    }


    bool isCrossCutAxis()
    {
        float maxX = -9999f, minX = 9999f, maxY = -9999f, minY = 9999f, maxZ = -9999f, minZ = 9999f;
        //String positions = "";
        foreach(Vector3 point in pointerDraggedPositions)
        {
            //positions += "->"+point;
            maxX = (point.x > maxX) ? point.x : maxX;
            minX = (point.x < minX) ? point.x : minX;
            maxY = (point.y > maxY) ? point.y : maxY;
            minY = (point.y < minY) ? point.y : minY;
            maxZ = (point.z > maxZ) ? point.z : maxZ;
            minZ = (point.z < minZ) ? point.z : minZ;
        }
        //Debug.Log("pointerPositions: " + positions);

        float disX = maxX-minX, disY = maxY - minY, disZ = maxZ - minZ;
        if (disX <= 1f && disY <= 1f && disZ >= 2f)
        {
            ZBtn.TriggerOnClick();
            showTooltip("Z");
            return true;
        }
        else if (disX <= 1f && disZ <= 1f && disY >= 2f)
        {
            YBtn.TriggerOnClick();
            showTooltip("Y");
            return true;
        }
        else if(disZ <= 1f && disY <= 1f && disX >= 2f)
        {
            XBtn.TriggerOnClick();
            showTooltip("X");
            return true;
        }
        return false;
    }

    public void startTrail(MixedRealityPointerEventData eventData)
    {
        if (isTrailActivated && !isPointerOnObject)//only show trail when not on object
        {
            GameObject trailObj = new GameObject("Mouse Trail");
            trailTransform = trailObj.transform;
            TrailRenderer trail = trailObj.AddComponent<TrailRenderer>();
            trail.time = -1f;
            MoveTrailToCursor(eventData);
            trail.time = trailTime;
            trail.startWidth = startWidth;
            trail.endWidth = endWidth;
            //trail.numCapVertices = 2;
            trail.numCapVertices = 45;
            trail.numCornerVertices = 45;
            //trail.sharedMaterial = new Material(Shader.Find("Unlit/Color"));
            trail.sharedMaterial = material;
            trail.sharedMaterial.color = trailColor;
        }
    }

    public void MoveTrailToCursor(MixedRealityPointerEventData eventData)
    {
        if (isTrailActivated && !isPointerOnObject)//only show trail when not on object
        {
            Vector3 screenPosition = gazeProvider.GazeOrigin + gazeProvider.GazeDirection * 3;
            trailTransform.position = new Vector3(screenPosition.x, screenPosition.y, screenPosition.z);
        }
    }

    public void toggleTrailMode()
    {
        isTrailActivated = !isTrailActivated;
    }

    void showTooltip(String text)
    {
        SpeechConfirmationTooltip speechConfirmationTooltipPrefabInstance = null;
        speechConfirmationTooltipPrefabInstance = Instantiate(speechConfirmationTooltipPrefab);

        // Update the text label with recognized keyword
        speechConfirmationTooltipPrefabInstance.SetText(text);

        // Trigger animation of the Speech Confirmation Tooltip prefab
        speechConfirmationTooltipPrefabInstance.TriggerConfirmedAnimation();

        // Tooltip prefab instance will be destroyed on animation complete 
        // by DestroyOnAnimationComplete.cs in the SpeechConfirmationTooltip.prefab

    }
}
