///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Shreyash.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Global Variables                                               
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Declare global variables here

point_t* p_array = NULL;
FILE* fp = NULL;
size_t nElements = 0;
float angle = 0.0f;
int dir = 0;
POSITION position_arr[LEAF_COUNT];

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


struct point_array create_array(void)
{
	// this is the function to create array of the points required
	// to make the polygon of the shape required to plot the leaves
	// [ THE UPPER GREEN PART OF TREE ]


	struct point_array p_arr;

	p_array = (point_t*)malloc(45 * sizeof(point_t));
	if (p_array == NULL)
	{
		puts("Error in allocating memory");
		exit(EXIT_FAILURE);
	}

	p_array[0].x = 0.0f;
	p_array[0].y = 2.0f;
	p_array[1].x = 0.0f;
	p_array[1].y = 0.765f;
	p_array[2].x = 0.1357f;
	p_array[2].y = 0.4732f;
	p_array[3].x = 0.4848f;
	p_array[3].y = 0.5128f;
	p_array[4].x = 0.6672f;
	p_array[4].y = 0.72265f;
	p_array[5].x = 0.9636f;
	p_array[5].y = 0.4855f;
	p_array[6].x = 1.25f;
	p_array[6].y = 0.2484f;
	p_array[7].x = 1.39f;
	p_array[7].y = 0.2894f;
	p_array[8].x = 1.7f;
	p_array[8].y = 0.1845f;
	p_array[9].x = 1.95f;
	p_array[9].y = 0.344f;
	p_array[10].x = 1.85f;
	p_array[10].y = 0.6f;
	p_array[11].x = 1.8f;
	p_array[11].y = 0.8f;
	p_array[12].x = 1.84f;
	p_array[12].y = 1.0f;
	p_array[13].x = 1.688f;
	p_array[13].y = 1.25f;
	p_array[14].x = 1.46f;
	p_array[14].y = 1.434f;
	p_array[15].x = 1.5f;
	p_array[15].y = 1.7f;
	p_array[16].x = 1.35f;
	p_array[16].y = 1.844f;
	p_array[17].x = 1.4f;
	p_array[17].y = 2.2f;
	p_array[18].x = 1.141;
	p_array[18].y = 2.36f;
	p_array[19].x = 0.73f;
	p_array[19].y = 2.222f;
	p_array[20].x = 0.6f;
	p_array[20].y = 2.6f;
	p_array[21].x = 0.4f;
	p_array[21].y = 2.71f;
	p_array[22].x = 0.3f;
	p_array[22].y = 2.82f;
	p_array[23].x = 0.01f;
	p_array[23].y = 2.9f;
	p_array[24].x = -0.244f;
	p_array[24].y = 2.75f;
	p_array[25].x = -0.51f;
	p_array[25].y = 2.7f;
	p_array[26].x = -0.8f;
	p_array[26].y = 2.48f;
	p_array[27].x = -1.2f;
	p_array[27].y = 2.4f;
	p_array[28].x = -1.35f;
	p_array[28].y = 1.96f;
	p_array[29].x = -1.74f;
	p_array[29].y = 1.83f;
	p_array[30].x = -1.71f;
	p_array[30].y = 1.657f;
	p_array[31].x = -1.7f;
	p_array[31].y = 1.4522f;
	p_array[32].x = -1.97f;
	p_array[32].y = 1.3382f;
	p_array[33].x = -2.11f;
	p_array[33].y = 1.14f;
	p_array[34].x = -2.03f;
	p_array[34].y = 0.91f;
	p_array[35].x = -2.12f;
	p_array[35].y = 0.58f;
	p_array[36].x = -1.92f;
	p_array[36].y = 0.43f;
	p_array[37].x = -1.8f;
	p_array[37].y = 0.2f;
	p_array[38].x = -1.52f;
	p_array[38].y = 0.066f;
	p_array[39].x = -1.165f;
	p_array[39].y = 0.05f;
	p_array[40].x = -0.937f;
	p_array[40].y = 0.198f;
	p_array[41].x = -0.659f;
	p_array[41].y = 0.4171f;
	p_array[42].x = -0.541f;
	p_array[42].y = 0.854f;
	p_array[43].x = -0.35f;
	p_array[43].y = 0.868f;
	p_array[44].x = 0.0f;
	p_array[44].y = 0.765f;

	p_arr.p = p_array;
	p_arr.size = 45;

