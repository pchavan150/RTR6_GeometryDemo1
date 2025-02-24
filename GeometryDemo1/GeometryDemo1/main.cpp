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
#include "Kapil.h"
#include "Manasi.h"
#include "Chaitanya.h"
#include "Sumit.h"

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

	if (bPlayMusic == FALSE)
	{
		playMusic();
	}


	Scene1();

	glFlush();
	glutSwapBuffers();  // Swap buffers to display the rendered image
}

void Scene1()
{
	//pPP = { 0.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	pPP = { 0.0f, 0.0f, -0.01f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawSky);

	//draw land
	pPP = { 0.0f, -0.5f, -0.009f,		1.0f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawLand);
	//draw land end


	PlaceObject(DrawCloud1);
	PlaceObject(DrawCloud2);
	PlaceObject(DrawCloud3);


	pPP = { -0.5f, 0.0f, 0.0f,		0.2f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(createGrass1);

	pPP = { 0.4f, -0.95f, 0.0f,		0.3f, 0.4f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(createGrass2);

	pPP = { -0.0f, 0.0f, 0.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(createGrass3);


	pPP = { -0.7f, -0.5f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawAllBirdsEating);

	pPP = { 0.8f, -0.5f, 0.1f,		0.2f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawMainTree);

	// TODO : temp bird
	pPP = { 0.7f, -0.1f, 0.2f,		0.12f, 0.17f, 1.0f,		0.0f, 0.0f, -30.0f };
	PlaceObject(DrawBirdEating);
	//end

	pPP = { -0.7f, 0.2f, 0.0f,		0.1f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree2);


	pPP = { -0.3f, -0.5f, 0.0f,		1.3f, 1.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree3);

	pPP = { -0.85f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	pPP = { 0.25f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	pPP = { -0.55f, -0.5f, 0.0f,	    0.5f, 0.5f, 0.0f,		300.0f, 0.0f, 130.0f };
	PlaceObject(drawMeshLayingOnFloor);

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

	case 'W':
	case 'w':
		if (TransformMode == TRANSLATE)
			testMovY += testMoveSpeed;

		if (TransformMode == SCALE)
			testScaleY += testScaleSpeed;

		if (TransformMode == ROTATE)
			testRotateY += testRotateSpeed;
		break;

	case 'S':
	case 's':
		if (TransformMode == TRANSLATE)
			testMovY -= testMoveSpeed;

		if (TransformMode == SCALE)
			testScaleY -= testScaleSpeed;

		if (TransformMode == ROTATE)
			testRotateY -= testRotateSpeed;
		break;

	case 'A':
	case 'a':
		if (TransformMode == TRANSLATE)
			testMovX -= testMoveSpeed;

		if (TransformMode == SCALE)
			testScaleX -= testScaleSpeed;

		if (TransformMode == ROTATE)
			testRotateX -= testRotateSpeed;
		break;

	case 'D':
	case 'd':
		if (TransformMode == TRANSLATE)
			testMovX += testMoveSpeed;

		if (TransformMode == SCALE)
			testScaleX += testScaleSpeed;

		if (TransformMode == ROTATE)
			testRotateX += testRotateSpeed;
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

	case 'C':
	case 'c':
		ChangeSelectedObject();
		break;

	case 'T':
	case 't':
		ChangeTransformMode();
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

