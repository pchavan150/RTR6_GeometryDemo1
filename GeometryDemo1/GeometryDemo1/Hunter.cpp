///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "hunter.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      Function Definitions                                          //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////



void DrawHunterFrontView()
{
	float z = 0.0f;
	int i;
	float neck[10][2] = {
		{0.03125f, 0.3375f},
		{0.01875f, 0.33125f},
		{0.0125f, 0.334f},
		{-0.00625f, 0.3375f},
		{-0.028f, 0.345f},
		{-0.025f, 0.33125f},
		{-0.01875f, 0.325f},
		{-0.00625f, 0.3125f},
		{0.0222f, 0.2905f},
		{0.028f, 0.30625f},
		//{0.03125f, 0.3125f}
	};

	float rightHairCut[7][2] = {
		{-0.04375f, 0.4375f},
		{-0.05f, 0.41875f},
		{-0.04375f, 0.4f},
		{-0.05f, 0.4f},
		{-0.052f, 0.41875f},
		{-0.0625f, 0.425f},
		{-0.0625f, 0.43125f}
	};

	float leftHairCut[5][2] = {
		{0.05f, 0.4593f},
		{0.05625f, 0.4375f},
		{0.05625f, 0.43125f},
		{0.05624f, 0.4375f},
		{0.0625f, 0.44375f}
	};

	//left is actual left of hunter
	float leftEyebrow[9][2] = {
		{0.025f, 0.4370f},
		{0.025f, 0.4340f},
		{0.0375f, 0.4335f},
		{0.04375f, 0.4358f},
		{0.050f, 0.4340f},
		{0.050f, 0.4360f},
		{0.04375f, 0.4375f},
		{0.0375f, 0.4375f},
		{0.03125f, 0.4370f}
	};

	float rightEyebrow[8][2] = {
		{0.0120f, 0.4370f},
		{0.0120f, 0.4340f},
		{0.0f, 0.4355f},
		{-0.0125f, 0.4360f},
		{-0.025f, 0.43315f},
		{-0.025f, 0.43375f},
		{-0.0125f, 0.4375f},
		{0.0f, 0.4370f}
	};

	float lips[6][2] = {
		{0.0375f, 0.3630f},
		{0.025f, 0.3625f},
		{0.0125f, 0.3630f},
		{0.01875f, 0.3655f},
		{0.025f, 0.36875f},
		{0.03125f, 0.3655f}
	};

	float nose[4][2] = {
		{0.025f, 0.4120f},
		{0.029f, 0.38125f},
		{0.026f, 0.3785f},
		{0.0160f, 0.38125f}
	};

	float face[26][2] = {
		{-0.0625f,0.43125f},
		{-0.0375f,0.45625f},
		{0.0f,0.450f},
		{0.0375f,0.45625f},
		{0.05f,0.4593f},
		{0.0625f,0.44375f},
		{0.074f,0.4375f},
		{0.074f,0.4250f},
		{0.06875f,0.4125f},
		{0.0625f,0.4090f},
		{0.05625f,0.4200f},
		{0.05800f,0.375f},
		{0.05f,0.3625f},
		{0.0375f,0.34375f},
		{0.03125f,0.3375f},
		{0.01875f,0.33125f},
		{0.0125f,0.334f},
		{-0.00625f,0.3375f},
		{-0.028f,0.345f},
		{-0.04375f,0.375f},
		{-0.05f,0.39375f},
		{-0.05625f,0.3875f},
		{-0.06875f,0.4f},
		{-0.074f,0.4125f},
		{-0.06875f,0.4210f},
		{-0.05f,0.425f}
	};

	float dhoti[45][2] = {
		{ 1.125f, -0.25f},
		{ 1.125f, -0.375f},
		{ 1.125f, -0.500f},
		{ 1.152f, -0.625f},
		{ 1.178f, -0.750f},
		{ 1.218f, -0.875f},
		{ 1.250f, -1.000f},
		{ 1.275f, -1.125f},
		{ 1.300f, -1.125f},
		{ 1.325f, -1.375f},
		{ 1.350f, -1.500f},
		{ 1.375f, -1.625f},
		{ 1.390f, -1.750f},
		{ 1.320f, -1.875f},
		{ 1.250f, -2.000f},
		{ 1.150f, -2.250f},
		{ 1.200f, -2.500f},
		{ 1.250f, -2.175f},
		{ 1.000f, -2.875f},
		{ 0.900f, -2.899f},
		{ 0.800f, -2.900f},
		{ 0.700f, -2.909f},
		{ 0.600f, -2.899f},
		{ 0.500f, -2.875f},
		{ 0.375f, -2.775f},
		{ 0.250f, -2.725f},
		{ 0.125f, -2.625f},
		{ 0.000f, -2.750f},
		{-0.125f, -2.805f},
		{-0.250f, -2.850f},
		{-0.375f, -2.899f},
		{-0.500f, -2.910f},
		{-0.625f, -2.900f},
		{-0.750f, -2.875f},
		{-0.825f, -2.825f},
		{-1.000f, -2.770f},
		{-1.050f, -2.500f},
		{-1.040f, -2.200f},
		{-1.080f, -2.100f},
		{-1.109f, -2.000f},
		{-1.125f, -1.900f},
		{-1.175f, -1.800f},
		{-1.125f, -1.700f},
		{-1.100f, -1.500f}, //changed X
		{-1.000f, -0.250f}
	};

	float rightLeg[16][2] = {
		{0.750f, -4.000f},
		{1.000f, -1.900f},
		{1.000f, -4.105f},
		{1.600f, -4.441f},
		{1.615f, -4.500f},
		{1.610f, -4.559f},
		{1.350f, -4.870f},
		{1.150f, -4.870f},
		{0.730f, -4.480f},
		{0.630f, -4.470f},
		{0.450f, -4.399f},
		{0.450f, -4.299f},
		{0.460f, -4.125f},
		{0.500f, -3.999f},
		{0.395f, -2.800f},
		{1.000f, -2.050f}
	};

	float leftLeg[14][2] = {
		{-0.550f, -4.305f},
		{-0.200f, -2.750f},
		{-0.210f, -4.285f},
		{ 0.225f, -4.760f},
		{ 0.255f, -4.865f},
		{ 0.225f, -4.970f},
		{ 0.009f, -5.000f},
		{-0.450f, -5.000f},
		{-0.780f, -4.480f},
		{-0.780f, -4.500f},
		{-0.740f, -4.250f},
		{-0.800f, -2.815f},
		{-0.550f, -2.815f},
		{-0.190f, -2.875f}
	};

	float moustache[22][2] = {
		{0.05325f, 0.3625},
		{0.05425f, 0.3592f},
		{0.05625f, 0.35625f},
		{0.05323f, 0.35312f},
		{0.05f, 0.351f},
		{0.04375f, 0.35625f},
		{0.04025f, 0.3625f},
		{0.0395f, 0.36875f},
		{0.0375f, 0.370f},
		{0.03125f, 0.370f},
		{0.025f, 0.371f},
		{0.025f, 0.375f},
		{0.03125f, 0.375f},
		{0.0375f, 0.3770f},
		{0.04475f, 0.36875f},
		{0.0472f, 0.3625f},
		{0.0475f, 0.35625f},
		{0.05f, 0.352f},
		{0.05325f, 0.35312f},
		{0.05623f, 0.3625f},
		{0.05628f, 0.3532f},
		{0.05325f, 0.3624f}
	};

	float midPart[33][2] = {
		{0.36f, 2.0f},
		{0.25f, 3.0f},
		{-0.06f, 3.06f},
		{-0.125f, 3.25f},
		{-0.23f, 3.35f},
		{-0.25f, 3.4f},
		{-0.5f, 3.36f},
		{-1.0f, 3.0f},
		{-1.25f, 1.95f},
		{-1.12f, 1.88f},
		{-0.88f, 1.85f},
		{-0.64f, 1.88f},
		{-0.75f, 1.36f},
		{-0.75f, -0.125f},
		{-0.5f, -0.18f},
		{-0.25f, -0.25f},
		{-0.125f, -0.25f},
		{0.0f, -0.23f},
		{0.25f, -0.21f},
		{0.62f, -0.125f},
		{0.75f, -0.07f},
		{1.125f, 0.125f},
		{1.06f, 1.0f},
		{1.1f, 1.5f},
		{1.125f, 2.0f},
		{1.36f, 2.06f},
		{1.25f, 3.0f},
		{0.88f, 3.25f},
		{0.75f, 3.38f},
		{0.5f, 3.5f},
		{0.35f, 3.36f},
		{0.36f, 3.06f},
		{0.25f, 3.0f}
	};

	float arm[11][2] = {
		{-1.0f, 1.5f},
		{-1.25f, 1.95f},
		{-1.36f, 1.5f},
		{-1.25f, 1.0f},
		{-1.2f, 0.5f},
		{-1.125f, 0.125f},
		{-0.72f, 0.125f},
		{-0.80f, 0.32f},
		{-0.72f, 1.46f},
		{-0.62f, 1.88f},
		{-1.25f, 1.95f}
	};

	float Palm[25][2] = {
		{ -1.0f, -0.2f },
		{ -1.126f, 0.264f },
		{ -1.1178f, 0.074f },
		{ -1.167f, -0.0329f },
		{ -1.2f, -0.2f },
		{ -1.225f, -0.4f },
		{ -1.2f, -0.6f },
		{ -1.159f, -0.6248f },
		{ -1.1281f, -0.6f },	// line 1
		{ -1.1116f, -0.6724f },
		{ -1.0599f, -0.6724f },	// line 2
		{ -1.04f, -0.725f },
		{ -1.003f, -0.7481f },
		{ -0.964f, -0.7294f },
		{ -0.966f, -0.697f },	// line 3
		{ -0.9288f, -0.7217 },
		{ -0.8796f, -0.7129f },
		{ -0.86177f, -0.6679f },
		{ -0.8859f, -0.57557f },
		{ -0.9f, -0.444f },
		{ -0.8892f, -0.3831f },
		{ -0.8782f, -0.3183f },
		{ -0.8397f, -0.2534f },
		{ -0.8397f, 0.1324f },
		{ -1.126f, 0.264f },
	};

	float PalmHalf[19][2] = {
		{-0.78f, -0.2},
		{-0.8397f, -0.2534f},
		{-0.785f, -0.306f},
		{-0.7815f, -0.379f},
		{-0.7518f, -0.4513f},
		{-0.7f, -0.5f},
		{-0.644f, -0.493f},
		{-0.6265f, -0.461f},
		{-0.641f, -0.4117f},
		{-0.6947f, -0.3182f},
		{-0.7f, -0.218f},
		{-0.68f, -0.1512f},
		{-0.67f, -0.064f},
		{-0.689f, -0.01917f},
		{-0.7177f, 0.063f},
		{-0.736f, 0.08f},
		{-0.7177f, 0.14229f},
		{-0.8397f, 0.1324f},
		{-0.8397f, -0.2534f}
	};

	float PalmFingers[25][2] = {
		{-1.0f, -0.2f},
		{-1.126f, 0.264f},
		{-1.1178f, 0.074f},
		{-1.167f, -0.0329f},
		{-1.2f, -0.2f},
		{-1.225f, -0.4f},
		{-1.2f, -0.6f},
		{-1.159f, -0.6248f},
		{-1.1281f, -0.6f},	// line 1
		{-1.1116f, -0.6724f},
		{-1.0599f, -0.6724f},	// line 2
		{-1.04f, -0.725f},
		{-1.003f, -0.7481f},
		{-0.964f, -0.7294f},
		{-0.966f, -0.697f},	// line 3
		{-0.9288f, -0.7217},
		{-0.8796f, -0.7129f},
		{-0.86177f, -0.6679f},
		{-0.8859f, -0.57557f},
		{-0.9f, -0.444f},
		{-0.8892f, -0.3831f},
		{-0.8782f, -0.3183f},
		{-0.8397f, -0.2534f},
		{-0.8397f, 0.1324f},
		{-1.126f, 0.264f}
	};

	float pataka[9][2] = {
		{0.1125f, 0.0125f},
		{0.1250f, 0.0f},
		{0.1200f, -0.0125f},
		{0.1180, -0.0300},
		{0.0375f, -0.050f},
		{0.0f, -0.05612f},
		{-0.0625f, -0.050f},
		{-0.0750f, -0.0125f},
		{0.0f, -0.0250f}
	};

	float rightEyeBall[11][2] = {
		{0.0125f, 0.41575f},
		{0.0f, 0.41475f},
		{-0.0125f, 0.41175f},
		{-0.01675f, 0.41475f},
		{-0.01475f, 0.41875f},
		{-0.00925f, 0.4275},
		{-0.00625f, 0.4280f},
		{0.00325f, 0.4280f},
		{0.00625f, 0.4250f},
		{0.0125f, 0.41975},
		{0.0126f, 0.41875f}
	};

	float leftEyeBall[11][2] = {
		{0.053f, 0.4158f},
		{0.05f, 0.414f},
		{0.0375f, 0.414f},
		{0.028f, 0.415f},
		{0.0295f, 0.41875f},
		{0.0300f, 0.42075f},
		{0.03125f, 0.4250f},
		{0.0375f, 0.4280f},
		{0.04375f, 0.4280f},
		{0.05f, 0.4250f},
		{0.053f, 0.4210f}
	};

	float collarRight[10][2] = {
		{-0.35f, 3.25f},
		{-0.25f, 2.9f},
		{-0.125f, 3.0f},
		{0.0f, 3.0f},
		{0.25f, 2.9f},
		{-0.1f, 3.23f},
		{-0.15f, 3.36f},
		{-0.18f, 3.5f},
		{-0.2f, 3.5f},
		{-0.3f, 3.6f},
	};

	float collarLeft[10][2] = {
		{0.36f, 3.48f},
		{0.28f, 3.36f},
		{0.3f, 3.25f},
		{0.27f, 3.12f},
		{0.25f, 2.9f},
		{0.3f, 3.0f},
		{0.42f, 3.1f},
		{0.68f, 3.0f},
		//{0.6f, 2.92f},
		{0.58f, 3.25f},
		{0.5f, 3.5f}
	};


	glTranslatef(0.0f, 1.0f, 0.0f);
	glScalef(3.0f, 3.0f, 3.0f);
	//head
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0375f, 0.5f, 0.0f);
	glVertex3f(0.0125f, 0.5125f, 0.0f);
	glVertex3f(0.0f, 0.505f, 0.0f);
	glVertex3f(-0.0125f, 0.5100f, 0.0f);
	glVertex3f(-0.0375f, 0.5f, 0.0f);
	glVertex3f(-0.05625f, 0.4875f, 0.0f);
	glVertex3f(-0.0630f, 0.46875f, 0.0f);
	glVertex3f(-0.025f, 0.4875f, 0.0f);
	glVertex3f(0.0f, 0.49375f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.80f, 0.466f, 0.133f);
	glVertex3f(0.072f, 0.4625f, 0.0f);
	glVertex3f(0.06875f, 0.5f, 0.0f);
	glVertex3f(0.0375f, 0.5f, 0.0f);
	glVertex3f(0.0f, 0.505f, 0.0f);
	glVertex3f(-0.0250f, 0.4875f, 0.0f);
	glVertex3f(-0.0630, 0.46875f, 0.0f);
	glVertex3f(-0.0780f, 0.4625f, 0.0f);
	glVertex3f(-0.0625f, 0.43125f, 0.0f);
	glVertex3f(-0.0375, 0.45625f, 0.0f);
	glVertex3f(0.0f, 0.450f, 0.0f);
	glVertex3f(0.0375f, 0.45625f, 0.0f);
	glVertex3f(0.05f, 0.4593f, 0.0f);
	glVertex3f(0.0625f, 0.44375f, 0.0f);
	glVertex3f(0.074, 0.4593f, 0.0f);
	glEnd();



	//hairs
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 7; i++) {
		glVertex3f(rightHairCut[i][0], rightHairCut[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 5; i++) {
		glVertex3f(leftHairCut[i][0], leftHairCut[i][1], z);
	}
	glEnd();

	//Eyebrow
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 9; i++) {
		glVertex3f(leftEyebrow[i][0], leftEyebrow[i][1], z);
	}
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 8; i++) {
		glVertex3f(rightEyebrow[i][0], rightEyebrow[i][1], z);
	}
	glEnd();


	//eye new


	glEnable(GL_POINT_SMOOTH);
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.04375f, 0.41880f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 1.0f, 1.0f);
	glColor3f(0.77f, 0.77f, 0.77f);
	for (i = 0; i < 11; i++)
	{
		glVertex3f(leftEyeBall[i][0], leftEyeBall[i][1], z);
	}
	glEnd();

	glEnable(GL_POINT_SMOOTH);
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0006f, 0.41875f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 1.0f, 1.0f);
	glColor3f(0.77f, 0.77f, 0.77f);
	for (i = 0; i < 11; i++)
	{
		glVertex3f(rightEyeBall[i][0], rightEyeBall[i][1], z);
	}
	glEnd();


	//moustache
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 22; i++) {
		glVertex3f(moustache[i][0], moustache[i][1], z);
	}
	glEnd();

	glTranslatef(0.530f / 10, 0.0f, 0.0f);
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 22; i++) {
		glVertex3f(moustache[i][0], moustache[i][1], z);
	}
	glEnd();

	glRotatef(-180.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(-0.530f / 10, 0.0f, 0.0f);

	//random line
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0125f, 0.4f, 0.0f);
	glVertex3f(0.0f, 0.3875f, 0.0f);
	glEnd();
	glLineWidth(1.0f);

	//lips
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 6; i++) {
		glVertex3f(lips[i][0], lips[i][1], z);
	}
	glEnd();

	//lips
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 4; i++) {
		glVertex3f(nose[i][0], nose[i][1], z);
	}
	glEnd();



	//face
	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 26; i++) {
		glVertex3f(face[i][0], face[i][1], z);
	}
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 26; i++) {
		glVertex3f(face[i][0], face[i][1], z);
	}
	glEnd();

	//neck
	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.8588f, 0.6475f);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 10; i++) {
		glVertex3f(neck[i][0], neck[i][1], z);
	}
	glEnd();


	//*COLLOR

	glBegin(GL_POLYGON);
	//glColor3f(0.8f, 0.6f, 0.17f);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 10; ++i)
		glVertex2f(collarRight[i][0] / 10, collarRight[i][1] / 10);
	glEnd();

	glBegin(GL_POLYGON);
	for (i = 0; i < 10; ++i)
		glVertex2f(collarLeft[i][0] / 10, collarLeft[i][1] / 10);
	glEnd();



	//END



	glBegin(GL_POLYGON);
	glColor3f(0.172f, 0.24f, 0.313f);
	for (i = 0; i < 33; ++i)
	{
		glVertex2f(midPart[i][0] / 10, midPart[i][1] / 10);
	}
	glEnd();



	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-1.1281f / 10, -0.6f / 10);
	glVertex2f(-1.146f / 10, -0.5228f / 10);
	glVertex2f(-1.153f / 10, -0.4513f / 10);
	glVertex2f(-1.145f / 10, -0.4f / 10);
	glEnd();

	// line 2
	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.0599f / 10, -0.6724f / 10);
	glVertex2f(-1.079f / 10, -0.5854f / 10);
	glVertex2f(-1.0838f / 10, -0.5162f / 10);
	glVertex2f(-1.0683f / 10, -0.4337f / 10);
	glEnd();
	// line 3
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.966f / 10, -0.697f / 10);
	glVertex2f(-0.988f / 10, -0.614f / 10);
	glVertex2f(-0.991f / 10, -0.5480f / 10);
	glVertex2f(-0.979f / 10, -0.474f / 10);
	glEnd();

	//starting of hand
	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 11; ++i)
	{
		glVertex2f(arm[i][0] / 10, arm[i][1] / 10);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 11; ++i)
	{
		glVertex2f(Palm[i][0] / 10, Palm[i][1] / 10);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 19; ++i)
	{
		glVertex2f(PalmHalf[i][0] / 10, PalmHalf[i][1] / 10);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 25; ++i)
	{
		glVertex2f(PalmFingers[i][0] / 10, PalmFingers[i][1] / 10);
	}
	glEnd();


	//left hand
	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	glVertex2f(1.125f / 10, 2.0f / 10);
	glVertex2f(1.1f / 10, 1.5f / 10);
	glVertex2f(1.06f / 10, 1.0f / 10);
	glVertex2f(1.1f / 10, 0.5f / 10);
	glVertex2f(1.15f / 10, 0.36f / 10);
	glVertex2f(1.4f / 10, 0.36f / 10);
	glVertex2f(1.4f / 10, 0.75f / 10);
	glVertex2f(1.3f / 10, 1.6f / 10);
	glVertex2f(1.33f / 10, 2.2f / 10);
	glVertex2f(1.125f / 10, 2.0f / 10);
	glEnd();

	// line 1
	//glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(0.34f / 10, 0.39f / 10, 0.0f);
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	//glScalef(0.9f, 0.9f, 0.9f);
	glColor3f(0.961f, 0.741f, 0.557f);

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 11; ++i)
	{
		glVertex2f(Palm[i][0] / 10, Palm[i][1] / 10);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 19; ++i)
	{
		glVertex2f(PalmHalf[i][0] / 10, PalmHalf[i][1] / 10);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 25; ++i)
	{
		glVertex2f(PalmFingers[i][0] / 10, PalmFingers[i][1] / 10);
	}
	glEnd();

	glPopMatrix();

	glBegin(GL_POLYGON);
	glColor3f(0.80f, 0.466f, 0.133f);
	for (i = 0; i < 9; i++)
	{
		glVertex2f(pataka[i][0], pataka[i][1]);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(0.041f, 0.175f);
	glVertex2f(0.035f, -0.211f);
	glVertex2f(0.023f, -0.245f);
	glVertex2f(0.010f, -0.267f);
	glEnd();


	glBegin(GL_LINE_STRIP);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(0.028f, 0.175f);
	glVertex2f(0.021f, -0.211f);
	glVertex2f(0.014f, -0.245f);
	glVertex2f(0.009f, -0.273f);
	glEnd();

	glColor3f(0.5f, 0.5f, 0.5f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.115f, -0.180f);
	glVertex2f(-0.085f, -0.281f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0.140f, -0.175f);
	glVertex2f(0.120, -0.214f);
	glVertex2f(0.090, -0.259f);
	glEnd();

	// dhoti
	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.8588f, 0.6475f);
	glColor3f(0.59f, 0.59f, 0.59f);
	for (i = 0; i < 45; i++) {
		glVertex3f(dhoti[i][0] / 10, dhoti[i][1] / 10, z);
	}
	glEnd();


	//LEGS DETAILING (Fingers of left leg)
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1218f, -0.4450f, 0.0f);
	glVertex3f(0.1390f, -0.4599f, 0.0f);
	glVertex3f(0.1399f, -0.4700f, 0.0f);
	glVertex3f(0.1360f, -0.4840f, 0.0f);
	glVertex3f(0.1320f, -0.4830f, 0.0f);
	glEnd();



	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1279f, -0.4399f, 0.0f);
	glVertex3f(0.1505f, -0.4609f, 0.0f);
	glVertex3f(0.1485f, -0.4749f, 0.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1399f, -0.4380f, 0.0f);
	glVertex3f(0.1575f, -0.4499f, 0.0f);
	glEnd();



	//Leg Detailing Right leg fingers
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0069f, -0.4670f, 0.0f);
	glVertex3f(0.0045f, -0.4800f, 0.0f);
	glVertex3f(0.0055f, -0.4999f, 0.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0160f, -0.4740f, 0.0f);
	glVertex3f(-0.0089f, -0.4800f, 0.0f);
	glVertex3f(-0.0089f, -0.4990f, 0.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0270f, -0.4780f, 0.0f);
	glVertex3f(-0.0195f, -0.4850f, 0.0f);
	glVertex3f(-0.0199f, -0.4990f, 0.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0390f, -0.4799f, 0.0f);
	glVertex3f(-0.0315f, -0.4870f, 0.0f);
	glVertex3f(-0.0319f, -0.4990f, 0.0f);
	glEnd();

	//LEGS DETAILING END

	// LEGS
	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.8588f, 0.6475f);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 14; i++) {
		glVertex3f(leftLeg[i][0] / 10, leftLeg[i][1] / 10, z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.8588f, 0.6475f);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 16; i++) {
		glVertex3f(rightLeg[i][0] / 10, rightLeg[i][1] / 10, z);
	}
	glEnd();


}

