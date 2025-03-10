///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include "Scenes.h"
#define STB_IMAGE_IMPLEMENTATION
#include "data/stb_image.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

float duration = 0.0f;
CurrentScene gCurrentScene = JUNGLE_SCENE;
BOOL IsFoodOnNetVisible = FALSE;
BOOL IsLyingNetVisible = FALSE;
BOOL IsFlyingWebVisible = FALSE;

BOOL IsRock1Visible = FALSE;
BOOL IsRock2Visible = FALSE;
BOOL IsRock3Visible = FALSE;
BOOL IsRock4Visible = FALSE;

BOOL IsComingBirdsVisible = TRUE;
BOOL IsFlyingBirdsVisible = TRUE;

GLuint textureTech;
GLuint textureInspiration;
GLuint textureMusic;
GLuint texturePresents;
GLuint textureTeam;

BOOL IsAnimationPlaying = TRUE;

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

void ToggleAnimation()
{
	if (IsAnimationPlaying)
	{
		IsAnimationPlaying = FALSE;
	}
	else
	{
		IsAnimationPlaying = TRUE;
	}
}

void StartStory()
{
	if (IsAnimationPlaying)
	{
		duration += 0.0166f;
	}

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
	else if (gCurrentScene == BIRDS_FLY_FAIL_SCENE)
	{
		BirdsFlyFailScene();
	}
	else if (gCurrentScene == BIRDS_FLYING_SCENE)
	{
		BirdsFlyingScene();
	}
	else if (gCurrentScene == TITLES_SCENE)
	{
		TitlesScene();
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
	IsFoodOnNetVisible = TRUE;


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
		float dX5 = 0.71f; //0.93f;
		float dY5 = 0.006f;
		xSpeedfactor = (0.95f - dX5) / 200;
		ySpeedfactor = (0.90f - dY5) / 200;

		if (x5 >= dX5)
			x5 -= xSpeedfactor;

		if (y5 >= dY5)
			y5 -= ySpeedfactor;

		pPP = { x5, y5, 1.0f,		0.15f, 0.25f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawLandingBird);

	}

	//if (duration >= 1.73f)
	if (duration >= 5.0f)
	{
		duration = 0.0f;
		IsComingBirdsVisible = FALSE;

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
	IsFoodOnNetVisible = TRUE;


	glPushMatrix();
	MoveCamera();
	DrawJungle();
	glPopMatrix();


	pPP = { -0.5f, -0.25f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.37f, -0.35f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.20f, -0.20f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { -0.1f, -0.3f, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBirdEating);

	pPP = { 0.74f, 0.02f, 1.0f,		0.15f, 0.20f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBird_StandingOnTree);

	if (duration >= 5.0f)
	{
		duration = 0.0f;
		gCurrentScene = BIRDS_FLY_FAIL_SCENE;
	}
}

void BirdsFlyFailScene()
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
	IsFoodOnNetVisible = TRUE;


	glPushMatrix();
	MoveCamera();
	DrawJungle();
	glPopMatrix();

	static float x = 0.0;
	static float y = 0.0;
	static BOOL directionLeft = TRUE;

	if (directionLeft == TRUE)
	{
		x += 0.001;
		y += 0.001;
		pPP = { -0.5f - x, -0.3f + y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, -40.0f };		//template for copy-paste
		if (x >= 0.05f)
		{
			directionLeft = FALSE;
		}
	}
	else
	{
		x -= 0.001;
		y -= 0.001;
		pPP = { -0.5f - x, -0.3f + y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, -40.0f };		//template for copy-paste
		if (x <= 0.0f)
		{
			directionLeft = TRUE;
		}
	}

	PlaceObject(DrawFlyingBird);

	if (directionLeft == TRUE)
	{
		pPP = { -0.37f - x, -0.40f - y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	}
	else
	{
		pPP = { -0.37f - x, -0.40f - y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	}
	PlaceObject(DrawFlyingBird);


	if (directionLeft == TRUE)
	{
		pPP = { -0.20f + x, -0.25f + y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, 0.0f };		//template for copy-paste
	}
	else
	{
		pPP = { -0.20f + x, -0.25f + y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, 0.0f };		//template for copy-paste
	}
	PlaceObject(DrawFlyingBird);

	if (directionLeft == TRUE)
	{
		pPP = { -0.1f + x, -0.35f - y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, 0.0f };		//template for copy-paste
	}
	else
	{
		pPP = { -0.1f + x, -0.35f - y, 1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 180.0f, 0.0f };		//template for copy-paste
	}
	PlaceObject(DrawFlyingBird);

	pPP = { 0.74f, 0.02f, 1.0f,		0.15f, 0.20f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBird_StandingOnTree);


	if (duration >= 20.00f)
	{
		duration = 0.0f;
		gCurrentScene = BIRDS_FLYING_SCENE;
	}
}

void BirdsFlyingScene()
{
	cameraSpeed = 0.009;
	cameraX = -4.83f;
	cameraY = 0.05f;
	cameraZ = 0.45f;

	IsRock1Visible = TRUE;
	IsRock2Visible = TRUE;
	IsRock3Visible = TRUE;
	IsRock4Visible = TRUE;
	IsFoodOnNetVisible = TRUE;


	glPushMatrix();
	MoveCamera();
	DrawJungle();
	glPopMatrix();

	if (IsFlyingBirdsVisible)
	{
		static float scaleX = 0.15f;
		//Bird 1
		static float x1 = -0.45f;
		//static float x1 = 0.95f;
		static float y1 = -0.2f;
		//static float y1 = 0.90f;
		float dX1 = 0.60f;
		float dY1 = 1.1f;
		float xSpeedfactor = (-0.45f - dX1) / 500;
		float ySpeedfactor = (-0.2f - dY1) / 500;

		if (x1 <= dX1)
			x1 -= xSpeedfactor;

		if (y1 <= dY1)
			y1 -= ySpeedfactor;

		scaleX -= 0.0002f;

		pPP = { x1, y1, 0.6f,		scaleX, scaleX, 1.0f,		0.0f, 180.0f, 0.0f };
		PlaceObject(DrawFlyingBird);

		//Bird 2
		static float x2 = -0.42f;
		static float y2 = -0.40f;
		float dX2 = 0.60f;
		float dY2 = 1.1f;
		xSpeedfactor = (-0.42f - dX2) / 500;
		ySpeedfactor = (-0.40f - dY2) / 500;

		if (x2 <= dX2)
			x2 -= xSpeedfactor;

		if (y2 <= dY2)
			y2 -= ySpeedfactor;

		pPP = { x2, y2, 0.6f,		scaleX, scaleX, 1.0f,		0.0f, 180.0f, 0.0f };
		PlaceObject(DrawFlyingBird);

		//Bird 3
		static float x3 = -0.15f;
		static float y3 = -0.2f;
		float dX3 = 0.60f;
		float dY3 = 1.1f;
		xSpeedfactor = (-0.15f - dX3) / 500;
		ySpeedfactor = (-0.2f - dY3) / 500;

		if (x3 <= dX3)
			x3 -= xSpeedfactor;

		if (y3 <= dY3)
			y3 -= ySpeedfactor;

		pPP = { x3, y3, 0.6f,		scaleX, scaleX, 1.0f,		0.0f, 180.0f, 0.0f };
		PlaceObject(DrawFlyingBird);

		//Bird 4
		static float x4 = -0.15f;
		static float y4 = -0.4f;
		float dX4 = 0.60f;
		float dY4 = 1.1f;
		xSpeedfactor = (-0.15f - dX4) / 500;
		ySpeedfactor = (-0.4f - dY4) / 500;

		if (x4 <= dX4)
			x4 -= xSpeedfactor;

		if (y4 <= dY4)
			y4 -= ySpeedfactor;

		pPP = { x4, y4, 0.6f,		scaleX, scaleX, 1.0f,		0.0f, 180.0f, 0.0f };
		PlaceObject(DrawFlyingBird);

		static float x6 = -0.65f;
		static float y6 = -0.60f;
		float dX6 = 0.65f;
		float dY6 = 1.2f;
		xSpeedfactor = (-0.65f - dX6) / 550;
		ySpeedfactor = (-0.60f - dY6) / 550;

		if (x6 <= dX6)
			x6 -= xSpeedfactor;

		if (y6 <= dY6)
			y6 -= ySpeedfactor;

		static float scaleWebX = 0.50f;
		scaleWebX -= 0.0008f;

		if (IsFlyingWebVisible)
		{
			pPP = { x6,y6,0.4f,		scaleWebX,scaleWebX,1.0f,		0.0f,0.0f,0.0f };
			PlaceObject(DrawFlyingWeb);
		}
	}

	pPP = { 0.74f, 0.02f, 1.0f,		0.15f, 0.20f, 1.0f,		0.0f, 0.0f, 0.0f };		//template for copy-paste
	PlaceObject(DrawBird_StandingOnTree);

	if (duration >= 0.3f)
	{
		IsLyingNetVisible = FALSE;
		IsFlyingWebVisible = TRUE;
	}
	else
	{
		IsLyingNetVisible = TRUE;
	}

	if (duration >= 2.0f)
	{
		pPP = { -0.70f, -0.65f, 0.9f,		0.05f, 0.05f, 0.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawManSitting);
	}

	if (duration >= 12.0f)
	{
		duration = 0.0f;
		gCurrentScene = TITLES_SCENE;
	}
}

GLuint LoadGLTextures(const char* filepath, GLuint* texture)
{
	int width, height, channels;
	unsigned char* image = stbi_load(filepath, &width, &height, &channels, STBI_rgb);

	if (image)
	{

		glGenTextures(1, texture);				// Create One Texture

		glBindTexture(GL_TEXTURE_2D, *texture);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);


		// Free the image data
		stbi_image_free(image);

		glBindTexture(GL_TEXTURE_2D, 0);

		return *texture;
	}
	else
	{
		//fprintf(gpFile, "STB loading error: %s\n", stbi_failure_reason());
		return 0;
	}
}

void TitlesScene()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);

	if (duration >= 0.0f && duration <= 5.0f)
	{
		ShowPresentsFrame();
	}
	else if (duration >= 5.0f && duration <= 10.0f)
	{
		ShowTeamFrame();
	}
	else if (duration >= 10.0f && duration <= 15.0f)
	{
		ShowTechnologyFrame();
	}
	else if (duration >= 15.0f && duration <= 20.0f)
	{
		ShowMusicFrame();
	}
	else if (duration >= 20.0f && duration <= 25.0f)
	{
		ShowInspirationFrame();
	}
	else if (duration >= 25.0f)
	{
		exit(0);
	}

}