	return p_arr;
}

double generate_random(float max, float min)
{
	double d = (rand() / (float)RAND_MAX) * (max - min) + min;
	return (d);
}

void populate(int count, struct point_array p_arr)
{

	// takes LEAF_COUNT number of random points
	// validates them with respect to our leave's polygon
	// plots it in if valid


	int i;
	point_t point;
	for (i = 0; i < count; ++i)
	{
		glPushMatrix();
		if (validate_point(position_arr[i], p_arr))
		{
			glTranslatef(position_arr[i].x, position_arr[i].y, 0);
			glColor3f(0.0f, position_arr[i].color, 0.0f);
			glRotatef(position_arr[i].angle, 0.0f, 0.0f, 1.0f);

			// rotatiion of leaf managed here
			if (position_arr[i].direction == 0)
			{
				position_arr[i].angle += 0.35f;
				if (position_arr[i].angle >= 0)
					position_arr[i].direction = 1;
			}
			else
			{
				position_arr[i].angle -= 0.35f;
				if (position_arr[i].angle < -20)
					position_arr[i].direction = 0;
			}
			glRotatef(position_arr[i].angle, 0.0f, 0.0f, 1.0f);
			drawLeaf();			// actual leaf display
		}
		glPopMatrix();
	}
}

void drawCircle(float radius)
{
	float x, y;
	float pi = 3.1415;
	float angle;

	glBegin(GL_POLYGON);
	for (int i = 0; i < 256; ++i)
	{
		angle = 2.0f * pi * i / 256;
		x = radius * cos(angle);
		y = radius * sin(angle);
		glVertex3f(x, y, 0.0f);
	}
	glEnd();
}

int validate_point(POSITION point_pos, struct point_array p_arr)
{
	// ray towards +ve infinity algorithm

	float x_int;
	int i;
	int count = 0;
	for (i = 0; i < p_arr.size; ++i)
	{
		int next = (i + 1) % p_arr.size;
		if ((p_arr.p[i].y > point_pos.y) ^ (p_arr.p[next].y > point_pos.y))
		{
			x_int = p_arr.p[i].x + ((point_pos.y - p_arr.p[i].y) / (p_arr.p[next].y - p_arr.p[i].y)) * (p_arr.p[next].x - p_arr.p[i].x);
			if (x_int > point_pos.x)
				count++;
		}
	}
	return count % 2;
}

void drawLeaf(void)
{
	glPushMatrix();

	// main green leaf
	glScalef(0.3f, 0.3f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, -0.3f, 0.0f);
	glVertex3f(0.077f, -0.2f, 0.0f);
	glVertex3f(0.138f, -0.072f, 0.0f);
	glVertex3f(0.1696f, 0.01f, 0.0f);
	glVertex3f(0.18094f, 0.1f, 0.0f);
	glVertex3f(0.149f, 0.145f, 0.0f);
	glVertex3f(0.081f, 0.1698f, 0.0f);
	glVertex3f(0.0097f, 0.1259f, 0.0f);
	glVertex3f(-0.02f, 0.1429f, 0.0f);
	glVertex3f(-0.024f, 0.200f, 0.0f);
	glVertex3f(-0.0030f, 0.2349f, 0.0f);
	glVertex3f(-0.042f, 0.2886f, 0.0f);
	glVertex3f(-0.052f, 0.125f, 0.0f);
	glVertex3f(-0.11f, 0.1938f, 0.0f);
	glVertex3f(-0.228f, 0.165f, 0.0f);
	glVertex3f(-0.2535f, 0.041f, 0.0f);
	glVertex3f(-0.2f, -0.1f, 0.0f);
	glVertex3f(0.002f, -0.2193f, 0.0f);
	glVertex3f(0.1f, -0.3f, 0.0f);
	glEnd();


	// dark green border of the leaf
	glColor3f(0.0f, 0.4f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.1f, -0.3f, 0.0f);
	glVertex3f(0.077f, -0.2f, 0.0f);
	glVertex3f(0.138f, -0.072f, 0.0f);
	glVertex3f(0.1696f, 0.01f, 0.0f);
	glVertex3f(0.18094f, 0.1f, 0.0f);
	glVertex3f(0.149f, 0.145f, 0.0f);
	glVertex3f(0.081f, 0.1698f, 0.0f);
	glVertex3f(0.0097f, 0.1259f, 0.0f);
	glVertex3f(-0.02f, 0.1429f, 0.0f);
	glVertex3f(-0.024f, 0.200f, 0.0f);
	glVertex3f(-0.0030f, 0.2349f, 0.0f);
	glVertex3f(-0.042f, 0.2886f, 0.0f);
	glVertex3f(-0.052f, 0.125f, 0.0f);
	glVertex3f(-0.11f, 0.1938f, 0.0f);
	glVertex3f(-0.228f, 0.165f, 0.0f);
	glVertex3f(-0.2535f, 0.041f, 0.0f);
	glVertex3f(-0.2f, -0.1f, 0.0f);
	glVertex3f(0.002f, -0.2193f, 0.0f);
	glEnd();

	glPopMatrix();
}

