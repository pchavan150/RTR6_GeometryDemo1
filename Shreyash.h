#pragma once


#define LEAF_COUNT	5000

typedef struct point point_t;
typedef struct position POSITION;

struct point
{
	float x;
	float y;
};

struct point_array
{
	struct point* p;
	int size;
};

struct leaf
{
	POINT point_arr[20];
	//int direction;

};

struct position
{
	float x, y, z;
	float color;
	float angle;
	int direction;
};


// global variable declarations
extern point_t* p_array;
extern FILE* fp;
extern size_t nElements;
extern float angle;
extern int dir;

extern POSITION position_arr[LEAF_COUNT];


// function declarations

struct point_array create_array(void);			// leaf structure polygon
double generate_random(float max, float min);
void populate(int count, struct point_array p_arr);		// population and plotting of leaves
int validate_point(POSITION point_pos, struct point_array p_arr);	// validation of random points

// tree related
void drawLeaf(void);		// single leaf

void drawTrunkManual(void);	// whole tree trunk part

void DrawMainTree();

void InitializeLeafs();