void ShowTeamFrame()
{
	glEnable(GL_TEXTURE_2D);							// Enable Texture Mapping
	glBindTexture(GL_TEXTURE_2D, textureTeam);

	ShowTextFrame();

	glDisable(GL_TEXTURE_2D);
}

void ShowPresentsFrame()
{
	glEnable(GL_TEXTURE_2D);							// Enable Texture Mapping
	glBindTexture(GL_TEXTURE_2D, texturePresents);

	ShowTextFrame();

	glDisable(GL_TEXTURE_2D);
}

void ShowMusicFrame()
{
	glEnable(GL_TEXTURE_2D);							// Enable Texture Mapping
	glBindTexture(GL_TEXTURE_2D, textureMusic);

	ShowTextFrame();

	glDisable(GL_TEXTURE_2D);
}

void ShowInspirationFrame()
{
	glEnable(GL_TEXTURE_2D);							// Enable Texture Mapping
	glBindTexture(GL_TEXTURE_2D, textureInspiration);

	ShowTextFrame();

	glDisable(GL_TEXTURE_2D);
}

void ShowTechnologyFrame()
{
	glEnable(GL_TEXTURE_2D);							// Enable Texture Mapping
	glBindTexture(GL_TEXTURE_2D, textureTech);

	ShowTextFrame();

	glDisable(GL_TEXTURE_2D);
}