void InitializeLeafs()
{
	// local variable declarations
	int i;

	glPointSize(12.0f);

	// initializing Position array for LEAF_COUNT number of leaves

	// here ranges given to x and y are fixed for our polygon!
	for (i = 0; i < LEAF_COUNT; ++i)
	{
		position_arr[i].x = generate_random(2.1f, -2.3f);		// fixed random x 
		position_arr[i].y = generate_random(3.0f, -1.1f);		// fixed random y
		position_arr[i].z = generate_random(2.0f, 0.0f);		// fixed random z (not used)
		position_arr[i].color = generate_random(0.8f, 0.3f);	// fixed random color (range - light green to dark green)
		position_arr[i].angle = generate_random(50, -20);		// fixed random initial angle of the leaf
		position_arr[i].direction = 0;							// direction
	}
}

void DrawMainTree()
{
	struct point_array p_arr = create_array();	// creats the polygon required for the structure of leaves
	populate(LEAF_COUNT, p_arr);
	drawTrunkManual();							// Draws the trunk part of the tree only
}

void drawTrunkManual(void)
{
	// code
	glColor3f(0.46f, 0.231f, 0.055f);

	// the main middle trunk of the tree
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.22f, 0.004f);
	glVertex2f(0.290f, 0.158f);
	glVertex2f(0.2591f, 0.2717f);
	glVertex2f(0.1857f, 0.3766f);
	glVertex2f(0.0f, 0.5f);
	glColor3f(0.46f, 0.231f, 0.055f);
	glVertex2f(-0.1342f, 0.5f);
	glVertex2f(-0.1398f, 0.4436f);
	glVertex2f(-0.366f, 0.458f);
	glVertex2f(-0.42f, 0.2389f);
	glVertex2f(-0.486f, 0.157f);
	glVertex2f(-0.48871f, 0.1179f);
	glVertex2f(-0.467f, 0.08231f);
	glVertex2f(-0.4753f, 0.03249f);
	glVertex2f(-0.4682f, 0.0102f);
	glVertex2f(-0.377f, -0.0422f);
	glVertex2f(-0.328f, -0.106f);
	glVertex2f(-0.311f, -0.208f);
	glVertex2f(-0.304f, -0.287f);
	glVertex2f(-0.342f, -0.341f);
	glVertex2f(-0.382f, -0.421f);
	glVertex2f(-0.4549f, -0.4399f);
	glVertex2f(-0.5f, -0.4747f);
	glVertex2f(-0.5518f, -0.5422f);
	glVertex2f(-0.569f, -0.648f);
	glColor3f(0.302f, 0.153f, 0.039f);
	glVertex2f(-0.575f, -0.831f);
	glVertex2f(-0.65f, -0.9f);
	glVertex2f(-0.632f, -1.001f);
	glVertex2f(-0.5314f, -0.95f);
	glVertex2f(-0.357f, -0.981f);
	glVertex2f(-0.165f, -0.92f);
	glVertex2f(0.0f, -0.85f);
	glVertex2f(0.2f, -0.841f);
	glVertex2f(0.37f, -0.91f);
	glVertex2f(0.642f, -0.922f);
	glVertex2f(0.7f, -0.91f);
	glVertex2f(0.712f, -0.886f);
	glVertex2f(0.7f, -0.85f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.7f, -0.93f);
	glVertex2f(0.432f, -0.5183f);
	glVertex2f(0.41f, -0.428f);
	glVertex2f(0.285f, -0.3134f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(0.181f, -0.101f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.22f, 0.004f);
	glEnd();

	// left branch of the tree
	glColor3f(0.46f, 0.231f, 0.055f);		// light shade
	glBegin(GL_POLYGON);
	glVertex2f(0.5f, 0.5f);
	glColor3f(0.302f, 0.153f, 0.039f);		// dark shade
	glVertex2f(0.5f, 0.467f);
	glVertex2f(0.7f, 0.4180f);
	glVertex2f(0.864f, 0.4111f);
	glVertex2f(1.031f, 0.48f);
	glVertex2f(1.08f, 0.53f);
	glVertex2f(0.9f, 0.5f);
	glColor3f(0.46f, 0.231f, 0.055f);
	glVertex2f(0.804f, 0.486f);
	glVertex2f(0.663f, 0.556f);
	glVertex2f(0.784f, 0.644f);
	glVertex2f(0.864f, 0.735);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.83f, 0.8289f);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.62f, 0.65f);
	glVertex2f(0.5f, 0.6f);
	glVertex2f(0.38f, 0.59f);
	glVertex2f(0.20f, 0.57f);
	glVertex2f(0.02f, 0.49f);
	glVertex2f(0.18f, 0.33f);
	glVertex2f(0.5f, 0.467f);
	glEnd();

	// middle branch of the tree
	glBegin(GL_POLYGON);
	glVertex2f(0.03f, 0.81f);
	glVertex2f(0.093f, 0.820f);
	glVertex2f(0.144f, 0.86f);
	glVertex2f(0.24f, 0.93f);
	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.35f, 1.065f);
	glVertex2f(0.4f, 1.16f);
	glVertex2f(0.303f, 1.1065f);
	glVertex2f(0.23f, 1.02f);
	glVertex2f(0.141f, 0.94f);
	glVertex2f(0.083f, 0.90f);
	glVertex2f(0.01f, 0.8851f);
	glVertex2f(-0.01f, 0.85f);
	glVertex2f(-0.029f, 0.81f);
	glVertex2f(-0.05f, 0.72f);		//
	glVertex2f(-0.06f, 0.455f);
	glVertex2f(-0.05f, 0.4f);
	glVertex2f(0.0f, 0.455f);
	glVertex2f(0.03f, 0.564f);
	glVertex2f(0.044f, 0.66f);
	glVertex2f(0.093f, 0.753f);
	glVertex2f(0.093f, 0.82f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.149f, 0.829f);
	glVertex2f(-0.0991f, 0.4f);
	glVertex2f(-0.02f, 0.45f);
	glVertex2f(-0.03f, 0.740f);
	glVertex2f(-0.082f, 0.79f);
	glVertex2f(-0.06f, 0.94f);
	glVertex2f(-0.04f, 0.99f);
	glVertex2f(0.02f, 0.5222f);
	glVertex2f(0.07f, 1.17f);
	glVertex2f(-0.044f, 1.066f);
	glVertex2f(-0.09f, 1.07f);
	glVertex2f(-0.14f, 1.0f);
	glVertex2f(-0.178f, 1.11f);
	glVertex2f(-0.2f, 1.2f);
	glVertex2f(-0.2838f, 1.39f);
	glVertex2f(-0.3f, 1.21f);
	glVertex2f(-0.27f, 1.11f);
	glVertex2f(-0.2f, 1.0f);
	glVertex2f(-0.233f, 0.8f);
	glVertex2f(-0.1639f, 0.69f);
	glVertex2f(-0.15f, 0.44f);
	glVertex2f(-0.0991f, 0.4f);
	glEnd();


	// right branch of the tree (rotated and processed left branch)
	glPushMatrix();
	glTranslatef(-0.3f, -0.1f, 0.0f);
	glRotatef(-20, 0.0f, 0.0f, 1.0f);
	glRotatef(180, 0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.467f);
	glVertex2f(0.7f, 0.4180f);
	glVertex2f(0.864f, 0.4111f);
	glVertex2f(1.031f, 0.48f);
	glVertex2f(1.08f, 0.53f);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.804f, 0.486f);
	glVertex2f(0.663f, 0.556f);
	glVertex2f(0.784f, 0.644f);
	glVertex2f(0.864f, 0.735);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.83f, 0.8289f);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.62f, 0.65f);
	glVertex2f(0.5f, 0.6f);
	glVertex2f(0.38f, 0.59f);
	glVertex2f(0.20f, 0.57f);
	glVertex2f(0.02f, 0.49f);
	glVertex2f(0.18f, 0.33f);
	glVertex2f(0.5f, 0.467f);
	glEnd();
	glPopMatrix();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