static void DrawFace() {
	float hairs[18][2]{
		{0.0f, 9.5f},
		{1.0f, 9.625f},	// patka head start point
		{0.625f, 9.780f},
		{0.5f, 9.8125f},
		{0.0625f, 9.8125f},
		{0.0f, 9.75f},
		{-0.125f, 9.75f},
		{-0.28f, 9.625f},
		{-0.3325f, 9.5525f},
		{-0.625f, 9.53f},
		{-0.875f, 9.3125f},
		{-1.0625f, 9.0f},
		{-1.0625f, 8.8125f}, //Patka head end point
		{-0.3125f, 9.25f},
		{0.125f, 9.4175f},
		{0.5f, 9.5f},
		{0.625f, 9.5625f},
		{ 1.0f, 9.625f },
	};
	float patka[24][2] = {
		{1.75f, 9.25f},
		{-1.0625f, 8.8125f}, //Patka head end point
		{-0.3125f, 9.25f},
		{0.125f, 9.4175f},
		{0.5f, 9.5f},
		{0.625f, 9.5625f},
		{1.0f, 9.625f},	// patka head start point
		{1.875f, 9.625f},
		{1.9275f, 9.5f},
		{2.0f, 9.25f},
		{2.0625f, 9.0f},
		{2.10f, 8.75f},
		{2.0625f, 8.625f},
		{2.0f, 8.48f},
		{1.875f, 8.375f},
		{1.78f, 8.4375f},
		{1.75f, 8.5625f},
		{1.625f, 8.655f},
		{1.0f, 8.625f},
		{0.0f, 8.3325f},
		{-1.0f, 7.897f},
		{-1.0625f, 8.125f},
		{-1.3125f, 8.5675f},
		{-1.0625f, 8.8125f}
	};

	float face[37][2] = {
		{1.0f, 6.375f},
		{1.78f, 8.4375f},
		{1.78f, 8.0f},
		{1.76f, 8.03f}, //eye start
		{1.75f, 7.8125f}, //eye end
		{1.75f, 7.625f},
		{1.8125f, 7.5f},
		{1.98f, 7.25f}, //nose tip
		{1.95f, 7.22f},
		{1.92f, 7.1875f},
		{1.6875f, 7.1870f},
		{1.64f, 6.9275f},
		{1.6275f, 6.875f}, //lips end upper
		{1.5625f, 6.79f},
		{1.5f, 6.625f},
		{1.46f, 6.5675f},
		{1.35f, 6.4375f},
		{1.125f, 6.3125f},
		{1.0f, 6.25f},
		{0.6875f, 6.25f},
		{0.125f, 6.5f},
		{-0.1875f, 6.75f},
		{0.125f, 6.6875f},
		{0.125f, 7.0f},
		{0.25f, 7.125f}, //hircut end face layout boundary 1
		{0.5f, 7.1875f}, //point 2 kalla
		{0.625f, 7.25f}, //point 3
		{0.4125f, 8.0f}, // point 4 need to use these points for haircut kalla
		{0.4325f, 8.125f},
		{0.4125f, 8.23f},
		{0.645f, 8.25f},
		{0.625f, 8.375f},
		{0.5675f, 8.5675f},
		{1.0f, 8.625f},
		{1.625f, 8.655f},
		{1.75f, 8.5625f},
		{1.78f, 8.4375f}
	};

	float facePatch[10][2] = {
		{0.375f, 7.25f},
		{0.25f, 7.125f}, //hircut end face layout boundary 1
		{0.5f, 7.1875f}, //point 2 kalla
		{0.4825f, 7.375f},
		{0.40f, 7.5625f},
		{0.3125f, 7.345f},
		{ 0.125f, 7.345f },
		{ 0.0f, 7.375f },
		{0.25f, 7.125f},
		{0.375f, 7.25f}
	};




	float ear[13][2] = {
		{0.40f, 7.5625f},
		{0.3125f, 7.345f},
		{0.125f, 7.345f},
		{0.0625f, 7.375f},
		{-0.125f, 7.625f},
		{-0.1825f, 7.875f},
		{-0.17f, 8.125f},
		{0.0f, 8.26f},
		{0.21f, 8.26f},
		{0.25f, 8.25f},
		{0.3125f, 8.125f},
		{0.3725f, 8.0f},
		{0.4325f, 7.5f}
	};

	float haircut1[15][2] = {
		{0.375f, 8.125f},
		{0.5f, 7.1875f}, //point 2 kalla
		{0.625f, 7.25f}, //point 3
		{0.4125f, 8.0f}, // point 4 need to use these points for haircut kalla
		{0.4325f, 8.125f},
		{0.4125f, 8.23f},
		{0.645f, 8.25f},
		{0.625f, 8.375f},
		{0.5675f, 8.5675f},
		{0.25f, 8.4375f}, //boundary above ear
		{0.25f, 8.25f}, //boundary above ear
		{0.3125f, 8.125f},
		{0.3725f, 8.0f},
		{0.4325f, 7.5f},
		{0.5f, 7.1875f}
	};

	float haircut2[5][2] = {
		{0.0f, 8.3125f},
		{0.25f, 8.4375f}, //boundary above ear
		{0.25f, 8.25f}, //boundary above ear
		{-0.1825f, 8.125f},
		{-0.1825f, 8.25f}
	};


	float haircut3[19][2] = {
		{-0.5f, 7.625f},
		{-0.1825f, 8.125f},
		{-0.1825f, 8.25f},
		{-1.0625f, 8.8125f},
		{-1.0625f, 9.0f},
		{-1.0625f, 7.75f},
		{-0.875f, 7.5f},
		{-0.625f, 7.125f},
		{-0.3125f, 6.875f},
		{-0.1875f, 6.75f},
		{0.125f, 6.6875f},
		{0.125f, 7.0f},
		{0.25f, 7.125f},
		{0.0625f, 7.375f}, //ear
		{-0.125f, 7.625f}, //ear
		{-0.1875f, 7.875f}, //ear
		{-0.1870f, 8.0f}, //ear
		{-0.15f, 8.125f} ,//ear
		{ -0.1825f, 8.125f }
	};

	float eyebrow[10][2] = {
		{1.375f, 8.1875f},
		{1.8125f, 8.15},
		{1.8125f, 8.27f},
		{1.5f, 8.27f},
		{1.45f, 8.25f},
		{1.375f, 8.22f},
		{1.25f, 8.125f},
		{1.375f, 8.142},
		{ 1.45f, 8.15f },
		{1.8125f, 8.27f}
	};

	float eyeOutLine[10][2] = {
		{1.75f, 7.8125f}, //eye end
		{1.80f, 7.9275f},
		{1.76f, 8.03f}, //eye start
		{1.75f, 8.0625f},
		{1.5675f, 8.0625f},
		{1.4375f, 8.0f},
		{1.375f, 7.9275f},
		{1.4375f, 7.895f},
		{1.375f, 7.875f},
		{1.5625f, 7.845f}
	};

	float eyeBall[5][2] = {
		{1.75f, 7.7925f}, //eye end
		{1.80f, 7.9275f},
		{1.76f, 8.06f}, //eye start
		{1.67f, 8.0f},
		{1.67f, 7.875f}
	};

	float nose[11][2] = {
		{1.98f, 7.25f },
		{ 1.95f, 7.22f },
		{1.92f, 7.1875f },
		{1.75f, 7.1772f },
		{1.6875f, 7.22f },
		{1.6875f, 7.19f },
		{1.625f, 7.1875f },
		{1.5625f, 7.1800f },
		{1.5325f, 7.22f },
		{1.5225f, 7.28f },
		{ 1.5625f, 7.28f }
	};

	float moustache[14][2] = {
		{1.4375f, 7.0f},
		{1.64f, 6.9575f},
		{1.66f, 7.0625f},
		{1.5625f, 7.125f},
		{1.5f, 7.125f},
		{1.375f, 7.0f},
		{1.3225f, 6.875f},
		{1.3225f, 6.78f},
		{1.2825f, 6.78f},
		{1.26f, 6.665f},
		{1.375f, 6.72f},
		{1.4325f, 6.875f},
		{1.5f, 6.9275f},
		{1.64f, 6.9575f}
	};

	float moustache2[8][2] = {
		{ 1.26f, 6.665f },
		{ 1.23f, 6.625f},
		{ 1.15f, 6.65},
		{1.125f, 6.6875f},
		{1.134f, 6.81f},
		{1.16f, 6.83f},
		{1.25f, 6.83f},
		{1.375f, 6.75f}
	};

	float lips[7][2] = {
		{1.6275f, 6.875f}, //lips end upper
		{1.64f, 6.8875f},
		{1.64f, 6.95f},
		{1.56f, 6.975f},
		{1.5f, 6.9275f},
		{1.4375f, 6.875f},
		{1.5f, 6.84f}
	};

	float neck[4][2] = {
		{0.625f, 6.5f},
		{-0.4125f, 7.0f},
		{-0.4125f, 6.56f},
		{ 0.50f, 6.2f },
	};

	float z = 0.0f;
	int i;
	glTranslatef(1.0f, 1.0f, -20.0f);
	//glScalef(0.5f, 0.f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 18; i++) {
		glVertex3f(hairs[i][0], hairs[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.0f, 0.0f);
	glColor3f(0.80f, 0.466f, 0.133f);
	for (i = 0; i < 24; i++) {
		glVertex3f(patka[i][0], patka[i][1], z);
	}
	glEnd();


	//FACE INTERNAL
	glLineWidth(2.0f);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.375f, 7.5f, z);
	glVertex3f(1.25f, 7.75f, z);
	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 5; i++) {
		glVertex3f(eyeBall[i][0], eyeBall[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.77f, 0.77f, 0.77f);
	for (i = 0; i < 10; i++) {
		glVertex3f(eyeOutLine[i][0], eyeOutLine[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 10; i++) {
		glVertex3f(eyebrow[i][0], eyebrow[i][1], z);
	}
	glEnd();

	//ear
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 13; i++) {
		glVertex3f(ear[i][0], ear[i][1], z);
	}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 13; i++) {
		glVertex3f(ear[i][0], ear[i][1], z);
	}
	glEnd();

	//Nose
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 11; i++) {
		glVertex3f(nose[i][0], nose[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.55f, 0.55f, 0.88f);
	for (i = 0; i < 7; i++) {
		glVertex3f(lips[i][0], lips[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 14; i++) {
		glVertex3f(moustache[i][0], moustache[i][1], z);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 8; i++) {
		glVertex3f(moustache2[i][0], moustache2[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 10; i++) {
		glVertex3f(facePatch[i][0], facePatch[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 37; i++) {
		glVertex3f(face[i][0], face[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 14; i++) {
		glVertex3f(haircut1[i][0], haircut1[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 5; i++) {
		glVertex3f(haircut2[i][0], haircut2[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 19; i++) {
		glVertex3f(haircut3[i][0], haircut3[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 4; i++) {
		glVertex3f(neck[i][0], neck[i][1], z);
	}
	glEnd();



}

static void drawSideShirt(void)
{
	float shirt[24][2] =
	{
		{0.0f, 2.0f},
		{-0.5f, 6.36f},
		{-0.75f, 6.25f},
		{-0.88f, 6.12f},
		{-1.0f, 6.0f},
		{-1.25f, 5.88f},
		{-1.36f, 5.63f},
		{-1.55f, 5.25f},
		{-1.63f, 5.0f},
		{-1.88f, -0.36f},
		{-1.5f, -0.63f},
		{-1.12f, -0.88f},
		{-0.88f, -1.0f},
		{-0.5f, -1.1f},
		{-0.125f, -1.12f},
		{0.75f, -0.80f},
		{1.75f, -0.25f},
		{1.75, 1.63},
		{1.63f, 4.25f},
		{1.25f, 5.63f},
		{0.88f, 6.0f},
		{1.0f, 5.5f},
		{-0.5f, 6.36f},
		{-0.5f, 6.36f}
	};

	float sideCollar[7][2] = {
		{-0.5f, 6.62f},
		{-0.62f, 6.5f},
		{-0.65f, 6.45f},
		{-0.62f, 6.36f},
		{1.0f, 5.5f},
		{0.9f, 6.12f},
		{-0.5f, 6.62f}
	};

	glColor3f(0.769f, 0.596f, 0.169f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 24; ++i)
		glVertex2f(shirt[i][0], shirt[i][1]);
	glEnd();

	glColor3f(0.6f, 0.5f, 0.1f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 7; ++i)
		glVertex2f(sideCollar[i][0], sideCollar[i][1]);
	glEnd();
}

static void drawSideArm(void)
{
	float forarm[][2] = {
		{-1.14f, 2.65f},
		{-1.0f, 1.36f},
		{-0.75f, 0.0f},
		{0.1f, 0.0f},
		{0.12f, 1.0f},
		{0.06f, 2.0f},
		{0.1f, 2.5f},
		{-1.14f, 2.65f}
	};

	float sidePalmFingers[][2] = {
		{-0.25f, -0.25f},
		{-0.25f, 0.0f},
		{-0.75f, 0.0f},
		{-0.84f, -1.0f},
		{-0.75f, -1.36f},
		{-0.63f, -1.5f},
		{-0.6f, -1.63f},
		{-0.36f, -1.75f},
		{-0.25f, -1.75f},
		{0.0f, -1.83f},
		{-0.05f, -1.36f},
		{-0.02f, -1.0f},
		{0.0f, -0.63f},
		{0.1f, -1.0f},
		{0.25f, -1.125f},
		{0.36f, -1.15f},
		{0.5f, -1.125f},
		{0.18f, -0.5f},
		{0.22f, -0.25f},
		{0.1f, -0.05f},
		{0.1f, 0.0f},
		{-0.25f, 0.0f}
	};


	// LEFT HAND
	// index finger line
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.18f, -1.75f);
	glVertex2f(-0.24f, -1.2f);
	glVertex2f(-0.18f, -0.8f);
	glEnd();

	// middle finger line
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.36f, -1.75f);
	glVertex2f(-0.43f, -1.2f);
	glVertex2f(-0.36f, -0.75f);
	glEnd();

	// ring finger line
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.57f, -1.65f);
	glVertex2f(-0.63f, -1.1f);
	glVertex2f(-0.58f, -0.73f);
	glEnd();

	// forarm
	glColor3f(0.5529f, 0.333f, 0.141f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(forarm) / sizeof(forarm[0]); ++i)
		glVertex2f(forarm[i][0], forarm[i][1]);
	glEnd();

	// palm and fingers area
	glColor3f(0.5529f, 0.333f, 0.141f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(sidePalmFingers) / sizeof(sidePalmFingers[0]); ++i)
		glVertex2f(sidePalmFingers[i][0], sidePalmFingers[i][1]);
	glEnd();

	//// RIGHT HAND
	//glPushMatrix();
	//glTranslatef(0.6f, 0.2f, -0.1f);
	//glScalef(0.95f, 0.95f, 0.0f);
	//// index finger line
	//glColor3f(0.0f, 0.0f, 0.0f);
	//glBegin(GL_LINE_STRIP);
	//glVertex2f(-0.18f, -1.75f);
	//glVertex2f(-0.24f, -1.2f);
	//glVertex2f(-0.18f, -0.8f);
	//glEnd();

	//// middle finger line
	//glBegin(GL_LINE_STRIP);
	//glVertex2f(-0.36f, -1.75f);
	//glVertex2f(-0.43f, -1.2f);
	//glVertex2f(-0.36f, -0.75f);
	//glEnd();

	//// ring finger line
	//glBegin(GL_LINE_STRIP);
	//glVertex2f(-0.57f, -1.65f);
	//glVertex2f(-0.63f, -1.1f);
	//glVertex2f(-0.58f, -0.73f);
	//glEnd();

	//// forarm
	//glColor3f(0.961f, 0.741f, 0.557f);
	//glBegin(GL_POLYGON);
	//for (int i = 0; i < sizeof(forarm) / sizeof(forarm[0]); ++i)
	//	glVertex2f(forarm[i][0], forarm[i][1]);
	//glEnd();

	//// palm and fingers area
	//glColor3f(0.961f, 0.741f, 0.557f);
	//glBegin(GL_POLYGON);
	//for (int i = 0; i < sizeof(sidePalmFingers) / sizeof(sidePalmFingers[0]); ++i)
	//	glVertex2f(sidePalmFingers[i][0], sidePalmFingers[i][1]);
	//glEnd();

	//glPopMatrix();
}

static void drawShoulder() {
	float shoulderShirtPart[][2] = {
		{-0.5f, 5.63f},
		{-0.9f, 5.6f},
		{-1.05f, 5.5f},
		{-1.18f, 4.63f},
		{-1.25f, 3.75f},
		{-1.12f, 3.65f},
		{-0.88f, 3.63f},
		{-0.5f, 3.6f},
		{0.0f, 3.65f},
		{0.36f, 3.75f},
		{0.25f, 4.75f},
		{0.1f, 5.5f},
		{-0.1f, 5.6f},
		{-0.5f, 5.63f}
	};

	float shoulderHandPart[][2] = {
		{-1.12f, 3.7f},
		{-1.14f, 2.65f},
		{0.1f, 2.5f},
		{0.2f, 3.7f},
		{0.0f, 3.0f},
		{-0.5f, 3.6f},
	};

	glColor3f(0.6f, 0.5f, 0.1f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(shoulderShirtPart) / sizeof(shoulderShirtPart[0]); ++i)
		glVertex2f(shoulderShirtPart[i][0], shoulderShirtPart[i][1]);
	glEnd();

	glColor3f(0.5529f, 0.333f, 0.141f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(shoulderHandPart) / sizeof(shoulderHandPart[0]); ++i)
		glVertex2f(shoulderHandPart[i][0], shoulderHandPart[i][1]);
	glEnd();
}

static void drawLeftPant(void)
{
	float leftpant[][2] = {
		{0.20f, -2.2f},
		{0.00f, 0.00f},
		{1.69f, -0.3f},
		{1.70f, -2.69f},
		{1.60f, -2.69f},
		{1.50f, -3.96f},
		{1.20f, -4.90f},
		{-0.5f, -4.69f},
		{-1.0f, -3.96f},
		{-1.39f, -2.85f},
		{-1.79f, -1.50f},
		{-1.89f, -0.3f},
		{0.00f, 0.00f}
	};

	glColor3f(0.7f, 0.7f, 0.7f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.00f, 0.00f);
	glVertex2f(1.69f, -0.3f);
	glVertex2f(1.70f, -2.69f);
	glVertex2f(1.60f, -2.69f);
	glVertex2f(1.50f, -3.96f);
	glVertex2f(1.20f, -4.90f);
	glVertex2f(-0.5f, -4.69f);
	glVertex2f(-1.0f, -3.96f);
	glVertex2f(-1.39f, -2.85f);
	glVertex2f(-1.79f, -1.50f);
	glVertex2f(-1.89f, -0.3f);
	glVertex2f(0.00f, 0.00f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.70f, -2.69f);
	glVertex2f(1.30f, -2.59f);
	glVertex2f(1.30f, -2.69f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < (sizeof(leftpant) / sizeof(leftpant[0])); ++i)
		glVertex2f(leftpant[i][0], leftpant[i][1]);
	glEnd();

}

static void drawLeftLeg()
{
	float leftleg[][2] = {
	{0.4f, -7.55f},
	{0.4f, -4.65f},
	{1.20f, -4.90f},
	{1.10f, -5.90f},
	{1.00f, -6.90f},
	{0.99f, -7.31f},
	{2.29f, -7.99f},
	{2.49f, -7.78f},
	{2.49f, -8.29f},
	{2.29f, -8.39f},
	{0.90f, -8.18f},
	{0.50f, -8.23f},
	{0.18f, -8.22f},
	{0.08f, -8.12f},
	{0.00f, -8.05f},
	{-0.02f, -7.69f},
	{0.12f, -7.19f},
	{0.02f, -6.90f},
	{-0.3f, -5.09f},
	{-0.4f, -4.69f},
	{ 0.4f, -4.65f }
	};

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -7.95f);
	glVertex2f(2.51f, -8.05f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -7.85f);
	glVertex2f(2.51f, -7.95f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -7.77f);
	glVertex2f(2.51f, -7.86f);
	glEnd();

	glColor3f(0.5529f, 0.333f, 0.141f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < (sizeof(leftleg) / sizeof(leftleg[0])); ++i)
		glVertex2f(leftleg[i][0], leftleg[i][1]);
	glEnd();

}

static void drawRightPant()
{
	float rightpant[][2] = {
	{0.20f, -2.2f},
	{0.00f, 0.00f},
	{1.69f, -0.3f},
	{1.70f, -2.69f},
	{1.50f, -3.96f},
	{1.20f, -4.90f},
	{-0.5f, -4.69f},
	{-1.0f, -3.96f},
	{-1.39f, -2.85f},
	{-1.79f, -1.50f},
	{-1.89f, -0.3f},
	{0.00f, 0.00f}
	};

	glColor3f(0.7f, 0.7f, 0.7f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.00f, 0.00f);
	glVertex2f(1.69f, -0.3f);
	glVertex2f(1.70f, -2.69f);
	glVertex2f(1.50f, -3.96f);
	glVertex2f(1.20f, -4.90f);
	glVertex2f(-0.5f, -4.69f);
	glVertex2f(-1.0f, -3.96f);
	glVertex2f(-1.39f, -2.85f);
	glVertex2f(-1.79f, -1.50f);
	glVertex2f(-1.89f, -0.3f);
	glVertex2f(0.00f, 0.00f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.79f, -1.50f);
	glVertex2f(-1.19f, -1.62f);
	glVertex2f(-0.79f, -1.59f);
	glVertex2f(-0.69f, -1.54f);
	glVertex2f(-0.09f, -1.37f);
	glVertex2f(1.09f, -0.93f);
	glVertex2f(1.69f, -0.32f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.18f, -3.51f);
	glVertex2f(-0.58f, -3.61f);
	glVertex2f(0.38f, -3.51f);
	glVertex2f(0.58f, -3.20f);
	glVertex2f(0.79f, -2.98f);
	glVertex2f(0.98f, -2.58f);
	glVertex2f(1.08f, -2.08f);
	glVertex2f(1.28f, -1.57f);
	glVertex2f(1.68f, -0.31f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.19f, -3.52f);
	glVertex2f(-0.59f, -3.62f);
	glVertex2f(0.39f, -3.52f);
	glVertex2f(0.59f, -3.21f);
	glVertex2f(0.78f, -2.99f);
	glVertex2f(0.99f, -2.59f);
	glVertex2f(1.09f, -2.09f);
	glVertex2f(1.29f, -1.58f);
	glVertex2f(1.69f, -0.32f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.0f, -3.96f);
	glVertex2f(-0.90f, -4.09f);
	glVertex2f(-0.70f, -4.13f);
	glVertex2f(-0.40f, -4.09f);
	glVertex2f(-0.09f, -4.05f);
	glVertex2f(0.69f, -3.72f);
	glVertex2f(0.84f, -3.41f);
	glVertex2f(1.04f, -3.09f);
	glVertex2f(1.11f, -2.59f);
	glVertex2f(1.31f, -2.09f);
	glVertex2f(1.51f, -1.40f);
	glVertex2f(1.79f, -0.32f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < (sizeof(rightpant) / sizeof(rightpant[0])); ++i)
		glVertex2f(rightpant[i][0], rightpant[i][1]);
	glEnd();

}

static void drawRightLeg()
{
	float rightleg[][2] = {
	{0.4f, -7.55f},
	{0.4f, -4.65f},
	{1.20f, -4.90f},
	{1.10f, -5.90f},
	{1.00f, -6.90f},
	{0.99f, -7.31f},
	{0.99f, -7.41f},
	{2.29f, -7.99f},
	{2.49f, -7.78f},
	{2.49f, -8.29f},
	{2.29f, -8.39f},
	{0.90f, -8.18f},
	{0.50f, -8.23f},
	{0.18f, -8.22f},
	{0.08f, -8.12f},
	{0.00f, -8.05f},
	{-0.02f, -7.69f},
	{0.12f, -7.19f},
	{0.02f, -6.90f},
	{-0.3f, -5.09f},
	{-0.4f, -4.69f},
	{ 0.4f, -4.65f }
	};

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -7.87f);
	glVertex2f(2.50f, -7.95f);
	glVertex2f(1.90f, -7.86f);
	glVertex2f(2.49f, -7.94f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -7.95f);
	glVertex2f(2.50f, -8.03f);
	glVertex2f(1.90f, -7.94f);
	glVertex2f(2.49f, -8.02f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -8.02f);
	glVertex2f(2.49f, -8.10f);
	glVertex2f(1.90f, -8.01f);
	glVertex2f(2.48f, -8.09f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(1.91f, -8.08f);
	glVertex2f(2.49f, -8.16f);
	glVertex2f(1.90f, -8.07f);
	glVertex2f(2.48f, -8.15f);
	glEnd();

	glColor3f(0.5529f, 0.333f, 0.141f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < (sizeof(rightleg) / sizeof(rightleg[0])); ++i)
		glVertex2f(rightleg[i][0], rightleg[i][1]);
	glEnd();


}

void DrawHunter_SideView() {
	DrawFace();
	drawSideArm();
	drawShoulder();
	drawSideShirt();
	drawRightPant();
	drawRightLeg();
	glRotatef(-30.0f, 1.0f, 1.0f, 0.0f);
	drawLeftPant();
	drawLeftLeg();
	
}


/************************************************SIDEVIEW END********************************************/

void DrawManSitting()
{
	drawFaceSitting();
	drawDhotiSitting();
	drawShirtSitting();
}

static void drawFaceSitting()
{
	float z = 0.0f;
	int i;
	float neck[10][2] = {
		{0.03125f, 0.3375f},
		{0.01875f, 0.33125f},
		{0.0125f, 0.334f},
		{-0.00625f, 0.3375f},
		{-0.028f, 0.345f},
		{-0.025f, 0.33125f},
		{-0.01875f, 0.325f},
		{-0.00625f, 0.3125f},
		{0.0222f, 0.2905f},
		{0.028f, 0.30625f},
		//{0.03125f, 0.3125f}
	};

	float rightHairCut[7][2] = {
		{-0.04375f, 0.4375f},
		{-0.05f, 0.41875f},
		{-0.04375f, 0.4f},
		{-0.05f, 0.4f},
		{-0.052f, 0.41875f},
		{-0.0625f, 0.425f},
		{-0.0625f, 0.43125f}
	};

	float leftHairCut[5][2] = {
		{0.05f, 0.4593f},
		{0.05625f, 0.4375f},
		{0.05625f, 0.43125f},
		{0.05624f, 0.4375f},
		{0.0625f, 0.44375f}
	};

	//left is actual left of hunter
	float leftEyebrow[9][2] = {
		{0.025f, 0.4370f},
		{0.025f, 0.4340f},
		{0.0375f, 0.4335f},
		{0.04375f, 0.4358f},
		{0.050f, 0.4340f},
		{0.050f, 0.4360f},
		{0.04375f, 0.4375f},
		{0.0375f, 0.4375f},
		{0.03125f, 0.4370f}
	};

	float rightEyebrow[8][2] = {
		{0.0120f, 0.4370f},
		{0.0120f, 0.4340f},
		{0.0f, 0.4355f},
		{-0.0125f, 0.4360f},
		{-0.025f, 0.43315f},
		{-0.025f, 0.43375f},
		{-0.0125f, 0.4375f},
		{0.0f, 0.4370f}
	};

	float lips[6][2] = {
		{0.0375f, 0.3630f},
		{0.025f, 0.3625f},
		{0.0125f, 0.3630f},
		{0.01875f, 0.3655f},
		{0.025f, 0.36875f},
		{0.03125f, 0.3655f}
	};

	float nose[4][2] = {
		{0.025f, 0.4120f},
		{0.029f, 0.38125f},
		{0.026f, 0.3785f},
		{0.0160f, 0.38125f}
	};

	float face[26][2] = {
		{-0.0625f,0.43125f},
		{-0.0375f,0.45625f},
		{0.0f,0.450f},
		{0.0375f,0.45625f},
		{0.05f,0.4593f},
		{0.0625f,0.44375f},
		{0.074f,0.4375f},
		{0.074f,0.4250f},
		{0.06875f,0.4125f},
		{0.0625f,0.4090f},
		{0.05625f,0.4200f},
		{0.05800f,0.375f},
		{0.05f,0.3625f},
		{0.0375f,0.34375f},
		{0.03125f,0.3375f},
		{0.01875f,0.33125f},
		{0.0125f,0.334f},
		{-0.00625f,0.3375f},
		{-0.028f,0.345f},
		{-0.04375f,0.375f},
		{-0.05f,0.39375f},
		{-0.05625f,0.3875f},
		{-0.06875f,0.4f},
		{-0.074f,0.4125f},
		{-0.06875f,0.4210f},
		{-0.05f,0.425f}
	};


	float moustache[22][2] = {
		{0.05325f, 0.3625},
		{0.05425f, 0.3592f},
		{0.05625f, 0.35625f},
		{0.05323f, 0.35312f},
		{0.05f, 0.351f},
		{0.04375f, 0.35625f},
		{0.04025f, 0.3625f},
		{0.0395f, 0.36875f},
		{0.0375f, 0.370f},
		{0.03125f, 0.370f},
		{0.025f, 0.371f},
		{0.025f, 0.375f},
		{0.03125f, 0.375f},
		{0.0375f, 0.3770f},
		{0.04475f, 0.36875f},
		{0.0472f, 0.3625f},
		{0.0475f, 0.35625f},
		{0.05f, 0.352f},
		{0.05325f, 0.35312f},
		{0.05623f, 0.3625f},
		{0.05628f, 0.3532f},
		{0.05325f, 0.3624f}
	};



	float rightEyeBall[11][2] = {
		{0.0125f, 0.41575f},
		{0.0f, 0.41475f},
		{-0.0125f, 0.41175f},
		{-0.01675f, 0.41475f},
		{-0.01475f, 0.41875f},
		{-0.00925f, 0.4275},
		{-0.00625f, 0.4280f},
		{0.00325f, 0.4280f},
		{0.00625f, 0.4250f},
		{0.0125f, 0.41975},
		{0.0126f, 0.41875f}
	};

	float leftEyeBall[11][2] = {
		{0.053f, 0.4158f},
		{0.05f, 0.414f},
		{0.0375f, 0.414f},
		{0.028f, 0.415f},
		{0.0295f, 0.41875f},
		{0.0300f, 0.42075f},
		{0.03125f, 0.4250f},
		{0.0375f, 0.4280f},
		{0.04375f, 0.4280f},
		{0.05f, 0.4250f},
		{0.053f, 0.4210f}
	};

	float collarRight[10][2] = {
		{-0.35f, 3.25f},
		{-0.25f, 2.9f},
		{-0.125f, 3.0f},
		{0.0f, 3.0f},
		{0.25f, 2.9f},
		{-0.1f, 3.23f},
		{-0.15f, 3.36f},
		{-0.18f, 3.5f},
		{-0.2f, 3.5f},
		{-0.3f, 3.6f},
	};

	float collarLeft[10][2] = {
		{0.36f, 3.48f},
		{0.28f, 3.36f},
		{0.3f, 3.25f},
		{0.27f, 3.12f},
		{0.25f, 2.9f},
		{0.3f, 3.0f},
		{0.42f, 3.1f},
		{0.68f, 3.0f},
		//{0.6f, 2.92f},
		{0.58f, 3.25f},
		{0.5f, 3.5f}
	};

	float head[9][2] = {
		{0.0375f, 0.5f},
		{0.0125f, 0.5125f},
		{0.0f, 0.505f},
		{-0.0125f, 0.5100f},
		{-0.0375f, 0.5f},
		{-0.05625f, 0.4875f},
		{-0.0630f, 0.46875f},
		{-0.025f, 0.4875f},
		{0.0f, 0.49375f}
	};

	float patka[14][2] = {
		{0.072f, 0.4625f},
		{0.06875f, 0.5f},
		{0.0375f, 0.5f},
		{0.0f, 0.505f},
		{-0.0250f, 0.4875f},
		{-0.0630, 0.46875f},
		{-0.0780f, 0.4625f},
		{-0.0625f, 0.43125f},
		{-0.0375, 0.45625f},
		{0.0f, 0.450f},
		{0.0375f, 0.45625f},
		{0.05f, 0.4593f},
		{0.0625f, 0.44375f},
		{0.074, 0.4593f}
	};

	glPushMatrix();

	glScalef(10.0f, 10.0f, 10.0f);
	glTranslatef(-0.023f, -0.11f, 0.0f);
	//head
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 9; i++) {
		glVertex3f(head[i][0], head[i][1], z);
	}
	glEnd();

	//patka
	glBegin(GL_POLYGON);
	glColor3f(0.80f, 0.466f, 0.133f);
	for (i = 0; i < 14; i++) {
		glVertex3f(patka[i][0], patka[i][1], z);
	}
	glEnd();

	//hairs
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 7; i++) {
		glVertex3f(rightHairCut[i][0], rightHairCut[i][1], z);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 5; i++) {
		glVertex3f(leftHairCut[i][0], leftHairCut[i][1], z);
	}
	glEnd();

	//Eyebrow
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 9; i++) {
		glVertex3f(leftEyebrow[i][0], leftEyebrow[i][1], z);
	}
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 8; i++) {
		glVertex3f(rightEyebrow[i][0], rightEyebrow[i][1], z);
	}
	glEnd();


	//eye new
	//NEWWW
	glEnable(GL_POINT_SMOOTH);
	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.04375f, 0.41880f, 0.0f);
	glEnd();

	//NEWWW END

	glEnable(GL_POINT_SMOOTH);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.04375f, 0.41880f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 1.0f, 1.0f);
	glColor3f(0.77f, 0.77f, 0.77f);
	for (i = 0; i < 11; i++)
	{
		glVertex3f(leftEyeBall[i][0], leftEyeBall[i][1], z);
	}
	glEnd();

	//NEWWW
	glEnable(GL_POINT_SMOOTH);
	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.0006f, 0.41875f, 0.0f);
	glEnd();
	//NEWWW END

	glEnable(GL_POINT_SMOOTH);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0006f, 0.41875f, 0.0f);
	glEnd();



	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 1.0f, 1.0f);
	glColor3f(0.77f, 0.77f, 0.77f);
	for (i = 0; i < 11; i++)
	{
		glVertex3f(rightEyeBall[i][0], rightEyeBall[i][1], z);
	}
	glEnd();


	//moustache
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 22; i++) {
		glVertex3f(moustache[i][0], moustache[i][1], z);
	}
	glEnd();

	glTranslatef(0.530f / 10, 0.0f, 0.0f);
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 22; i++) {
		glVertex3f(moustache[i][0], moustache[i][1], z);
	}
	glEnd();

	glRotatef(-180.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(-0.530f / 10, 0.0f, 0.0f);

	//random line
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.0125f, 0.4f, 0.0f);
	glVertex3f(0.0f, 0.3875f, 0.0f);
	glEnd();
	glLineWidth(1.0f);

	//lips
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 6; i++) {
		glVertex3f(lips[i][0], lips[i][1], z);
	}
	glEnd();

	//lips
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 4; i++) {
		glVertex3f(nose[i][0], nose[i][1], z);
	}
	glEnd();

	//face
	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 26; i++) {
		glVertex3f(face[i][0], face[i][1], z);
	}
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 26; i++) {
		glVertex3f(face[i][0], face[i][1], z);
	}
	glEnd();

	//neck
	glBegin(GL_POLYGON);
	//glColor3f(1.0f, 0.8588f, 0.6475f);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 10; i++) {
		glVertex3f(neck[i][0], neck[i][1], z);
	}
	glEnd();


	//*COLLOR

	glBegin(GL_POLYGON);
	//glColor3f(0.8f, 0.6f, 0.17f);
	glColor3f(0.0f, 0.0f, 0.0f);
	for (i = 0; i < 10; ++i)
		glVertex2f(collarRight[i][0] / 10, collarRight[i][1] / 10);
	glEnd();

	glBegin(GL_POLYGON);
	for (i = 0; i < 10; ++i)
		glVertex2f(collarLeft[i][0] / 10, collarLeft[i][1] / 10);
	glEnd();

	glPopMatrix();
}

