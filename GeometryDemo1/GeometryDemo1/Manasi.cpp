///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include <mmsystem.h>
#include "Manasi.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

BOOL bPlayMusic = FALSE;


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void playMusic(void)
{
	PlaySound("Data/jeetenge3.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	bPlayMusic = TRUE;
}

void stopMusic(void)
{
	PlaySound(NULL, 0, SND_PURGE);
	bPlayMusic = FALSE;
}

void toggleSound(void)
{
	if (bPlayMusic == FALSE)
	{
		playMusic();
	}
	else
	{
		stopMusic();
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////