void ShowTextFrame()
{
	glBegin(GL_QUADS);

	glTexCoord2f(0, 1);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glTexCoord2f(1, 1);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glTexCoord2f(1, 0);
	glVertex3f(1.0f, 1.0f, 0.0f);

	glTexCoord2f(0, 0);
	glVertex3f(-1.0f, 1.0f, 0.0f);

	glEnd();
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

	pPP = { 0.8f, -0.5f, 0.1f,		0.3f, 0.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawMainTree);

	pPP = { -0.7f, 0.2f, 0.0f,		0.1f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree2);


	pPP = { -0.3f, -0.5f, 0.0f,		1.3f, 1.6f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawTree3);

	pPP = { -0.85f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	pPP = { 0.25f, 0.1f, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(DrawBush1);

	if (duration >= 9.0f && gCurrentScene == JUNGLE_SCENE)
	{
		IsLyingNetVisible = TRUE;
	}

	if (duration >= 10.0f)
	{
		IsRock1Visible = TRUE;
	}

	if (duration >= 11.0f)
	{
		IsRock2Visible = TRUE;
	}

	if (duration >= 12.0f)
	{
		IsRock3Visible = TRUE;
	}

	if (duration >= 13.0f)
	{
		IsRock4Visible = TRUE;
		IsFoodOnNetVisible = TRUE;
	}


	pPP = { -0.55f, -0.5f, 0.0f,	    0.5f, 0.5f, 0.0f,		300.0f, 0.0f, 130.0f };
	PlaceObject(drawMeshLayingOnFloor);

	if (IsFoodOnNetVisible)
	{
		if (gCurrentScene == JUNGLE_SCENE ||
			gCurrentScene == BIRDS_COMING_SCENE)
		{

			pPP = { -0.45f, 0.15f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.35f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.25f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.15f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.0f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.05f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.25f, 0.28f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.35f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.45f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);
		}
		else if (gCurrentScene == BIRDS_EATING_SCENE)
		{

			pPP = { -0.45f, 0.15f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 1.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { -0.35f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.25f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 1.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.15f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 2.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 3.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.10f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 3.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.0f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 2.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { -0.05f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 4.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.25f, 0.28f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			if (duration <= 4.0f)
				PlaceObject(DrawFoodGrain);

			pPP = { -0.35f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.45f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);
		}
		else
		{
			pPP = { -0.35f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.15f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { 0.05f, 0.20f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.15f, 0.30f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.35f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);

			pPP = { -0.45f, 0.25f, 0.0f,		1.0f, 1.0f, 1.0f,		0.0f, 0.0f, 0.0f };
			PlaceObject(DrawFoodGrain);
		}
	}

}

void DrawFoodGrain()
{
	glEnable(GL_POINT_SMOOTH);
	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3f(0.92f, 0.76f, 0.3f);
	glVertex3f(-0.35f, -0.72f, 0.0f);
	glEnd();
}

void HunterGoingToJungle()
{
	static BOOL HunterLookingRight = TRUE;

	if (duration >= 14.0f)
	{
		HunterLookingRight = FALSE;
	}

	if (HunterLookingRight)
	{
		//first hunter go to jungle
		if (cameraX >= -4.83)
		{
			cameraX -= cameraSpeed;
		}

		pPP = { -0.69f, -0.5f, 1.0f,	0.020f, 0.025f, 0.0f,	0.0f, 0.0f, 0.0f };
		PlaceObject(DrawHunter_SideView);
	}
	else
	{
		if (duration >= 17.0f)
		{
			if (cameraX >= -4.83)
			{
				//Move camera back to web position
				cameraX -= cameraSpeed;
			}
			else
			{
				//End when camera come to same position
				duration = 0.0f;
				gCurrentScene = BIRDS_COMING_SCENE;
			}
		}
		else
		{
			if (cameraX <= 1.83)
			{
				//Move hunter back after web and food is placed
				cameraX += cameraSpeed;
			}

			pPP = { -0.69f, -0.5f, 1.0f,	0.020f, 0.025f, 0.0f,	0.0f, 180.0f, 0.0f };
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

