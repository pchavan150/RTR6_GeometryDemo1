
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Sumit.h"


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




void DrawTree2()
{

	//  trunk
	glColor3f(0.55f, 0.27f, 0.07f);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.1f, -0.8f);
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.0f, 0.6f);
	glEnd();

	//right branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.4f, 0.3f);
	glEnd();

	//left branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(-0.4f, 0.3f);
	glEnd();

	glColor3f(0.0f, 0.8f, 0.0f); // green

	glPushMatrix();
	glTranslatef(-0.4f, 0.5f, 0.0f);
	glutSolidSphere(0.35, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 0.5f, 0.0f);
	glutSolidSphere(0.35, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.4f, 0.5f, 0.0f);
	glutSolidSphere(0.35, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.2f, 0.8f, 0.0f);
	glutSolidSphere(0.25, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.2f, 0.8f, 0.0f);
	glutSolidSphere(0.25, 20, 20);
	glPopMatrix();

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

