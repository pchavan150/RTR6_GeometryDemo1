///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

extern POSITION threads[100][100];
extern struct point layout2[54];
extern struct point bottomCones[];
extern struct point cone11[7];
extern struct point cone12[7];
extern struct point cone13[7];

extern struct point cone21[7];
extern struct point cone22[7];
extern struct point cone23[7];

extern struct point cone31[14];
extern struct point cone33[14];
extern struct point cone32[14];


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   
//                                      Function Prototypes                                          
//                                                                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function declarations


void drawMeshLayingOnFloor(void);
void drawMeshFlying(void);
void drawRandomLines1();
void drawRandomLines2();
void DrawFlyingWeb();
int is_point_in_polygon(float x, float y, struct point* polyPoints, int numVertices);


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

