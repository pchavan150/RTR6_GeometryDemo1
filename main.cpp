#define	 _CRT_SECURE_NO_WARNINGS

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                     
//   Project: Geometry Group First Demo (Team Work)                                 
//   File: Main File                                                   
//   Author: RTR06 - Geometry Group                                             
//   Date: 01/03/2025                                                  
//   Description: Startup File                                         
//                                                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "main.h"
#include "common.h"
#include "Rishan.h"
#include "Shreyash.h"
#include "Madhuri.h"
#include "Raviraj.h"
#include "Pankaj.h"
#include "Yash.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function declarations



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Main Function                                                
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Entry-point Function
int main(int argc, char* argv[])
{
	// local function declarations
	int initialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);
	void update(int value);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Geometry Team");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutTimerFunc(25, update, 0);
	glutMainLoop();

	return(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definitions


int initialize(void)
{


	// code
	//glutFullScreen();
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	glEnable(GL_DEPTH_TEST);  // Enable depth testing for 3D rendering

	glMatrixMode(GL_PROJECTION);  // Set up the projection matrix
	glLoadIdentity();  // Reset the matrix
	gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);  // Set up a perspective projection

	glMatrixMode(GL_MODELVIEW);  // Switch to modelview matrix
	glutFullScreen();


	InitializeLeafs();

	//pPP = (pPlacementParameters)malloc(sizeof(pPlacementParameters));
	SetDefaultValues();

	return(0);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
	//glViewport((1920 / 2) - (height / 2) - 150, 0, height, height);
}

void update(int value) {

	glutPostRedisplay();  // Trigger a redraw
	glutTimerFunc(16, update, 0);  // Call update every 16 milliseconds (~60 FPS)
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  // Clear the screen and depth buffer

	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -3.0f);



	Scene1();

	//glFlush();
	glutSwapBuffers();  // Swap buffers to display the rendered image
}

void Scene1()
{
	PlaceObject(DrawSky);

	//draw land

	//draw land end


	glTranslatef(0.0f, 0.0f, 0.1f);
	//pPP = { 0.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste

	PlaceObject(DrawCloud1);
	PlaceObject(DrawCloud2);
	PlaceObject(DrawCloud3);


	pPP = { -0.7f, -0.5f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawAllBirdsEating);

	pPP = { 0.8f, -0.5f, 0.1f,		0.2f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawMainTree);

	//Task: temp bird
	pPP = { 0.7f, -0.1f, 0.2f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBirdEating);
	//end

	PlaceObject(DrawRocksOnNet);

	
}

void keyboard(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == FALSE)
		{
			glutFullScreen();
			bFullScreen = TRUE;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = FALSE;
		}
		break;
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	//code
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		//glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize(void)
{
	// code
	// code
	free(p_array);
	p_array = NULL;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

