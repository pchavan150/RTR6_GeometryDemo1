///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Madhuri.h"


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

//All definations

void DrawCloud4()
{
	glColor3f(1.0f, 1.0f, 1.0f);
	CreateCircle(-0.56f, 0.5f, 0.15f);
	CreateCircle(-0.76f, 0.55f, 0.17f);
	CreateCircle(-0.86f, 0.45f, 0.12f);
}

void DrawCloud5()
{
	glColor3f(1.0f, 1.0f, 1.0f);
	CreateCircle(0.38f, 0.50f, 0.20f);
	CreateCircle(0.65f, 0.50f, 0.28f);
	CreateCircle(0.45f, 0.69f, 0.12f);
}

void DrawCloud6()
{
	glColor3f(1.0f, 1.0f, 1.0f);
	CreateCircle(-0.20f, 0.68f, 0.150f);
	CreateCircle(-0.27f, 0.70f, 0.17f);
	CreateCircle(-0.25f, 0.79f, 0.12f);
}


void CreateCircle(float center_x, float center_y, float radius)
{
	//variable declaration
	float theta = 0.0f;
	float x, y;

	//code
	glLineWidth(5.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * (PI / 180.0f);
		x = radius * cos(theta) + center_x;
		y = radius * sin(theta) + center_y;
		glVertex3f(x, y, 0.0f);
	}
	glEnd();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

