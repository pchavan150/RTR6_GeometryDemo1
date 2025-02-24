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

void DrawFlower1()
{
	//DrawFlower
	glColor3f(1.0f, 0.0f, 0.0f);
	CreateCircle(-0.85f, -0.63f, 0.012f);
	CreateCircle(-0.835f, -0.639f, 0.012f);
	CreateCircle(-0.838f, -0.663f, 0.012f);
	CreateCircle(-0.858f, -0.67f, 0.012f);
	CreateCircle(-0.867f, -0.65f, 0.012f);

	glColor3f(0.0f, 0.0f, 1.0f);
	CreateCircle(-0.85f, -0.65f, 0.0085f);
}

void DrawBush1()
{
	glTranslatef(0.95f, 0.65, 0.0);
	DrawFlower1();

	glTranslatef(-0.1f, 0.1f, 0.0f);
	DrawFlower1();

	glTranslatef(-0.15f, 0.0f, 0.0f);
	DrawFlower1();

	//bush1
	glColor3f(0.0f, 1.0f, 0.0f);
	CreateCircle(-0.80f, -0.85f, 0.05f);
	CreateCircle(-0.75f, -0.85f, 0.05f);
	CreateCircle(-0.85f, -0.85f, 0.05f);
	CreateCircle(-0.87f, -0.82f, 0.06f);
	CreateCircle(-0.90f, -0.77f, 0.06f);
	CreateCircle(-0.71f, -0.85f, 0.05f);
	CreateCircle(-0.75f, -0.85f, 0.05f);
	CreateCircle(-0.67f, -0.85f, 0.05f);
	CreateCircle(-0.62f, -0.82f, 0.06f);
	CreateCircle(-0.58f, -0.77f, 0.06f);
	CreateCircle(-0.78f, -0.70f, 0.11f);
	CreateCircle(-0.65f, -0.69f, 0.12f);
}

void DrawGrass1()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.1f, -0.6f, 0.0f);
	glVertex3f(0.2f, -0.90f, 0.0f);
	glVertex3f(0.3f, -0.9f, 0.0f);

	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.14f, -0.3f, 0.0f);
	glVertex3f(0.2f, -0.9f, 0.0f);
	glVertex3f(0.3f, -0.9f, 0.0f);

	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.25f, -0.9f, 0.0f);
	glVertex3f(0.35f, -0.25f, 0.0f);
	glVertex3f(0.43f, -0.9f, 0.0f);


	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.35f, -0.9f, 0.0f);
	glVertex3f(0.55f, -0.58f, 0.0f);
	glVertex3f(0.50f, -0.9f, 0.0f);
	glEnd();

}

void DrawGrass2()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.60f, -0.6f, 0.0f);
	glVertex3f(0.63f, -0.90f, 0.0f);
	glVertex3f(0.65f, -0.9f, 0.0f);

	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.62f, -0.3f, 0.0f);
	glVertex3f(0.63f, -0.9f, 0.0f);
	glVertex3f(0.64f, -0.9f, 0.0f);


	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.64f, -0.9f, 0.0f);
	glVertex3f(0.645f, -0.25f, 0.0f);
	glVertex3f(0.655f, -0.9f, 0.0f);


	glColor3f(0.1f, 0.5f, 0.0f);
	glVertex3f(0.65f, -0.9f, 0.0f);
	glVertex3f(0.70f, -0.5f, 0.0f);
	glVertex3f(0.67f, -0.9f, 0.0f);
	glEnd();
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

