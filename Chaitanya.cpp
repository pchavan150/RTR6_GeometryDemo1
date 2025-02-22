///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include "Chaitanya.h"

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


void createGrass1() {
	VERTEX grassPoints[] = {
  {0.4074f, 0.1852f}, // Point 1
	{0.3333f, 0.3704f}, // Point 2
	{0.1481f, 0.6296f}, // Point 3
	{0.3333f, 0.4815f}, // Point 4
	{0.4815f, 0.2593f}, // Point 5
	{0.4815f, 0.5556f}, // Point 6
	{0.5185f, 0.7037f}, // Point 7
	{0.5926f, 0.8148f}, // Point 8
	{0.5926f, 0.5926f}, // Point 9
	{0.5926f, 0.1852f}, // Point 10
	{0.5926f, 0.1852f}, // Point 10
	{0.7407f, 0.4444f}, // Point 11
	{0.8519f, 0.5185f}, // Point 12
	{1.0000f, 0.5556f}, // Point 13
	{1.0000f, 0.5556f}, // Point 13
	{0.8148f, 0.3704f}, // Point 14
	{0.7037f, 0.1852f}  // 
	};


	glColor3f(0.0f, 0.5f, 0.0f); // Set color to green
	glBegin(GL_POLYGON);
	for (int i = 0; i < 15; i++) {
		glVertex2f(grassPoints[i].x, grassPoints[i].y);
	}
	glEnd();
	glColor3f(0.0f, 0.2f, 0.0f);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 15; i++) {
		glVertex2f(grassPoints[i].x, grassPoints[i].y);
	}
	glEnd();



}
void createGrass2() {

	VERTEX point[] = {
		{.217f,.014f},
		{.200f,.150f},
		{.05f,.332f},
		{.232f,.239f},
		{0.3f,.1f},
		{.290f,.239f},
		{.224f,.375f},
		{.147f,.441f},
		{.290f,.346f},
		{.379f,.183f},
		{.372f,.377f},
		{.250f,.667f},
		{.409f,.418f},
		{.459f,.264f},
		{.459f,.451f},
		{.403f,.670f},
		{.502f,.466f},
		{.550f,.288f},
		{.610f,.437f},
		{.721f,.563f},
		{.638f,.344f},
		{.600f,.183f},
		{.550f,.014f}
	};


	glColor3f(0.0f, 0.5f, 0.0f); // Set color to green
	glBegin(GL_POLYGON);
	for (int i = 0; i < 23; i++) {
		glVertex2f(point[i].x, point[i].y);
	}
	glEnd();
	glColor3f(0.0f, 0.2f, 0.0f);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 23; i++) {
		glVertex2f(point[i].x, point[i].y);
	}
	glEnd();

}
void createGrass3()
{
	VERTEX grassPoint[] = {
	{0.539f,0.0f},
	{0.469f,0.241f},
	{0.323f,.468f},
	{.222f,.594f},
	{.398f,.472f},
	{.518f,.311f},
	{.458f,.563f},
	{.366f,.775f},
	{.237f,.926f},
	{.4f,.8f},
	{.496f,.650f},
	{.590f,.430f},
	{.516f,.733f},
	{.409f,.948f},
	{.286f,1.109f},
	{.133f,1.239f},
	{.326f,1.135f},
	{.452f,.990f},
	{.55f,.85f},
	{.649f,.634f},
	{.618f,.909f},
	{.558f,1.200f},
	{.529f,1.393f},
	{.538f,1.560f},
	{.584f,1.311f},
	{.640f,1.104f},
	{.720f,.909f},
	{.747f,.1086f},
	{.781f,1.256f},
	{.880f,1.541f},
	{.822f,1.146f},
	{.813f,.952f},
	{.839f,.765f},
	{.897f,.871f},
	{.989f,.999f},
	{.938f,.857f},
	{.912f,.681f},
	{1.005f,.819f},
	{1.086f,.916f},
	{1.214f,1.019f},
	{1.344f,1.088f},
	{1.174f,.935f},
	{1.071f,.792f},
	{1.008f,.691f},
	{.951f,.560f},
	{.912f,.424f},
	{1.028f,.543f},
	{1.174f,.616f},
	{1.033f,.487f},
	{.966f,.351f},
	{.930f,.236f},
	{.912f,.092f},
	{0.9f,0.0f}
	};
	glColor3f(0.0f, 0.5f, 0.0f); // Set color to green
	glBegin(GL_POLYGON);
	for (int i = 0; i < 53; i++) {
		glVertex2f(grassPoint[i].x, grassPoint[i].y);
	}
	glEnd();
	glColor3f(0.0f, 0.2f, 0.0f);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 53; i++) {
		glVertex2f(grassPoint[i].x, grassPoint[i].y);
	}
	glEnd();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


