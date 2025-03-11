
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


void DrawCircle(float cx, float cy, float radius, int segments)
{
	glBegin(GL_POLYGON);
	glVertex2f(cx, cy); // center
	for (int i = 0; i <= segments; i++) {
		float angle = 2.0f * 3.14f * i / segments;
		float x = cx + radius * cosf(angle);
		float y = cy + radius * sinf(angle);
		glVertex2f(x, y);
	}
	glEnd();
}

void DrawTrunkWithShadow()
{
	//(darker brown)
	glColor3f(0.35f, 0.17f, 0.05f);

	// Shadow trunk
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.15f, -0.8f);
	glVertex2f(0.05f, -0.8f);
	glVertex2f(-0.05f, 0.6f);
	glEnd();

	// Shadow right branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.35f, 0.3f);
	glEnd();

	// Shadow left branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(-0.45f, 0.3f);
	glEnd();

	//(brown)
	glColor3f(0.55f, 0.27f, 0.07f);

	// Trunk
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.1f, -0.8f);
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.0f, 0.6f);
	glEnd();

	// Right branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.4f, 0.3f);
	glEnd();

	// Left branch 
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(-0.4f, 0.3f);
	glEnd();

}

void DrawTrunk() {

	glColor3f(0.35f, 0.17f, 0.07f);

	//main    
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.1f, -0.8f);  // left
	glVertex2f(0.1f, -0.8f);  // right
	glVertex2f(0.05f, 0.6f);  // top 
	glEnd();
	//left
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);  // left
	glVertex2f(0.0f, -0.3f);  // right
	glVertex2f(0.4f, 0.4f);  // top
	glEnd();

	//right
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);  // left
	glVertex2f(0.0f, -0.3f);  // right
	glVertex2f(-0.4f, 0.4f);  // top
	glEnd();
}

void DrawTree2()
{

	DrawTrunkWithShadow();

	// Draw shadow circles
	glColor3f(0.0f, 0.5f, 0.0f); // darker green
	DrawCircle(-0.05f, 0.15f, 0.35f, 20); // bottom-left shadow
	DrawCircle(0.35f, 0.15f, 0.35f, 20); // bottom-right shadow
	DrawCircle(-0.45f, 0.15f, 0.35f, 20); // bottom-center shadow

	// Draw original circles
	glColor3f(0.0f, 0.8f, 0.0f); // green   
	DrawCircle(0.0f, 0.2f, 0.35f, 20); // bottom-left 
	DrawCircle(0.4f, 0.2f, 0.35f, 20); // bottom-right 
	DrawCircle(-0.4f, 0.2f, 0.35f, 20); // bottom-center 
	DrawCircle(0.2f, 0.6f, 0.25f, 20); // middle-left 
	DrawCircle(-0.2f, 0.6f, 0.25f, 20); // middle-right 

	DrawCircle(0.0f, 0.8f, 0.15f, 20); // top

	//red circles (fruits)
	glColor3f(1.0f, 0.0f, 0.0f); // red
	DrawCircle(0.1f, 0.3f, 0.03f, 20); //1
	DrawCircle(-0.1f, 0.4f, 0.03f, 20); //2
	DrawCircle(0.3f, 0.5f, 0.03f, 20); //3
	DrawCircle(-0.3f, 0.5f, 0.03f, 20); //4

}

void DrawTree6()
{
	glColor3f(0.0f, 0.8f, 0.0f);  // Green 

	DrawCircle(0.0f, 0.3f, 0.5f, 50);  // Center 
	DrawCircle(-0.3f, 0.3f, 0.4f, 50); // Left 
	DrawCircle(0.3f, 0.3f, 0.4f, 50);  // Right 
	DrawCircle(-0.2f, 0.5f, 0.3f, 50); // Upper left 
	DrawCircle(0.2f, 0.5f, 0.3f, 50);  // Upper right 
	DrawCircle(-0.1f, 0.7f, 0.2f, 50); // Top left 
	DrawCircle(0.1f, 0.7f, 0.2f, 50);  // Top right 
	DrawTrunk();
}


void DrawTree7()
{
	glColor3f(0.0f, 0.7f, 0.0f);   // Green color
	DrawCircle(0.0f, -0.2f, 0.2f, 30);  // Bottom circle
	DrawCircle(0.0f, 0.0f, 0.25f, 30); // Slightly larger circle above
	DrawCircle(0.0f, 0.2f, 0.2f, 30);
	DrawCircle(0.0f, 0.35f, 0.15f, 30);
	DrawCircle(0.0f, 0.48f, 0.1f, 30);  // Topmost smaller circle

	// Set trunk color (brown)
	glColor3f(0.55f, 0.27f, 0.07f);

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.03f, -0.8f);  // bottom-left
	glVertex2f(0.03f, -0.8f);  // bottom-right
	glVertex2f(0.0f, 0.6f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);  // bottom-left
	glVertex2f(0.0f, -0.03f);  // bottom-right
	glVertex2f(0.15f, 0.15f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);  // bottom-left
	glVertex2f(0.0f, -0.03f);  // bottom-right
	glVertex2f(-0.15f, 0.15f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, -0.2f);  // bottom-left
	glVertex2f(0.0f, -0.23f);  // bottom-right
	glVertex2f(0.15f, -0.05f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, -0.2f);  // bottom-left
	glVertex2f(0.0f, -0.23f);  // bottom-right
	glVertex2f(-0.15f, -0.05f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.2f);  // bottom-left
	glVertex2f(0.0f, 0.23f);  // bottom-right
	glVertex2f(0.10f, 0.35f);  // top
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.2f);  // bottom-left
	glVertex2f(0.0f, 0.23f);  // bottom-right
	glVertex2f(-0.10f, 0.35f);  // top
	glEnd();
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////
