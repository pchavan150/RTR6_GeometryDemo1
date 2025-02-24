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


void DrawBird_Standing() {

	glPushMatrix();
	glTranslatef(-0.3f, -0.05f, -0.1f);

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
	glPopMatrix();

	glPushMatrix();
	glRotatef(60.0f, 0.0f, 0.0f, -1.0f);

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
	glVertex3f(-0.42f, -0.7f, 0.0f);
	glVertex3f(-0.4f, -0.8f, 0.0f);
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-0.3f, -0.05f, -0.1f);
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
	glVertex3f(0.17f, -0.3f, 0.0f);
	glVertex3f(0.22f, -0.45f, 0.0f);
	glVertex3f(0.25f, -0.45f, 0.0f);
	glEnd();

	glPopMatrix();

}

static void tree_internals(GLfloat x, GLfloat y, GLfloat radius)
{
	int i;
	float angle;
	glBegin(GL_POLYGON);
	for (i = 0; i < 10; i++)
	{
		angle = i * 2 * (PI / 10);
		glVertex2f((x + (sin(angle) * radius)) / 1200, (y + (cos(angle) * radius)) / 700);
	}
	glEnd();
}

void DrawFlower()
{
	glBegin(GL_POLYGON);  //start flower1 stem
	glColor3f(0.0, 0.5, 0.0);
	glVertex2f(50 / 1200.0f, 150 / 700.0f);
	glVertex2f(50 / 1200.0f, 120 / 700.0f);
	glVertex2f(55 / 1200.0f, 120 / 700.0f);
	glVertex2f(55 / 1200.0f, 150 / 700.0f);
	glEnd();   //end flower1 stem

	glBegin(GL_POLYGON);  //start flower1
	glColor3f(1.0f, 0.2670f, 0.2f);
	glVertex2f(50 / 1200.0f, 150 / 700.0f);
	glVertex2f(40 / 1200.0f, 140 / 700.0f);
	glVertex2f(30 / 1200.0f, 155 / 700.0f);
	glVertex2f(50 / 1200.0f, 160 / 700.0f);
	glVertex2f(30 / 1200.0f, 165 / 700.0f);
	glVertex2f(50 / 1200.0f, 170 / 700.0f);
	glVertex2f(52 / 1200.0f, 165 / 700.0f);
	glVertex2f(55 / 1200.0f, 170 / 700.0f);
	glVertex2f(75 / 1200.0f, 165 / 700.0f);
	glVertex2f(55 / 1200.0f, 170 / 700.0f);
	glVertex2f(75 / 1200.0f, 155 / 700.0f);
	glVertex2f(65 / 1200.0f, 140 / 700.0f);
	glVertex2f(55 / 1200.0f, 150 / 700.0f);
	glEnd();   //end flower1


	glBegin(GL_POLYGON);// start bush1
	glColor3f(0.0, 0.5, 0.0);
	glVertex2f(50 / 1200.0f, 110 / 700.0f);
	glColor3f(0.0, 0.5, 0.0);
	glVertex2f(40 / 1200.0f, 125 / 700.0f);
	glColor3f(0.0, 0.5, 0.0);
	glVertex2f(55 / 1200.0f, 117 / 700.0f);
	glColor3f(0.0, 0.9, 0.0);
	glVertex2f(60 / 1200.0f, 140 / 700.0f);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(65 / 1200.0f, 117 / 700.0f);
	glColor3f(0.0, 0.8, 0.0);
	glVertex2f(70 / 1200.0f, 138 / 700.0f);
	glColor3f(0.0, 0.9, 0.0);
	glVertex2f(75 / 1200.0f, 120 / 700.0f);
	glColor3f(0.0, 0.8, 0.0);
	glVertex2f(85 / 1200.0f, 130 / 700.0f);
	glColor3f(0.0, 0.9, 0.0);
	glVertex2f(80 / 1200.0f, 110 / 700.0f);
	glEnd();//bush1 end

}

void DrawFlowers() {
	glPushMatrix();
	glTranslatef(-0.1f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, -0.1f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.05f, -0.05f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.1f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, -0.1f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.1f, -0.1f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.05f, -0.05f, 0.0f);
	DrawFlower();
	glPopMatrix();

	//
	glPushMatrix();
	glTranslatef(-0.08f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.03f, 0.0f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, -0.08f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.08f, -0.08f, 0.0f);
	DrawFlower();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.08f, -0.08f, 0.0f);
	DrawFlower();
	glPopMatrix();
}


void DrawTree3() {
	/*glScalef(4.0f, 4.0f, 4.0f);*/


	glColor3f(0.0, 0.645, 0.0);
	tree_internals(210, 300, 40);
	tree_internals(250, 300, 20);
	tree_internals(170, 300, 20);
	tree_internals(280, 330, 30);
	tree_internals(140, 330, 30);
	tree_internals(290, 360, 30);
	tree_internals(130, 360, 30);
	tree_internals(160, 380, 40);
	tree_internals(210, 400, 40);
	tree_internals(270, 380, 40);
	tree_internals(210, 350, 50);

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex2f(190 / 1200.0f, 150 / 700.0f);
	glVertex2f(200 / 1200.0f, 300 / 700.0f); 		//stem
	glVertex2f(230 / 1200.0f, 300 / 700.0f);
	glVertex2f(240 / 1200.0f, 150 / 700.0f);
	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex2f(230 / 1200.0f, 220 / 700.0f);
	glVertex2f(230 / 1200.0f, 230 / 700.0f); 		//stm
	glVertex2f(280 / 1200.0f, 250 / 700.0f);
	glVertex2f(270 / 1200.0f, 240 / 700.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex2f(200 / 1200.0f, 230 / 700.0f);
	glVertex2f(200 / 1200.0f, 240 / 700.0f); 		//stm
	glVertex2f(150 / 1200.0f, 250 / 700.0f);
	glVertex2f(150 / 1200.0f, 250 / 700.0f);
	glEnd();

}




///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


