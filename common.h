#pragma once

#include<GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef PI
#define PI 3.14159265359
#endif

void ScaleUniform2D(float point);
void ScaleUniform3D(float point);

// Global variable declarations
extern BOOL bFullScreen;


typedef struct
{
	float x;
	float y;
	float z;
} VERTEX;


extern VERTEX aVertices[3];

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

float random_float(float min, float max);
void PlaceObject(void(*fun)());
void set_default_values();