///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Raviraj.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DrawAllBirdsEating()
{
	pPP = { 0.0f, 0.0f, 0.0f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBirdEating);

	pPP = { 0.0f, 0.2f, 0.0f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBirdEating);

	pPP = { 0.3f, 0.0f, 0.0f,		0.15f, 0.15f, 1.0f,		0.0f, 180.0f, 0.0f };
	PlaceObject(DrawBirdEating);

	pPP = { 0.3f, 0.2f, 0.0f,		0.15f, 0.15f, 1.0f,		0.0f, 180.0f, 0.0f };
	PlaceObject(DrawBirdEating);
}

void DrawBirdEating()
{
	//eye
	glEnable(GL_POINT_SMOOTH);
	glPointSize(4);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.35f, -0.455f, 0.0f);
	glEnd();


	glEnable(GL_POINT_SMOOTH);
	glPointSize(8);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.35f, -0.45f, 0.0f);
	glEnd();
	//eye end

	//food
	glEnable(GL_POINT_SMOOTH);
	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.7f);
	glVertex3f(-0.35f, -0.72f, 0.0f);
	glEnd();

	//LEG
	//11
	glColor3f(0.51f, 0.26f, 0.20f);
	glBegin(GL_POLYGON);
	glVertex3f(0.15f, -0.75f, 0.0f);
	glVertex3f(0.13f, -0.75f, 0.0f);
	glVertex3f(0.25f, -0.45f, 0.0f);
	glVertex3f(0.22f, -0.45f, 0.0f);
	glEnd();

	//12
	glBegin(GL_POLYGON);
	glVertex3f(0.3f, -0.35f, 0.0f);
	glVertex3f(0.33f, -0.35f, 0.0f);
	glVertex3f(0.345f, -0.7f, 0.0f);
	glVertex3f(0.335f, -0.7f, 0.0f);
	glEnd();

	//13
	glBegin(GL_POLYGON);
	glVertex3f(0.15f, -0.75f, 0.0f);
	glVertex3f(0.13f, -0.75f, 0.0f);
	glVertex3f(0.115f, -0.78f, 0.0f);
	glVertex3f(0.135f, -0.80f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.115f, -0.78f, 0.0f);
	glVertex3f(0.125f, -0.80f, 0.0f);
	glVertex3f(-0.05f, -0.84f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.115f, -0.80f, 0.0f);
	glVertex3f(0.135f, -0.80f, 0.0f);
	glVertex3f(0.055f, -0.87f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.125f, -0.75f, 0.0f);
	glVertex3f(0.140f, -0.78f, 0.0f);
	glVertex3f(0.25f, -0.80f, 0.0f);
	glEnd();

	//second leg detailing
	glBegin(GL_POLYGON);
	glVertex3f(0.335f, -0.7f, 0.0f);
	glVertex3f(0.345f, -0.7f, 0.0f);
	glVertex3f(0.39f, -0.75f, 0.0f);
	glVertex3f(0.35f, -0.78f, 0.0f);
	glVertex3f(0.325f, -0.75f, 0.0f);
	glVertex3f(0.345f, -0.72f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.39f, -0.75f, 0.0f);
	glVertex3f(0.375f, -0.77f, 0.0f);
	glVertex3f(0.45f, -0.80f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.35f, -0.79f, 0.0f);
	glVertex3f(0.325f, -0.75f, 0.0f);
	glVertex3f(0.25f, -0.80f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.315f, -0.75f, 0.0f);
	glVertex3f(0.350f, -0.72f, 0.0f);
	glVertex3f(0.22f, -0.7f, 0.0f);
	glEnd();

	//LEG END

	//internals
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.7f, 0.65f, 0.0f);
	glVertex3f(0.5f, 0.4f, 0.0f);
	glVertex3f(0.3f, 0.0f, 0.0f);
	glVertex3f(0.23f, -0.1f, 0.0f);
	glVertex3f(0.2f, -0.15f, 0.0f);
	glVertex3f(0.15f, -0.2f, 0.0f);
	glVertex3f(0.1f, -0.25f, 0.0f);
	glVertex3f(0.05f, -0.28f, 0.0f);
	glVertex3f(-0.05f, -0.35f, 0.0f);
	glVertex3f(-0.1f, -0.35f, 0.0f);
	glVertex3f(-0.13f, -0.3f, 0.0f);
	glVertex3f(-0.115f, -0.25f, 0.0f);
	glVertex3f(-0.08f, -0.2f, 0.0f);
	glVertex3f(-0.05f, -0.1f, 0.0f);
	glVertex3f(-0.025f, -0.05f, 0.0f);
	glEnd();

	//internal2
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.8f, 0.8f, 0.8f);
	//glVertex3f(0.3f+, 0.15f+y, 0.0f);
	//glVertex3f(0.35f+, 0.225f+y, 0.0f);
	//glVertex3f(0.4f+, 0.3f+y, 0.0f);
	//glVertex3f(0.43f+, 0.35f+y, 0.0f);
	//glVertex3f(0.41f+, 0.41f+y, 0.0f);
	glVertex3f(0.3f, 0.4f, 0.0f);
	glVertex3f(0.25f, 0.3f, 0.0f);
	glVertex3f(0.28f, 0.25f, 0.0f);
	glVertex3f(0.20f, 0.13f, 0.0f);
	glVertex3f(0.10f, -0.03f, 0.0f);
	glEnd();


	glColor3f(0.4156f, 0.5372f, 0.65f);
	//1
	glBegin(GL_TRIANGLES);
	glVertex3f(0.3f, 0.4f, 0.0f);
	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.7f, 0.65f, 0.0f);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glVertex3f(0.85f, 0.6f, 0.0f);
	glVertex3f(0.85f, 0.65f, 0.0f);
	glVertex3f(0.5f, 0.4f, 0.0f);
	glVertex3f(0.4f, 0.2f, 0.0f);
	glEnd();

	//3
	glBegin(GL_POLYGON);
	glVertex3f(0.5f, 0.3f, 0.0f);
	glVertex3f(0.15f, 0.3f, 0.0f);
	glVertex3f(-0.25f, -0.15f, 0.0f);
	glVertex3f(0.2f, -0.35f, 0.0f);
	glEnd();

	//3.5
	glBegin(GL_POLYGON);
	glVertex3f(0.3f, 0.4f, 0.0f);
	glVertex3f(0.15f, 0.3f, 0.0f);
	glVertex3f(0.5f, 0.3f, 0.0f);
	glVertex3f(0.5f, 0.4f, 0.0f);
	glEnd();

	// 4
	glBegin(GL_TRIANGLES);
	glVertex3f(0.35f, 0.4f, 0.0f);
	glVertex3f(-0.1f, 0.1f, 0.0f);
	glVertex3f(-0.25f, -0.15f, 0.0f);
	glEnd();

	//5
	glBegin(GL_POLYGON);
	glVertex3f(-0.2f, -0.1f, 0.0f);
	glVertex3f(0.2f, -0.35f, 0.f);
	glVertex3f(0.0f, -0.5f, 0.0f);
	glVertex3f(-0.35f, -0.25f, 0.0f);
	glEnd();

	//6
	glBegin(GL_POLYGON);
	glVertex3f(0.0f, -0.5f, 0.0f);
	glVertex3f(-0.1f, -0.55f, 0.0f);
	glVertex3f(-0.2f, -0.575, 0.0f);
	glVertex3f(-0.25f, -0.6f, 0.0f);
	glVertex3f(-0.4f, -0.6f, 0.0f);
	glVertex3f(-0.45f, -0.55f, 0.0f);
	glVertex3f(-0.455f, -0.5f, 0.0f);
	glVertex3f(-0.46f, -0.4f, 0.0f);
	glVertex3f(-0.45f, -0.35f, 0.0f);
	glVertex3f(-0.4f, -0.3f, 0.0f);
	glVertex3f(-0.35f, -0.25f, 0.0f);
	glEnd();

	//7
	glBegin(GL_POLYGON);
	glVertex3f(-0.3f, -0.55f, 0.0f);
	glVertex3f(-0.4f, -0.6f, 0.0f);
	glVertex3f(-0.42f, -0.7f, 0.0f);
	glVertex3f(-0.4f, -0.8f, 0.0f);
	glEnd();

	//8
	glBegin(GL_POLYGON);
	glVertex3f(-0.3f, -0.55f, 0.0f);
	glVertex3f(-0.25f, -0.6f, 0.0f);
	glVertex3f(-0.3f, -0.7f, 0.0f);
	glVertex3f(-0.35f, -0.8f, 0.0f);
	glEnd();

	//9
	glBegin(GL_POLYGON);
	glVertex3f(0.25f, -0.25f, 0.0f);
	glVertex3f(0.23f, -0.3f, 0.0f);
	glVertex3f(0.3f, -0.35f, 0.0f);
	glVertex3f(0.33f, -0.35f, 0.0f);
	glEnd();

	//10
	glBegin(GL_POLYGON);
	glVertex3f(0.23f, -0.3f, 0.0f);
	glVertex3f(0.17f, -0.37f, 0.0f);
	glVertex3f(0.22f, -0.45f, 0.0f);
	glVertex3f(0.25f, -0.45f, 0.0f);
	glEnd();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


