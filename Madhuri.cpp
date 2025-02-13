#include "common.h"
#include "Madhuri.h"

//All definations
void DrawCloud4()
{
	glColor3f(0.0f, 0.0f, 0.0f);
	CreateCircle(0.2f, 0.8f, 0.50f);
	CreateCircle(-0.2f, 0.8f, 0.50f);
	CreateCircle(-0.9f, 0.8f, 0.50f);
	CreateCircle(-0.1f, 1.2f, 0.62f);
	glTranslatef(0.0f, 0.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	CreateCircle(0.2f, 0.9f, 0.50f);
	CreateCircle(-0.2f, 0.9f, 0.50f);
	CreateCircle(-0.9f, 0.9f, 0.50f);
	CreateCircle(-0.1f, 1.3f, 0.62f);

}


void CreateCircle(float center_x, float center_y, float radius)
{
	//variable declaration
	float theta = 0.0f;
	float x, y;

	//code
	glLineWidth(5.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * (PI / 180.0f);
		x = radius * cos(theta) + center_x;
		y = radius * sin(theta) + center_y;
		glVertex3f(x, y, 0.0f);
	}
	glEnd();
}