static void drawShirtSitting(void)
{
	// local variable declarations
	int i;
	float shirtMidPart[][2] = {
		{0.0f, -1.0f},
		{1.125f, -1.0f},
		{1.125f, 2.25f},
		{0.36f, 2.25f},
		{0.30f, 2.0f},
		{0.25f, 2.1f},
		{0.0f, 2.5f},
		{-0.1f, 2.48f},
		{-0.25f, 2.1f},
		{-0.5f, 2.75f},
		{-0.6f, 2.25f},
		{-0.6f, 2.3f},
		{-1.125f, 2.3f},
		{-1.125f, -1.0f}
	};

	float shirtSide1[][2] = {
		{-1.0f, 2.3f},
		{-1.7f, 2.35f},
		{-2.0f, 2.3f},
		{-2.08f, 2.4f},
		{-1.8f, 1.4f},
		{-1.8f, 1.41f},
		{-1.9f, 1.41f},
		{-1.7f, 1.3f},
		{-1.5f, 1.25f},
		{-1.0f, 1.15f}
	};

	float hand1[][2] = {
		{-2.0f, 2.5f},
		{-1.95f, 2.65f},
		{-1.75f, 2.9f},
		{-1.5f, 3.25f},
		{-0.75f, 3.9f},
		{-0.5f, 3.6f},
		{-1.0f, 2.88f},
		{-1.2f, 2.58f},
		{-0.88f, 2.4f},
		{-0.88f, 1.6f},
		{-1.4f, 1.9f},
		{-1.75f, 2.25f},
		{-1.95f, 2.4f}
	};

	// local variable declarations
	float handArr1[][2] = {
		{ -1.0f, 2.0f },
		{ -1.7f, 0.7f },
		{ -2.7f, -2.0f },
		{ -1.0f, -3.0f },
		{ -0.3f, -1.0f },
		{ -0.1f, 1.0f },
		{-1.0f, 2.0f }
	};

	float handArr2[][2] = {
		{ 1.85f, 2.0f },
		{ 0.8f, 2.5f },
		{ -1.0f, 2.0f },
		{ -0.1f, 1.0f },
		{ 1.3f, 1.2f },
		{ 1.65f, 0.0f },
		{ 1.85f, -0.1f },
		{ 2.0f, 0.0f },
		{ 1.85f, 2.0f }
	};

	float handArr3[][2] = {		// hand thumb part
		{ -0.5f, -1.5f },
		{ -0.4f, -0.8f },
		{ 0.2f, -1.0f },
		{ 1.6f, -1.0f },
		{ 1.8f, -1.4f },
		{ 1.6f, -1.0f },
		{ 1.8f, -1.4f },
		{ 1.6f, -1.8f },
		{ 0.2f, -1.8f },
		{-0.8f, -2.2f }
	};

	float test[][2] = {

		{-1.6f, 2.35f},
		{-1.6f, 1.3f},
		//{-1.25f, 1.25f},
	};
	// code

	// left hand and fingers
	glPushMatrix();
	glTranslatef(-1.0, 3.9f, 0.0f);
	glScalef(0.2f, 0.2f, 1.0f);
	glRotatef(-10, 0.0f, 0.0f, 1.0);
	// code


	// line for separation
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.4f, -1.4f);
	glVertex2f(-0.3f, -1.0f);
	glVertex2f(-0.18f, -0.15f);
	glEnd();

	glColor3f(0.961f, 0.741f, 0.557f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr1) / sizeof(handArr1[0]); ++i)
		glVertex3f(handArr1[i][0], handArr1[i][1], 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr2) / sizeof(handArr2[0]); ++i)
		glVertex3f(handArr2[i][0], handArr2[i][1], 0.0f);
	glEnd();

	glTranslatef(-1.0f, 0.5f, 0.0f);
	glRotatef(25, 0.0f, 0.0f, 1.0f);
	glColor3f(0.85f, 0.68f, 0.48f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr3) / sizeof(handArr3[0]); ++i)
		glVertex3f(handArr3[i][0], handArr3[i][1], 0.0f);
	glEnd();
	glPopMatrix();

	// right hand and fingers
	glPushMatrix();
	glRotatef(180, 0.0f, 1.0f, 0.0f);

	glTranslatef(-0.7, 4.0f, 0.0f);
	glScalef(0.2f, 0.2f, 1.0f);
	glRotatef(-10, 0.0f, 0.0f, 1.0);


	// line for separation
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.4f, -1.4f);
	glVertex2f(-0.3f, -1.0f);
	glVertex2f(-0.18f, -0.15f);
	glEnd();

	glColor3f(0.961f, 0.741f, 0.557f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr1) / sizeof(handArr1[0]); ++i)
		glVertex3f(handArr1[i][0], handArr1[i][1], 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr2) / sizeof(handArr2[0]); ++i)
		glVertex3f(handArr2[i][0], handArr2[i][1], 0.0f);
	glEnd();

	glTranslatef(-1.0f, 0.5f, 0.0f);
	glRotatef(25, 0.0f, 0.0f, 1.0f);
	glColor3f(0.85f, 0.68f, 0.48f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr3) / sizeof(handArr3[0]); ++i)
		glVertex3f(handArr3[i][0], handArr3[i][1], 0.0f);
	glEnd();
	glPopMatrix();


	//glPushMatrix();
	////glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	////glTranslatef(-0.6f, -0.3f, 0.0f);
	//glColor3f(0.0f, 0.0f, 0.0f);
	//glBegin(GL_LINE_STRIP);
	//for (i = 0; i < 2; i++) {
	//	glVertex3f(test[i][0], test[i][1], 0.0f);
	//}
	//glEnd();
	//glPopMatrix();

	// left hand
	glPushMatrix();
	glTranslatef(-0.75f, -0.1f, 0.0f);

	//glScalef(1.15f, 1.0f, 1.15f);
	glColor3f(0.961f, 0.741f, 0.557f);
	glBegin(GL_POLYGON);
	for (i = 0; i < sizeof(hand1) / sizeof(hand1[i]); ++i)
		glVertex2f(hand1[i][0], hand1[i][1]);
	glEnd();
	glPopMatrix();


	// right hand
	glPushMatrix();
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(-0.5f, -0.15f, 0.0f);
	//glScalef(1.2f, 1.05f, 1.2f);

	//glColor3f(0.0f, 0.0f, 0.0f);
	//glBegin(GL_LINE_STRIP);
	//for (i = 0; i < 2; i++) {
	//	glVertex3f(test[i][0], test[i][1], 0.0f);
	//}
	//glEnd();

	glColor3f(0.961f, 0.741f, 0.557f);
	glBegin(GL_POLYGON);
	for (i = 0; i < sizeof(hand1) / sizeof(hand1[i]); ++i)
		glVertex2f(hand1[i][0], hand1[i][1]);
	glEnd();
	glPopMatrix();

	// right part of shirt shoulder
	glPushMatrix();
	glRotatef(180.0f, 0.0f, 1.0f, 0.0f);

	glColor3f(0.769f, 0.596f, 0.169f);
	glBegin(GL_POLYGON);
	for (i = 0; i < sizeof(shirtSide1) / sizeof(shirtSide1[0]); ++i)
		glVertex2f(shirtSide1[i][0], shirtSide1[i][1]);
	glEnd();
	glPopMatrix();

	// middle part of shirt

	glBegin(GL_POLYGON);
	glColor3f(0.769f, 0.596f, 0.169f);
	for (i = 0; i < sizeof(shirtMidPart) / sizeof(shirtMidPart[0]); ++i)
		glVertex2f(shirtMidPart[i][0], shirtMidPart[i][1]);
	glEnd();

	// left part of shirt shoulder

	glBegin(GL_POLYGON);
	for (i = 0; i < sizeof(shirtSide1) / sizeof(shirtSide1[0]); ++i)
		glVertex2f(shirtSide1[i][0], shirtSide1[i][1]);
	glEnd();

	glPushMatrix();
	glTranslatef(-0.2, 2.0f, 0.0f);
	glScalef(0.3f, 0.3f, 1.0f);
	// code

	// line for separation
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.4f, -1.4f);
	glVertex2f(-0.3f, -1.0f);
	glVertex2f(-0.18f, -0.15f);
	glEnd();

	glColor3f(0.961f, 0.741f, 0.557f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr1) / sizeof(handArr1[0]); ++i)
		glVertex3f(handArr1[i][0], handArr1[i][1], 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr2) / sizeof(handArr2[0]); ++i)
		glVertex3f(handArr2[i][0], handArr2[i][1], 0.0f);
	glEnd();

	glTranslatef(-1.0f, 0.5f, 0.0f);
	glRotatef(25, 0.0f, 0.0f, 1.0f);
	glColor3f(0.85f, 0.68f, 0.48f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(handArr3) / sizeof(handArr3[0]); ++i)
		glVertex3f(handArr3[i][0], handArr3[i][1], 0.0f);
	glEnd();

	glPopMatrix();

}

