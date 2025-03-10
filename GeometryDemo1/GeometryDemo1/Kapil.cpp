///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Scenes.h"
#include "Kapil.h"
#include "Shreyash.h"
#include "Yash.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

POSITION threads[100][100];

struct point layout2[54] = {
	// anti clock wise

	// bottom line
	{0.0f, 0.0f},
	{1.0f, 0.5f},
	{1.1f, 0.75f},
	{1.5f, 0.75f},
	{2.0f, 1.0f},
	{2.1f, 1.1f},
	{2.75f, 1.0f},
	{4.0f, 1.0f},
	{5.2f, 1.2f},
	{6.0f, 1.5f},
	{8.0f, 1.8f},
	{9.0f, 2.0f},
	{10.0f, 2.0f},
	{11.0f, 1.5f},
	{11.5f, 1.0f},

	// right side 

	{11.25f, 2.0f},
	{11.0f, 2.5f},
	//{10.5f, 2.7f},
	{10.75f, 3.0f},
	{10.5f, 3.5f},
	{10.5f, 4.0f},
	{10.5f, 5.0f},
	{10.5f, 5.6f},
	{10.75f, 5.9f},
	{11.0f, 5.5f},
	{11.1f, 5.2f},
	{11.0f, 6.0f},
	{10.9f, 6.1f},
	{10.0f, 6.1f},


	// top  rightside cone
	{9.5f, 7.0f},
	{9.20f, 7.75f},
	{8.00f, 6.50f},
	{7.00f, 6.00f},
	{6.25f, 6.20f},
	{5.75f, 6.00f},
	{5.1f, 6.00f},

	// top  leftside cone
	{4.0f, 6.00f},
	{3.75f, 6.75f},
	{3.60f, 7.0f},
	{3.50f, 7.5f},
	{3.00f, 7.0f},
	{2.30f, 6.0f},
	{2.00f, 5.75f},
	{1.50f, 5.50f},
	{0.75f, 5.10f},


	// leftside 
	{1.0f, 5.10f},
	{1.1f, 5.00f},
	{1.1f, 4.75f},
	{1.0f, 4.1f},
	{1.1f, 3.75f},
	{1.0f, 3.0f},
	{1.0f, 2.5f},
	{0.95f, 2.0f},
	{0.60f, 1.0f},
	{0.00f, 0.0f},

};

struct point bottomCones[] = {
	{0.75f, 1.0f},
	{1.0f, 1.3f},
	{1.5f, 2.0f},
	{2.0f, 2.4f},
	{3.0f, 3.0f},
	{4.0f, 4.0f},           // cone left bottom
	{4.2f, 3.0f},
	{4.7f, 2.0f},
	{5.0f, 1.75f},
	{5.0f, 1.50f},
	{5.2f, 1.2f},
	{5.7f, 1.5f},

	// right bottom
	{6.0f, 2.0f},
	{7.0f, 2.5f},
	{8.0f, 3.0f},
	{9.0f, 4.0f},
	{9.5f, 4.5f},           // cone top
	{9.75f, 4.0f},
	{10.0f, 3.5f},
	{10.25f, 3.0f},
	{11.0f, 2.5f}
};

struct point cone11[7];
struct point cone12[7];
struct point cone13[7];

struct point cone21[7];
struct point cone22[7];
struct point cone23[7];

struct point cone31[14];
struct point cone32[14];
struct point cone33[14];



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//All definations
void drawMeshLayingOnFloor(void)
{
	DrawRocksOnNet();

	if (IsLyingNetVisible)
	{
		glLineWidth(1.0);
		glBegin(GL_LINES);
		// mesh color
		glColor3f(0.0f, 0.0f, 0.0f);

		float height = 8.0f;
		float spacing = 12.0f;
		float jPrev;
		//float 
		for (float i = (height) * -1; i <= height; i++)
		{

			for (float j = (height * -1.0f); j < height; )
			{
				jPrev = j;
				// horizontal
				glVertex3f(j / spacing, i / spacing + 0.005f, 0.0f);
				j = j + 1;
				glVertex3f(j / spacing, i / spacing, 0.0f);

				// Vertical
				glVertex3f(i / spacing + 0.005f, jPrev / spacing, 0.0f);
				glVertex3f(i / spacing, j / spacing, 0.0f);
			}
		}
		glEnd();
	}

}

