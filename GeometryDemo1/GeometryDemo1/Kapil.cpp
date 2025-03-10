///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Scenes.h"
#include "Kapil.h"
#include "Yash.h"


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


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

