
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


extern float testMovX;
extern float testMovY;
extern float testMoveSpeed;
extern float testScaleX;
extern float testScaleY;
extern float testScaleSpeed;
extern float testRotateX;
extern float testRotateY;
extern float testRotateSpeed;
extern float cameraX;
extern float cameraY;
extern float cameraZ;
extern float cameraSpeed;

extern BOOL bFullScreen;
extern void(*testObjectSelection)(void);

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

enum tagTransformMode
{
	TRANSLATE,
	ROTATE,
	SCALE,
};

extern tagTransformMode  TransformMode;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float GetRandomFloat(float min, float max);
void PlaceObject(void(*fun)());
BOOL IsObjectPresent(void(*fun)());
void SetDefaultValues();
void ScaleUniform2D(float point);
void ScaleUniform3D(float point);
void MoveObject();
void ChangeSelectedObject();
void ChangeTransformMode();

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


