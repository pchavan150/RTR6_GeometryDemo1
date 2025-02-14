
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include<GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef PI
#define PI 3.14159265359
#endif



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

extern BOOL bFullScreen;


typedef struct
{
	float x;
	float y;
	float z;
} VERTEX;


typedef struct
{
	float xT;
	float yT;
	float zT;
	float xS;
	float yS;
	float zS;
	float xR;
	float yR;
	float zR;
} PlacementParameters;

extern PlacementParameters pPP;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float GetRandomFloat(float min, float max);
void PlaceObject(void(*fun)());
void SetDefaultValues();
void ScaleUniform2D(float point);
void ScaleUniform3D(float point);


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


