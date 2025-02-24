///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include "Rishan.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here




///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void createCircle(float centerX, float centerY, float radius) {

	// var decl.
	float theta = 2.0f;
	float x, y;

	//code
	glLineWidth(0.5f);

	glBegin(GL_TRIANGLE_FAN);
	//glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	//glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 360; i++)
	{
		theta = i * (PI / 180.0f);
		x = radius * cos(theta) + centerX;
		y = radius * sin(theta) + centerY;
		glVertex3f(x, y, 0.0f);
	}

	glEnd();

}

void createHalfCircle(float centerX, float centerY, float radius) {

	// var decl.
	float theta = 2.0f;
	float x, y;

	//code
	glLineWidth(1.5f);

	glBegin(GL_TRIANGLE_FAN);
	//glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	//glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 360; i++)
	{
		theta = i * (PI / 360.0f);
		x = radius * cos(theta) + centerX;
		y = radius * sin(theta) + centerY;
		glVertex3f(x, y, 0.0f);
	}

	glEnd();

}

void createHalfHollowCircle(float centerX, float centerY, float radius) {

	// var decl.
	float theta = 2.0f;
	float x, y;

	//code
	glLineWidth(6.9f);

	//glBegin(GL_TRIANGLE_FAN);
	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	//glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 360; i++)
	{
		theta = i * (PI / 360.0f);
		x = radius * cos(theta) + centerX;
		y = radius * sin(theta) + centerY;
		glVertex3f(x, y, 0.0f);
	}

	glEnd();

}

void DrawSky()
{
	//Rishan
	// sky
	glBegin(GL_QUADS); // Blue Rectangle
	glColor3f(0.0f, 0.5f, 1.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.5f, 1.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glEnd();



	glBegin(GL_QUADS); // Black Rectangle
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.8f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();
}

void DrawCloud3()
{
	//rishan
	// From Left Cloud 2
	glColor3f(0.92f, 0.92f, 0.92f);
	createCircle(-0.420f, 0.665f, 0.045f); // 0
	createCircle(-0.380f, 0.645f, 0.065f); // 1
	createCircle(-0.300f, 0.652f, 0.069f); // 2
	createCircle(-0.298f, 0.650f, 0.070f); // 3
	createCircle(-0.196f, 0.635f, 0.066f); // 4
	createCircle(-0.098f, 0.70f, 0.09f); // 5
}

void DrawCloud2()
{
	//Rishan
	glColor3f(0.90f, 0.90f, 0.90f);
	createCircle(-0.84f, 0.855f, 0.025f); // -1
	createCircle(-0.82f, 0.85f, 0.03f); // 0
	createCircle(-0.78f, 0.83f, 0.055f); // 1
	createCircle(-0.7f, 0.85f, 0.05f); // 2
	createCircle(-0.7f, 0.8f, 0.049f); // 3
	createCircle(-0.6f, 0.85f, 0.09f); // 4
	createCircle(-0.50f, 0.83f, 0.05f); // 5
	createCircle(-0.46f, 0.83f, 0.03f); // 6
}

void DrawCloud1()
{
	//Rishan
	// Rightmost
	glColor3f(0.89f, 0.89f, 0.89f);
	createCircle(0.6f, 0.85f, 0.10f);
	createCircle(0.7f, 0.865f, 0.07f);
	createCircle(0.7f, 0.8f, 0.055f);
	createCircle(0.78f, 0.86f, 0.055f);
	createCircle(0.46f, 0.845f, 0.07f);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////



