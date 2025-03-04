///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include "Scenes.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

float duration = 0.0f;
CurrentScene gCurrentScene = BIRDS_COMING_SCENE;
BOOL IsLyingNetVisible = FALSE;
BOOL IsRock1Visible = FALSE;
BOOL IsRock2Visible = FALSE;
BOOL IsRock3Visible = FALSE;
BOOL IsRock4Visible = FALSE;

BOOL IsComingBirdsVisible = TRUE;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function declarations




///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void StartStory()
{
	duration += 0.001f;

	if (gCurrentScene == JUNGLE_SCENE)
	{
		JungleScene();
	}
	else if (gCurrentScene == BIRDS_COMING_SCENE)
	{
		BirdsIncomingScene();
	}
	else if (gCurrentScene == BIRDS_EATING_SCENE)
	{
		BirdsEatingScene();
	}
}

void JungleScene()
{
	cameraSpeed = 0.009; //0.009;
	glPushMatrix();
	MoveCamera();

	DrawJungle();

	glPopMatrix();

	HunterGoingToJungle();
}

void BirdsIncomingScene()
{
	cameraSpeed = 0.009;
	cameraX = -4.83f;
	cameraY = 0.05f;
	cameraZ = 0.45f;
	IsLyingNetVisible = TRUE;
	IsRock1Visible = TRUE;
	IsRock2Visible = TRUE;
	IsRock3Visible = TRUE;
	IsRock4Visible = TRUE;


	glPushMatrix();
	MoveCamera();
	DrawJungle();
	glPopMatrix();

	if (IsComingBirdsVisible)
	{
		//Bird 1
		static float x1 = 0.95f;
		static float y1 = 0.90f;
		float dX1 = -0.6f;
		float dY1 = -0.35f;
		float xSpeedfactor = (0.95f - dX1) / 200;
		float ySpeedfactor = (0.90f - dY1) / 200;

		if (x1 >= dX1)
			x1 -= xSpeedfactor;

		if (y1 >= dY1)
			y1 -= ySpeedfactor;

		pPP = { x1, y1, 0.5f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

		//Bird 2
		static float x2 = 0.95f;
		static float y2 = 0.90f;
		float dX2 = -0.42f;
		float dY2 = -0.50f;
		xSpeedfactor = (0.95f - dX2) / 200;
		ySpeedfactor = (0.90f - dY2) / 200;

		if (x2 >= dX2)
			x2 -= xSpeedfactor;

		if (y2 >= dY2)
			y2 -= ySpeedfactor;

		pPP = { x2, y2, 0.5f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

		//Bird 3
		static float x3 = 0.95f;
		static float y3 = 0.90f;
		float dX3 = -0.25f;
		float dY3 = -0.3f;
		xSpeedfactor = (0.95f - dX3) / 200;
		ySpeedfactor = (0.90f - dY3) / 200;

		if (x3 >= dX3)
			x3 -= xSpeedfactor;

		if (y3 >= dY3)
			y3 -= ySpeedfactor;

		pPP = { x3, y3, 0.5f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

		//Bird 4
		static float x4 = 0.95f;
		static float y4 = 0.90f;
		float dX4 = -0.2f;
		float dY4 = -0.45f;
		xSpeedfactor = (0.95f - dX4) / 200;
		ySpeedfactor = (0.90f - dY4) / 200;

		if (x4 >= dX4)
			x4 -= xSpeedfactor;

		if (y4 >= dY4)
			y4 -= ySpeedfactor;

		pPP = { x4, y4, 0.5f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

		//Bird 5
		static float x5 = 0.95f;
		static float y5 = 0.90f;
		float dX5 = 0.74f; //0.93f;
		float dY5 = -0.06f;
		xSpeedfactor = (0.95f - dX5) / 200;
		ySpeedfactor = (0.90f - dY5) / 200;

		if (x5 >= dX5)
			x5 -= xSpeedfactor;

		if (y5 >= dY5)
			y5 -= ySpeedfactor;

		pPP = { x5, y5, 1.0f,		0.15f, 0.15f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

	}

	//if (duration >= 1.73f)
	if (duration >= 0.25f)
	{
		IsComingBirdsVisible = TRUE;

		gCurrentScene = BIRDS_EATING_SCENE;
	}
}

void BirdsEatingScene()
{
	cameraSpeed = 0.009;
	cameraX = -4.83f;
	cameraY = 0.05f;
	cameraZ = 0.45f;
	IsLyingNetVisible = TRUE;
	IsRock1Visible = TRUE;
	IsRock2Visible = TRUE;
	IsRock3Visible = TRUE;
	IsRock4Visible = TRUE;


	glPushMatrix();
	MoveCamera();
	DrawJungle();
	glPopMatrix();


	pPP = { -0.6f, -0.35f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.42f, -0.50f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.25f, -0.3f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.2f, -0.45f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);
}

void EmptyAreaScene()
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

	pPP = { 0.1f, -0.6f, 0.0f,		0.3f, 0.4f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(createGrass2);

	pPP = { -0.0f, 0.0f, 0.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(createGrass3);

	pPP = { 0.8f, -0.5f, 0.1f,		0.2f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawMainTree);

	pPP = { -0.7f, 0.2f, 0.0f,		0.1f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree2);


	pPP = { -0.3f, -0.5f, 0.0f,		1.3f, 1.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree3);

	pPP = { -0.85f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	pPP = { 0.25f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	if (duration >= 1.17f)
	{
		IsLyingNetVisible = TRUE;
	}

	if (duration >= 1.33f)
	{
		IsRock1Visible = TRUE;
	}

	if (duration >= 1.49f)
	{
		IsRock2Visible = TRUE;
	}

	if (duration >= 1.81f)
	{
		IsRock3Visible = TRUE;
	}

	if (duration >= 1.33f)
	{
		IsRock4Visible = TRUE;
	}

	if (IsLyingNetVisible)
	{
		pPP = { -0.55f, -0.5f, 0.0f,	    0.5f, 0.5f, 0.0f,		300.0f, 0.0f, 130.0f };
		PlaceObject(drawMeshLayingOnFloor);
	}


}

void HunterGoingToJungle()
{
	static BOOL HunterLookingRight = TRUE;

	if (duration >= 2.0f)
	{
		HunterLookingRight = FALSE;
	}

	if (HunterLookingRight)
	{
		if (cameraX >= -4.83)
		{
			cameraX -= cameraSpeed;
		}

		pPP = { -0.69f, -0.5f, 1.0f,	0.025f, 0.025f, 0.0f,	0.0f, 0.0f, 0.0f };
		PlaceObject(DrawHunter_SideView);
	}
	else
	{
		if (duration >= 3.0f)
		{
			if (cameraX >= -4.83)
			{
				cameraX -= cameraSpeed;
			}
			else
			{
				gCurrentScene = BIRDS_COMING_SCENE;
			}
		}
		else
		{
			if (cameraX <= 1.83)
			{
				cameraX += cameraSpeed;
			}

			pPP = { -0.69f, -0.5f, 1.0f,	0.025f, 0.025f, 0.0f,	0.0f, 180.0f, 0.0f };
			PlaceObject(DrawHunter_SideView);
		}

	}
}

void DrawJungle()
{
	glPushMatrix();

	//pPP = { 0.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	pPP = { 0.0f, 0.0f, -0.01f,		4.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawSky);

	//draw land
	pPP = { 0.0f, -0.5f, -0.009f,		4.0f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawLand);
	//draw land end

	pPP = { 0.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(Draw3Clouds);

	pPP = { 1.5f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(Draw3Clouds);

	pPP = { 3.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(Draw3Clouds);

	pPP = { 4.5f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(Draw3Clouds);

	pPP = { 6.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(Draw3Clouds);

	static float x1;
	static float x2;
	static float x3;
	x1 = -4.0f;
	x2 = -3.7f;
	x3 = -3.45f;
	for (int i = 0; i <= 7; i++)
	{
		pPP = { x1, -0.2f, 0.0f,		0.2f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass1);

		pPP = { x2, -0.5f, 0.3f,		0.3f, 0.4f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass2);

		pPP = { x3, -0.25f, 0.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass3);

		x1 += 1.0f;
		x2 += 1.0f;
		x3 += 1.0f;
	}

	//static float x1;
	static float y1;

	x1 = -3.95f;
	y1 = -0.05f;

	for (int i = 0; i < 14; i++)
	{


		if (i % 2 == 0)
		{
			y1 += 0.1f;
			pPP = { x1, y1, 0.0f,		0.05f, 0.10f, 1.0f,		0.0f, 0.0f, 0.0f };

		}
		else
		{
			y1 -= 0.1f;
			pPP = { x1, y1, 0.0f,		0.1f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };

		}

		PlaceObject(DrawTree2);
		x1 += 0.5f;

	}

	x1 = -3.9f;
	y1 = -0.7f;

	for (int i = 0; i < 14; i++)
	{
		if (i % 2 == 0)
		{
			y1 += 0.1f;
			pPP = { x1, y1, 0.4f,		1.2f, 1.3f, 1.0f,		0.0f, 0.0f, 0.0f };
		}
		else
		{
			y1 -= 0.1f;
			pPP = { x1, y1, 0.4f,		1.3f, 1.6f, 1.0f,		0.0f, 0.0f, 0.0f };
		}

		PlaceObject(DrawTree3);
		x1 += 0.5f;
	}

	x1 = -4.0f;
	y1 = -0.5f;

	for (int i = 0; i < 8; i++)
	{
		pPP = { x1, y1, 0.5f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawBush1);
		x1 += 1.0f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}


	x1 = -3.3f;
	y1 = -0.2f;

	for (int i = 0; i < 8; i++)
	{
		pPP = { x1, y1, 0.5f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawBush2);
		x1 += 1.0f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}
	glTranslatef(5.0f, 0.0f, 0.0f);
	EmptyAreaScene();
	glPopMatrix();

}

void MoveCamera()
{
	glTranslatef(cameraX, cameraY, cameraZ);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

