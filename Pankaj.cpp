#include "common.h"
#include "Pankaj.h"

const int gridWidth = 4;
const int gridHeight = 4;

void DrawNet()
{
	VERTEX vertex[gridHeight][gridWidth];

	float start_x = -1.0f;
	float start_y = 1.0f;
	float start_z = 0.0f;

	for (int i = 0; i < gridHeight; i++)
	{
		for (int j = 0; j < gridWidth; j++)
		{
			vertex[i][j].x = start_x + (float)j * 0.5f;
			vertex[i][j].y = start_y - (float)i * 0.5f; 
			vertex[i][j].z = start_z;
		}
	}

	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(5.0f);


	for (int i = 0; i < gridHeight; i++)
	{
		glBegin(GL_LINE_LOOP);
		for (int j = 0; j < gridWidth; j++)
		{
			glVertex3f(vertex[i][j].x, vertex[i][j].y, vertex[i][j].z);
		}
		glEnd();
	}

	for (int i = 0; i < gridWidth; i++)
	{
		glBegin(GL_LINE_LOOP);
		for (int j = 0; j < gridHeight; j++)
		{
			glVertex3f(vertex[j][i].x, vertex[j][i].y, vertex[j][i].z);
		}
		glEnd();
	}



}