void drawConeToPlaceBirds(void)
{
	double base = 0.2;
	double height = 0.03f;
	GLint slices = 8;
	GLint stacks = 10;

	glPushMatrix();
	glTranslatef(0.4, 0.4, 0);                     //  Quadrant I
	glutWireCone(0.2f, 0.05f, 8, 10);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.4, 0.4, 0);                     //  Quadrant II
	glutWireCone(0.2f, 0.05f, 8, 10);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.4, -0.4, 0);                    //   Quadrant III
	glutWireCone(0.2f, 0.05f, 8, 10);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.4, -0.4, 0);                    //   Quadrant IV
	glutWireCone(0.2f, 0.05f, 8, 10);
	glPopMatrix();
}


void drawMeshFlying(void)
{
	drawMeshLayingOnFloor();
	drawConeToPlaceBirds();
}

void DrawFlyingWeb()
{
	glPushMatrix();
	glTranslatef(-0.02, -0.05f, 0.11f);
	glScalef(1.07f, 1.15f, 1.0f);
	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < (sizeof(layout2) / sizeof(layout2[0])); i++)
	{
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f((layout2[i].x), (layout2[i].y), 0.0f);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	for (int i = 0; i < sizeof(bottomCones) / sizeof(bottomCones[i]); ++i)
	{
		glVertex2f(bottomCones[i].x / 10, bottomCones[i].y / 10);
	}
	glEnd();
	glPopMatrix();

	// drawing inner threads
	int sizeofLayout = (sizeof(layout2) / sizeof(layout2[0]));

	glLineWidth(1.0f);
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (is_point_in_polygon(threads[i][j].x, threads[i][j].y, layout2, sizeofLayout))
			{
				glPushMatrix();
				glTranslatef(threads[i][j].x, threads[i][j].y, 0.1f);
				glRotatef(45.0, 0.0f, 0.0f, 1.0f);
				//glScalef(0.05f, 0.05f, 1.0f);
				glBegin(GL_LINE_LOOP);
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex3f(-0.02f, 0.02f, 0.0f);
				glVertex3f(-0.02f, -0.02f, 0.0f);
				glVertex3f(0.02f, -0.02f, 0.0f);
				glVertex3f(0.02f, 0.02f, 0.0f);
				glEnd();
				glPopMatrix();
			}

		}
	}

	glTranslatef(0.0f, 0.0f, 0.11f);
	drawRandomLines1();
	glPushMatrix();
	glTranslatef(0.62f, 0.048f, 0.0f);
	drawRandomLines1();
	glPopMatrix();

	glPushMatrix();
	drawRandomLines2();
	glTranslatef(0.6f, 0.1f, 0.0f);
	drawRandomLines2();
	glPopMatrix();
}

void drawRandomLines1()
{
	glLineWidth(1.0f);
	for (int i = 0; i < sizeof(cone11) / sizeof(cone11[0]); ++i)
	{
		glBegin(GL_LINE_STRIP);
		glVertex2f(0.35f, 0.8f);
		glVertex2f(cone11[i].x, cone11[i].y);
		glVertex2f(cone12[i].x, cone12[i].y);
		glVertex2f(cone13[i].x, cone13[i].y);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(0.35f, 0.8f);
		glVertex2f(cone21[i].x, cone21[i].y);
		glVertex2f(cone22[i].x, cone22[i].y);
		glVertex2f(cone23[i].x, cone23[i].y);
		glEnd();
	}
}

void drawRandomLines2()
{
	glLineWidth(1.0f);
	for (int i = 0; i < sizeof(cone31) / sizeof(cone31[0]); ++i)
	{
		glBegin(GL_LINE_STRIP);
		glVertex2f(0.4f, 0.4f);
		glVertex2f(cone31[i].x, cone31[i].y);
		glVertex2f(cone32[i].x, cone32[i].y);
		glVertex2f(cone33[i].x, cone33[i].y);
		glEnd();
	}
}

int is_point_in_polygon(float x, float y, struct point* polyPoints, int numVertices) {
	int i, j, c = 0;
	for (i = 0, j = numVertices - 1; i < numVertices; j = i++) {
		if (((polyPoints[i].y > y) != (polyPoints[j].y > y)) &&
			(x < (polyPoints[j].x - polyPoints[i].x) * (y - polyPoints[i].y) / (polyPoints[j].y - polyPoints[i].y) + polyPoints[i].x)) {
			c = !c;
		}
	}
	return c;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

