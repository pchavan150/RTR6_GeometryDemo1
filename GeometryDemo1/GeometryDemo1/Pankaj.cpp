#define	 _CRT_SECURE_NO_WARNINGS
#include "common.h"
#include "Pankaj.h"


void DrawLand()
{
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.2f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glEnd();
}


