///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
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
#include "Hunter.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

enum CurrentScene
{
	JUNGLE_SCENE,
	BIRDS_COMING_SCENE,
	BIRDS_EATING_SCENE,
	BIRDS_FLYING_SCENE,
};

extern float duration;
extern CurrentScene gCurrentScene;
extern BOOL IsLyingNetVisible;
extern BOOL IsRock1Visible;
extern BOOL IsRock2Visible;
extern BOOL IsRock3Visible;
extern BOOL IsRock4Visible;

extern BOOL IsComingBirdsVisible;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function declarations

void StartStory();
void EmptyAreaScene();
void BirdsEatingScene();
void BirdsIncomingScene();
void JungleScene();
void HunterGoingToJungle();
void DrawJungle();
void MoveCamera();


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

