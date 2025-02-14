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

void PlaceObject(void(*fun)())
{
	glPushMatrix();

	glTranslatef(pPP.xT, pPP.yT, pPP.zT);
	glScalef(pPP.xS, pPP.yS, pPP.zS);
	glRotatef(pPP.xR, 1.0f, 0.0f, 0.0f);
	glRotatef(pPP.yR, 0.0f, 1.0f, 0.0f);
	glRotatef(pPP.zR, 0.0f, 0.0f, 1.0f);

	fun();

	glPopMatrix();
	SetDefaultValues();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

