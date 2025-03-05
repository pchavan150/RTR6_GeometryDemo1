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

void DrawLandingBird()
{
	float z = 0.0f;

	float birdBody[49][2] = {
		{0.375f, 0.035f},
		{0.4f, 0.025f},
		{0.7f, 0.0f},
		{0.775f, -0.010f},
		{0.790f, -0.020f},
		{0.780f, -0.029f},
		{0.790f, -0.040f},
		{0.810f, -0.048f},
		{0.790f, -0.059f},
		{0.80f, -0.070f},
		{0.840f, -0.077f},
		{0.845f, -0.10f},
		{0.865f, -0.125f},
		{0.850f, -0.15f},
		{0.60f, -0.075f},
		{0.50f, -0.080f},
		{0.40f, -0.10f},
		{0.35f, -0.15f},
		{0.30f, -0.20f},
		{0.25f, -0.220f},
		{0.2f, -0.245f},
		{0.1f, -0.259f},
		{0.0f, -0.252f},
		{-0.05f, -0.240f},
		{-0.10f, -0.225f},
		{-0.15f, -0.210f},
		{-0.20f, -0.180f},
		{-0.25f, -0.150f},
		{-0.30f, -0.105f},
		{-0.34f, -0.059f},
		{-0.35f, -0.05f},
		{-0.4f, -0.037f},
		{-0.45f, -0.0125f},
		{-0.475f, 0.0f},
		{-0.49f, 0.05f},
		{-0.475f, 0.075f},
		{-0.450f, 0.10f},
		{-0.425f, 0.125f},
		{-0.40f, 0.137f},
		{-0.35f, 0.134f},
		{-0.3f, 0.125f},
		{-0.250f, 0.112f},
		{-0.2f, 0.125f},
		{-0.1f, 0.137f},
		{0.0f, 0.145f},
		{0.1f, 0.125f},
		{0.2f, 0.1f},
		{0.3f, 0.075f},
		{0.35f, 0.05f}
	};

	float birdFeather[32][2] = {
		{-0.125f, 0.137f},
		{-0.25f, 0.25f},
		{-0.285f, 0.3f},
		{ -0.3f, 0.35f},
		{-0.285f, 0.40f},
		{-0.270f, 0.45f},
		{-0.175f, 0.65f},
		{-0.125f, 0.7125f},
		{-0.1f, 0.725f},
		{-0.11f, 0.675f},
		{-0.1f, 0.6f},
		{-0.045f, 0.675f},
		{0.0f, 0.7f},
		{0.020f, 0.675f},
		{-0.020f, 0.575f},
		{0.1f, 0.65f},
		{0.1f, 0.6125f},
		{0.075f, 0.537f},
		{0.1f, 0.55f},
		{0.15f, 0.56f},
		{0.17f, 0.475f},
		{0.225f, 0.375f},
		{0.2f, 0.34f},
		{0.225f, 0.325f},
		{0.26f, 0.3f},
		{0.237f, 0.25f},
		{0.35f, 0.2f},
		{0.375f, 0.15f},
		{0.390f, 0.1f},
		{0.375f, 0.15f},
		{0.390f, 0.1f},
		{0.375f, 0.035f}
	};

	float birdFeatherInternals[][2] = {
		{0.7f, 0.0f},
		{0.775f, -0.010f},
		{0.790f, -0.020f},
		{0.780f, -0.029f},
		{0.790f, -0.040f},
		{0.810f, -0.048f},
		{0.790f, -0.059f},
		{0.80f, -0.070f},
		{0.840f, -0.077f},
		{0.845f, -0.10f},
		{0.865f, -0.125f},
		{0.850f, -0.15f},
		{0.60f, -0.075f},
		{0.780f, -0.15f},
	};


	float birdLegsStart[7][2] = {
		{1.0f, -3.0f}, //start
		{1.0f, -2.46f},
		{1.70f, -2.46f},
		{1.375f, -3.0f},
		{0.75f, -3.30f},
		{0.6875f, -3.03f},
		{1.1f, -2.80f}
	};

	float birdLegsStart_2[4][2] = {
		{0.75f, -3.30f},
		{0.25f, -3.5f},
		{0.125f, -3.375f},
		{0.6875f, -3.03f}
	};

	float birdLegs1_End[10][2] = {
		{0.0f, -3.5f},
		{0.25f, -3.5f},
		{0.125f, -3.25f},
		{-0.60f, -3.10f},
		{-0.060f, -3.375f},
		{-0.5f, -3.5675f},
		{-0.03f, -3.5f},
		{0.0f, -3.95f},
		{0.125f, -3.5f},
		{0.25f, -3.5f}
	};

	float birdLeg2_start[5][2] = {
		{0.75f, -3.5f},
		{0.40f, -2.46f},
		{1.0f, -2.46f},
		{0.80f, -3.75f},
		{0.5075f, -3.6875}
	};

	float birdLeg2_End[][2] = {
		{0.375f, -4.0f},
		{0.80f, -3.75f},
		{0.5f, -4.125f},
		{0.6875f, -4.125f},
		{0.75f, -4.25f},
		{0.80f, -4.6875f},
		{0.70f, -4.6875f},
		{0.70f, -4.75f},
		{0.40f, -4.187f},
		{-0.375f, -4.25f},
		{0.0f, -4.0625f},
		{-0.45f, -3.92f},
		{0.25f, -4.0f},
		{0.5075f, -3.6875},
		{0.80f, -3.75f}
	};

	int i;
	//glScalef(2.0f, 2.0f, 2.0f);

	//Eye
	glEnable(GL_POINT_SMOOTH);
	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.410f, 0.046f, 0.0f);
	glEnd();

	glPointSize(4);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.410f, 0.046f, 0.0f);
	glEnd();


	glPointSize(8);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.6f, 0.0f);
	glVertex3f(-0.405f, 0.05f, 0.0f);
	glEnd();


	//EXPT
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 17; i < 28; i++) {
		float newCord = birdBody[i][1];
		if (newCord > 0) {
			newCord = birdBody[i][1] - 0.070f;
		}
		else {
			newCord = birdBody[i][1] + 0.070f;
		}

		glVertex3f(birdBody[i][0], newCord, z);
	}
	glEnd();

	//EXPT

	// fether line from body
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.125f - 0.10f, 0.125f, z);
	glVertex3f(-0.05f - 0.070f, 0.05f, z);
	glVertex3f(-0.0125f - 0.070, 0.025f, z);
	glVertex3f(0.4f, -0.005f, z);
	glVertex3f(0.425f, -0.025f, z);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.5f);
	for (i = 0; i < 14; i++) {
		glVertex3f(birdFeatherInternals[i][0], birdFeatherInternals[i][1], z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 49; i++) {
		glVertex3f(birdBody[i][0], birdBody[i][1], z);
	}
	glEnd();




	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 11; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.039f, 0.24f, 0.43f);
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0], birdFeather[i][1], z);
	}
	glEnd();

	//Beak
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.475f, 0.0f, z);
	glVertex3f(-0.525f, -0.006f, z);
	glVertex3f(-0.49f, 0.05f, z);
	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 7; i++) {
		glVertex3f(birdLegsStart[i][0] / 10, birdLegsStart[i][1] / 10, z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 4; i++) {
		glVertex3f(birdLegsStart_2[i][0] / 10, birdLegsStart_2[i][1] / 10, z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 10; i++) {
		glVertex3f(birdLegs1_End[i][0] / 10, birdLegs1_End[i][1] / 10, z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 5; i++) {
		glVertex3f(birdLeg2_start[i][0] / 10, birdLeg2_start[i][1] / 10, z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < ((sizeof(birdLeg2_End) / 2) / sizeof(float)); i++) {
		glVertex3f(birdLeg2_End[i][0] / 10, birdLeg2_End[i][1] / 10, z);
	}
	glEnd();

}

void DrawFlyingBird()
{
	float z = 0.0f;

	float birdBody[49][2] = {
		{0.375f, 0.035f},
		{0.4f, 0.025f},
		{0.7f, 0.0f},
		{0.775f, -0.010f},
		{0.790f, -0.020f},
		{0.780f, -0.029f},
		{0.790f, -0.040f},
		{0.810f, -0.048f},
		{0.790f, -0.059f},
		{0.80f, -0.070f},
		{0.840f, -0.077f},
		{0.845f, -0.10f},
		{0.865f, -0.125f},
		{0.850f, -0.15f},
		{0.60f, -0.075f},
		{0.50f, -0.080f},
		{0.40f, -0.10f},
		{0.35f, -0.15f},
		{0.30f, -0.20f},
		{0.25f, -0.220f},
		{0.2f, -0.245f},
		{0.1f, -0.259f},
		{0.0f, -0.252f},
		{-0.05f, -0.240f},
		{-0.10f, -0.225f},
		{-0.15f, -0.210f},
		{-0.20f, -0.180f},
		{-0.25f, -0.150f},
		{-0.30f, -0.105f},
		{-0.34f, -0.059f},
		{-0.35f, -0.05f},
		{-0.4f, -0.037f},
		{-0.45f, -0.0125f},
		{-0.475f, 0.0f},
		{-0.49f, 0.05f},
		{-0.475f, 0.075f},
		{-0.450f, 0.10f},
		{-0.425f, 0.125f},
		{-0.40f, 0.137f},
		{-0.35f, 0.134f},
		{-0.3f, 0.125f},
		{-0.250f, 0.112f},
		{-0.2f, 0.125f},
		{-0.1f, 0.137f},
		{0.0f, 0.145f},
		{0.1f, 0.125f},
		{0.2f, 0.1f},
		{0.3f, 0.075f},
		{0.35f, 0.05f}
	};

	float birdFeather[32][2] = {
		{-0.125f, 0.137f},
		{-0.25f, 0.25f},
		{-0.285f, 0.3f},
		{ -0.3f, 0.35f},
		{-0.285f, 0.40f},
		{-0.270f, 0.45f},
		{-0.175f, 0.65f},
		{-0.125f, 0.7125f},
		{-0.1f, 0.725f},
		{-0.11f, 0.675f},
		{-0.1f, 0.6f},
		{-0.045f, 0.675f},
		{0.0f, 0.7f},
		{0.020f, 0.675f},
		{-0.020f, 0.575f},
		{0.1f, 0.65f},
		{0.1f, 0.6125f},
		{0.075f, 0.537f},
		{0.1f, 0.55f},
		{0.15f, 0.56f},
		{0.17f, 0.475f},
		{0.225f, 0.375f},
		{0.2f, 0.34f},
		{0.225f, 0.325f},
		{0.26f, 0.3f},
		{0.237f, 0.25f},
		{0.35f, 0.2f},
		{0.375f, 0.15f},
		{0.390f, 0.1f},
		{0.375f, 0.15f},
		{0.390f, 0.1f},
		{0.375f, 0.035f}
	};

	float birdFeatherInternals[][2] = {
		{0.7f, 0.0f},
		{0.775f, -0.010f},
		{0.790f, -0.020f},
		{0.780f, -0.029f},
		{0.790f, -0.040f},
		{0.810f, -0.048f},
		{0.790f, -0.059f},
		{0.80f, -0.070f},
		{0.840f, -0.077f},
		{0.845f, -0.10f},
		{0.865f, -0.125f},
		{0.850f, -0.15f},
		{0.60f, -0.075f},
		{0.780f, -0.15f},
	};

	float birdLegsStart[6][2] = {
		{0.25f, -0.225f},
		{0.15f, -0.30f},
		{0.09f, -0.2875f},
		{0.1f, -0.2675f},
		{0.15f, -0.25f},
		{0.175f, -0.240f}
	};

	float birdLegsEnd[14][2] = {
		{0.15f, -0.3f},
		{0.1f, -0.290f},
		{0.05f, -0.295f},
		{-0.0125f, -0.35f},
		{-0.0125f, -0.3f},
		{0.0375f, -0.2675f},
		{0.1f, -0.267f}
	};


	float LegsDetails[4][2] = {
		{0.05f, -0.295f},
		{0.05f, -0.35f},
		{0.025f, -0.325f},
		{-0.0125f, -0.337f}
	};

	float LegsDetails2[7][2] = {
		{0.05f, -0.325f},
		{0.025f, -0.3687f},
		{0.075f, -0.35f},
		{0.1f, -0.35f},
		{0.025f, -0.375f},
		{0.0f, -0.350f},
		{-0.0125f, -0.337f}
	};

	float LegsOutline1[3][2] = {
		{0.09f, -0.2875f},
		{0.025f, -0.3125f},
		{-0.0125f, -0.337f}
	};

	float LegsOutline2[4][2] = {
		{0.09f, -0.2875f},
		{0.025f, -0.3125f},
		{0.0f, -0.327f},
		{0.025f, -0.375f}
	};

	float LegsOutline3[5][2] = {
		{0.09f, -0.2875f},
		{0.025f, -0.3125f},
		{0.05f, -0.367f},
		{0.1f, -0.35f},
		//{0.05f, -0.325f},
	};

	int i;
	//glScalef(2.0f, 2.0f, 2.0f);

	//Eye
	glEnable(GL_POINT_SMOOTH);
	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.410f, 0.046f, 0.0f);
	glEnd();

	glPointSize(4);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.410f, 0.046f, 0.0f);
	glEnd();


	glPointSize(8);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.6f, 0.0f);
	glVertex3f(-0.405f, 0.05f, 0.0f);
	glEnd();


	//EXPT
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 17; i < 28; i++) {
		float newCord = birdBody[i][1];
		if (newCord > 0) {
			newCord = birdBody[i][1] - 0.070f;
		}
		else {
			newCord = birdBody[i][1] + 0.070f;
		}

		glVertex3f(birdBody[i][0], newCord, z);
	}
	glEnd();

	//EXPT

	// fether line from body
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.125f - 0.10f, 0.125f, z);
	glVertex3f(-0.05f - 0.070f, 0.05f, z);
	glVertex3f(-0.0125f - 0.070, 0.025f, z);
	glVertex3f(0.4f, -0.005f, z);
	glVertex3f(0.425f, -0.025f, z);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.5f);
	for (i = 0; i < 14; i++) {
		glVertex3f(birdFeatherInternals[i][0], birdFeatherInternals[i][1], z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 49; i++) {
		glVertex3f(birdBody[i][0], birdBody[i][1], z);
	}
	glEnd();




	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 11; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.039f, 0.24f, 0.43f);
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0] - 0.075, birdFeather[i][1] - 0.075f, z);
	}
	for (i = 0; i < 32; i++) {
		glVertex3f(birdFeather[i][0], birdFeather[i][1], z);
	}
	glEnd();

	//Beak
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.475f, 0.0f, z);
	glVertex3f(-0.525f, -0.006f, z);
	glVertex3f(-0.49f, 0.05f, z);
	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0.4156f, 0.5372f, 0.65f);
	for (i = 0; i < 6; i++) {
		glVertex3f(birdLegsStart[i][0], birdLegsStart[i][1], z);
	}
	glEnd();


	//OUTLINE
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

	for (i = 0; i < 4; i++) {
		glVertex3f(LegsOutline2[i][0], LegsOutline2[i][1], z);
	}
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

	for (i = 0; i < 4; i++) {
		glVertex3f(LegsOutline3[i][0], LegsOutline3[i][1], z);
	}
	glEnd();

	//leg

	glBegin(GL_POLYGON);
	glColor3f(0.51f, 0.26f, 0.20f);

	for (i = 0; i < 7; i++) {
		glVertex3f(birdLegsEnd[i][0], birdLegsEnd[i][1], z);
	}
	glEnd();


	//DETAILS
	glBegin(GL_POLYGON);
	glColor3f(0.51f, 0.26f, 0.20f);
	for (i = 0; i < 4; i++) {
		glVertex3f(LegsDetails[i][0], LegsDetails[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.51f, 0.26f, 0.20f);
	for (i = 0; i < 7; i++) {
		glVertex3f(LegsDetails2[i][0], LegsDetails2[i][1], z);
	}
	glEnd();

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


