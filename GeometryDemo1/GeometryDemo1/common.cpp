///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL bFullScreen = FALSE;

PlacementParameters pPP = { 0 };

float testMovX = 0.0f;
float testMovY = 0.0f;
float testMoveSpeed = 0.05f;

float testScaleX = 0.0f;
float testScaleY = 0.0f;
float testScaleSpeed = 0.1f;

float testRotateX = 0.0f;
float testRotateY = 0.0f;
float testRotateSpeed = 2.0f;

float cameraX = -1.0f;
float cameraY = 0.05f;
float cameraZ = 0.45f;
float cameraSpeed = 0.05f; //0.05

int testSizeOfObjectList = -1;
void((*(testObjectList[100]))(void));
void(*testObjectSelection)(void) = NULL;

tagTransformMode  TransformMode = TRANSLATE;



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Random float generator in a given range
float GetRandomFloat(float min, float max) {
	return min + (rand() / (float)RAND_MAX) * (max - min);
}

void ScaleUniform2D(float point)
{
	glScalef(point, point, 0);
}

void ScaleUniform3D(float point)
{
	glScalef(point, point, point);
}

void SetDefaultValues() {
	pPP.xT = 0.0f;
	pPP.yT = 0.0f;
	pPP.zT = 0.0f;
	pPP.xS = 1.0f;
	pPP.yS = 1.0f;
	pPP.zS = 1.0f;
	pPP.xR = 0.0f;
	pPP.yR = 0.0f;
	pPP.zR = 0.0f;
}

void PlaceObject(void(*object)())
{

	if (!IsObjectPresent(object))
	{
		testSizeOfObjectList++;
		testObjectList[testSizeOfObjectList] = object;
	}

	if (object == testObjectSelection)
	{
		MoveObject();
	}

	glPushMatrix();

	glTranslatef(pPP.xT, pPP.yT, pPP.zT);
	glScalef(pPP.xS, pPP.yS, pPP.zS);
	glRotatef(pPP.xR, 1.0f, 0.0f, 0.0f);
	glRotatef(pPP.yR, 0.0f, 1.0f, 0.0f);
	glRotatef(pPP.zR, 0.0f, 0.0f, 1.0f);

	object();

	if (object == testObjectSelection)
	{
		glColor3f(1.0f, 0.0f, 0.0f);
		glutSolidSphere(0.1, 10, 10);
	}
	

	glPopMatrix();
	SetDefaultValues();

}

BOOL IsObjectPresent(void(*object)())
{
	for (int i = 0; i <= testSizeOfObjectList; i++)
	{
		if (testObjectList[i] == object)
			return TRUE;
	}

	return FALSE;
}

void MoveObject()
{
	pPP.xT += testMovX;
	pPP.yT += testMovY;
	pPP.xS += testScaleX;
	pPP.yS += testScaleY;
	pPP.xR += testRotateX;
	pPP.yR += testRotateY;

}

void ChangeSelectedObject()
{
	for (int i = 0; i <= testSizeOfObjectList; i++)
	{
		if (testObjectSelection == NULL)
		{
			testObjectSelection = testObjectList[0];
			return;
		}

		if (testObjectList[i] == testObjectSelection)
		{
			if (i + 1 <= testSizeOfObjectList)
			{
				//set next object
				testObjectSelection = testObjectList[i + 1];
				break;
			}
			else
			{
				//if no next object, set first object
				testObjectSelection = testObjectList[0];
				break;;
			}

		}
	}

	testMovX = 0.0f;
	testMovY = 0.0f;
	testScaleX = 0.0f;
	testScaleY = 0.0f;
	testRotateX = 0.0f;
	testRotateY = 0.0f;
}


void ChangeTransformMode()
{
	if (TransformMode == TRANSLATE)
	{
		TransformMode = SCALE;
	}
	else if (TransformMode == SCALE)
	{
		TransformMode = ROTATE;
	}
	else
	{
		TransformMode = TRANSLATE;
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