static void drawDhotiSitting(void)
{
	int i;
	float z = 0.0f;
	float dhotiR[28][2] = {
		{-1.0f, 0.25f},
		{1.0f, -2.75f},
		{0.75f, -2.6875f},
		{0.5f, -2.40f},
		{0.125f, -1.75f},
		{-0.875f, 0.0f},
		{0.125f, -1.75f},
		{0.25f, -2.25f},
		{0.20f, -2.5f},
		{0.0f, -2.6875f},
		{-0.25f, -2.60f},
		{-1.30f, -1.5f},
		{-1.40f, -0.75f},
		{-1.35f, -0.25f},
		{-1.30f, -0.125f},
		{-1.30f, 0.0f},
		{-1.25f, 0.375f},
		{-1.125f, 0.5f},
		{-1.0f, 0.60f},
		{-0.875f, 0.64f},
		{-0.75f, 0.56f},
		{-0.6875f, 0.5f},
		{-0.5f, 0.375f},
		{-0.25f, 0.125f},
		{0.0f, 0.15f},
		{0.25f, 0.0f},
		{1.0f, -1.0f},
		{1.0f, -2.75f}
	};

	float dhotiL[][2] = {
		{1.5f, 0.0f},
		{1.0f, -2.75f},
		{1.40f, -2.75f},
		{1.37f, -2.4f},
		{1.675f, -2.53f},
		{1.93f, -2.375f},
		{1.90f, -2.5f},
		{2.06f, -2.70f},
		{2.375f, -2.25f},
		{2.53f, -2.0f},
		{2.5f, -1.75f},
		{2.6875f, -1.5f},
		{2.6875f, -1.375f},
		{2.56f, -1.30f},
		{2.70f, -0.53f},
		{2.62f, -0.25f},
		{2.40f, 0.0f},
		{2.30f, 0.06f},
		{2.0f, 0.355f},
		{1.625f, 0.43f},
		{1.5f, 0.28f},
		{1.25f, 0.0f},
		{1.20f, -0.25f},
		{1.0f, -0.75f},
		{1.0f, -1.0f},
		{1.0f, -2.75f}
	};

	float LegR[][2] = {
		{0.0f, -3.0f},
		{0.20f, -2.5f},
		{0.0f, -2.6875f},
		{-0.25f, -2.60f},
		{-0.1875f, -2.875f},
		{-0.25f, -2.92f},
		{-0.28f, -3.0f},
		{-0.92f, -3.40f},
		{-0.93f, -3.50f},
		{-0.90f, -3.52f},
		{-0.875f, -3.55f},
		{-0.75f, -3.50f},
		{-0.73f, -3.56f},
		{-0.76f, -3.58f},
		{-0.70f, -3.5f},
		{-0.25f, -3.5f},
		{0.0f, -3.25f},
		{0.15f, -3.18f},
		{0.35f, -3.17f},
		{0.5f, -3.125f},
		{0.51f, -3.0f},
		{0.375f, -2.75f},
		{0.20f, -2.5f}
	};

	float LegL[][2] = {
		{ 1.875f, -2.875f},
		{1.40f, -2.75f},
		{1.37f, -2.4f},
		{1.675f, -2.53f},
		{1.93f, -2.375f},
		{1.90f, -2.5f},
		{2.06f, -2.70f},
		{2.375f, -3.03f},
		{2.15f, -3.28f},
		{2.0625f, -3.375f},
		{1.875f, -3.43f},
		{1.75f, -3.43f},
		{1.6875f, -3.25f},
		{1.56f, -3.1875f},
		{1.54f, -3.0f},
		{1.5f, -2.81f},
		{1.40f, -2.75f}
	};

	glPushMatrix();
	glScalef(0.9f, 0.9f, 0.0f);
	glTranslatef(-0.9f, -0.16f, 0.0f);


	// DHOTI LINES
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.125f, -1.875f, z);
	glVertex3f(-0.875f, 0.0625f, z);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(1.375f, -1.875f, z);
	glVertex3f(1.25f, -0.25f, z);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(1.875f, -2.375f, z);
	glVertex3f(2.0f, -2.0f, z);
	glVertex3f(2.25f, -1.375f, z);
	glVertex3f(2.375f, -0.125f, z);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(2.1875f, -2.125f, z);
	glVertex3f(2.15f, -1.5f, z);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(2.1875f, -2.0f, z);
	glVertex3f(2.5f, -1.6875f, z);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(2.56f, -1.30f, z);
	glVertex3f(2.5f, -1.5f, z);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-0.25f, 0.125f, z);
	glVertex3f(-0.125f, -0.125f, z);
	glEnd();


	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(1.325f, -2.6875f, z);
	glVertex3f(1.0f, -2.6375f, z);
	glVertex3f(0.75f, -2.5f, z);
	glVertex3f(0.5f, -2.25f, z);
	glVertex3f(0.40f, -2.0f, z);
	glVertex3f(0.25f, -1.125f, z);
	glEnd();

	// DHOTI LINE END

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	for (i = 0; i < 28; i++) {
		glVertex3f(dhotiR[i][0], dhotiR[i][1], z);

	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	for (i = 0; i < 26; i++) {
		glVertex3f(dhotiL[i][0], dhotiL[i][1], z);
	}
	glEnd();



	//glBegin(GL_LINE_LOOP);
	//glColor3f(0.0f, 0.0f, 0.0f);
	//for (i = 1; i < 26; i++) {
	//	glVertex3f(dhotiR[i][0], dhotiR[i][1], z);

	//}
	//for (i = 25; i > 0; i--) {
	//	glVertex3f(dhotiL[i][0], dhotiL[i][1], z);
	//}
	//glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 23; i++) {
		glVertex3f(LegR[i][0], LegR[i][1], z);

	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5529f, 0.333f, 0.141f);
	for (i = 0; i < 17; i++) {
		glVertex3f(LegL[i][0], LegL[i][1], z);

	}
	glEnd();

	glPopMatrix();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

