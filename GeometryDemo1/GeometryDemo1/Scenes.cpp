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

void BirdsEatingScene()
{
	//Birds Eating Scene



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

void BirdsIncomingScene()
{
	//Birds Incomming Scene


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

	pPP = { -0.55f, -0.5f, 0.0f,	    0.5f, 0.5f, 0.0f,		300.0f, 0.0f, 130.0f };
	PlaceObject(drawMeshLayingOnFloor);

	PlaceObject(DrawRocksOnNet);



	PlaceObject(DrawBird_Standing);





}

void JungleScene()
{
	//Jungle Scene

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
	x3 = -3.5f;
	for (int i = 0; i <= 7; i++)
	{
		pPP = { x1, -0.2f, 0.0f,		0.2f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass1);

		pPP = { x2, -0.5f, 0.3f,		0.3f, 0.4f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass2);

		pPP = { x3, -0.2f, 0.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(createGrass3);

		x1 += 1.0f;
		x2 += 1.0f;
		x3 += 1.0f;
	}

	//static float x1;
	static float y1;

	x1 = -3.95f;
	y1 = -0.05f;

	for (int i = 0; i < 18; i++)
	{
		pPP = { x1, y1, 0.0f,		0.1f, 0.2f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawTree2);
		x1 += 0.5f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}

	x1 = -3.9f;
	y1 = -0.7f;

	for (int i = 0; i < 18; i++)
	{
		pPP = { x1, y1, 0.4f,		1.3f, 1.6f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawTree3);
		x1 += 0.5f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}

	x1 = -4.0f;
	y1 = -0.5f;

	for (int i = 0; i < 18; i++)
	{
		pPP = { x1, y1, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawBush1);
		x1 += 1.0f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}


	x1 = -3.3f;
	y1 = -0.2f;

	for (int i = 0; i < 18; i++)
	{
		pPP = { x1, y1, 0.0f,		0.3f, 0.5f, 1.0f,		0.0f, 0.0f, 0.0f };
		PlaceObject(DrawBush2);
		x1 += 1.0f;

		if (i % 2 == 0)
			y1 += 0.1f;
		else
			y1 -= 0.1f;
	}


}



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

