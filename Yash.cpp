///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "common.h"
#include "Yash.h"

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




void DrawRocksOnNet()
{
	pPP = { -0.90f, -0.5f, -1.0f,		0.1f, 0.1f, 1.0f,		0.0f, 0.0f, 0.0f };
	PlaceObject(drawRock1);

	pPP = { -0.35f, -0.20f, 0.0f,		0.05f, 0.05f, 1.0f,		0.0f, 0.0f, 0.0f };
	
	PlaceObject(drawRock2);

	pPP = { -0.40f, -0.45f, 0.0f,		0.04f, 0.04f, 1.0f,		0.0f, 0.0f, 0.0f };
	
	PlaceObject(drawRock3);

	pPP = { -0.10f, -0.35f, 0.0f,		0.04f, 0.06f, 1.0f,		0.0f, 0.0f, 0.0f };
	
	PlaceObject(drawRock4);
}


void drawPoly(VERTEX* points, int n)
{
	glBegin(GL_POLYGON);

	for (int i = 0; i < n; i++)
	{
		glVertex3f(points[i].x, points[i].y, 1.0f);
	}

	glEnd();
}

void drawRock1()
{
	VERTEX poly1[] = {
		{0.2160887749032f, 0.1515216160784f},
		{0.268779497184f, -0.1360075879247f},
		{0.2146481862992f, -0.1870167058583f},
		{0.2953211481224f, -0.2431996614138f},
		{0.4206523566692f, -0.1639672881945f},
		{0.4f, 0.0f},
		{0.3543852808859f, 0.0521210024034f} };

	VERTEX poly2[] = {
		{0.0072034273252f, 0.2782934132292f},
		{-0.0561824712502f, 0.0348339391556f},
		{0.0950793321684f, -0.1668484654025f},
		{0.2146481862992f, -0.1870167058583f},
		{0.268779497184f, -0.1360075879247f},
		{0.2160887749032f, 0.1515216160784f},
		{0.0533022626528f, 0.2595657613774f} };

	VERTEX poly3[] = {
		{0.2146481862992f, -0.1870167058583f},
		{0.1447023362769f, -0.2768110640363f},
		{0.12f, -0.32f},
		{0.1597967159114f, -0.3255775213172f},
		{0.1806966261746f, -0.32209420294f},
		{0.2953211481224f, -0.2431996614138f} };

	VERTEX poly4[] = {
		{-0.1253307242415f, 0.302783419497f},
		{0.0072034273252f, 0.2782934132292f},
		{-0.0561824712502f, 0.0348339391556f},
		{0.0950793321684f, -0.1668484654025f},
		{0.0619457942767f, -0.1639672881945f},
		{0.0057628387212f, -0.113546687055f},
		{-0.2304936923325f, -0.0429578454597f},
		{-0.3097260655518f, 0.1760116223462f}
	};

	VERTEX poly5[] = {
		{0.1447023362769f, -0.2768110640363f},
		{0.0950793321684f, -0.1668484654025f},
		{0.2146481862992f, -0.1870167058583f}
	};

	VERTEX poly6[] = {
		{-0.3097260655518f, 0.1760116223462f},
		{-0.2304936923325f, -0.0429578454597f},
		{0.0057628387212f, -0.113546687055f},
		{0.0619457942767f, -0.1639672881945f},
		{0.0950793321684f, -0.1668484654025f},
		{0.1447023362769f, -0.2768110640363f},
		{0.12f, -0.32f},
		{-0.0408288936366f, -0.2945702691683f},
		{-0.2042470828109f, -0.2648954657525f},
		{-0.3823538822007f, -0.1934888061816f},
		{-0.3949929359058f, -0.0596635316569f},
		{-0.3706815286152f, 0.1224912214068f} };

	glColor3ub(ROCK_COLOR_1);
	drawPoly(poly1, 7);

	glColor3ub(ROCK_COLOR_2);
	drawPoly(poly2, 7);

	glColor3ub(ROCK_COLOR_3);
	drawPoly(poly3, 6);

	glBegin(GL_POLYGON);
	drawPoly(poly4, 8);

	glColor3ub(ROCK_COLOR_4);
	drawPoly(poly5, 3);

	glColor3ub(ROCK_COLOR_5);
	drawPoly(poly6, 12);
}

void drawRock2()
{
	VERTEX poly1[] = {
		{ -0.1049858268436f, 0.1317476561698f },
		{ -0.5295076760848f, 0.2513941416669f },
		{ -0.1658102057539f, 0.4678823817266f },
		{ 0.2546430797235f, 0.399511506653f },
		{ 0.3111809762267f, -0.009108800254f },
		{ 0.1442811214986f, -0.2336176221108f },
		{ -0.3639647387475f, -0.1784366429984f },
		{ -0.5295076760848f, 0.2513941416669f }
	};

	VERTEX poly2[] = {
		{ -0.4453948545239f, -0.3178204717475f },
		{ -0.7198176227869f, 0.0014764598793f },
		{ -0.5295076760848f, 0.2513941416669f },
		{ -0.3639647387475f, -0.1784366429984f },
		{ 0.1442811214986f, -0.2336176221108f },
		{ 0.0978129285618f, -0.2829900771062f },
		{ 0.1990049497717f, -0.5237624122053f },
		{ -0.3504687397159f, -0.5232060656047f },
		{ -0.6542323071014f, -0.324724189188f },
		{ -0.7198176227869f, 0.0014764598793f }
	};

	VERTEX poly3[] = {
		{ 0.2119412001099f, -0.3388409596097f },
		{ 0.1442811214986f, -0.2336176221108f },
		{ 0.0978129285618f, -0.2829900771062f },
		{ 0.1990049497717f, -0.5237624122053f },
		{ 0.2227994814183f, -0.5237624122053f },
		{ 0.3475794655971f, -0.303319911516f },
		{ 0.1442811214986f, -0.2336176221108f }
	};

	VERTEX poly4[] = {
		{ 0.3976156199413f, -0.441282018827f },
		{ 0.3475794655971f, -0.303319911516f },
		{ 0.4114732308852f, -0.3672136768041f },
		{ 0.4793066233427f, -0.3706943542384f },
		{ 0.5481296794362f, -0.3836589230173f },
		{ 0.6177586737675f, -0.4139606199962f },
		{ 0.6844738643888f, -0.4746713729704f },
		{ 0.2227994814183f, -0.5237624122053f },
		{ 0.3475794655971f, -0.303319911516f }
	};

	VERTEX poly5[] = {
		{ 0.4269498001904f, -0.0138242266178f },
		{ 0.2546430797235f, 0.399511506653f },
		{ 0.3040155347188f, 0.3791816722431f },
		{ 0.5102181408758f, 0.167170541969f },
		{ 0.4608456858805f, -0.2220005738766f },
		{ 0.3989549869353f, -0.2668553164197f },
		{ 0.3475794655971f, -0.303319911516f },
		{ 0.1442811214986f, -0.2336176221108f },
		{ 0.3111809762267f, -0.009108800254f },
		{ 0.2546430797235f, 0.399511506653f }
	};

	VERTEX poly6[] = {
		{ 0.6825298158895f, 0.1029361082649f },
		{ 0.3040155347188f, 0.3791816722431f },
		{ 0.4211540525819f, 0.3266316698286f },
		{ 0.6153028707781f, 0.2469938477893f },
		{ 0.6923979808828f, 0.1835442764589f },
		{ 0.7757619404982f, 0.0454338359021f },
		{ 0.8367296124557f, -0.0578379349648f },
		{ 0.8732508981945f, -0.1406812362372f },
		{ 0.8155473172317f, -0.2532573471815f },
		{ 0.7858790207121f, -0.3125939402208f },
		{ 0.7525021871275f, -0.3917093976064f },
		{ 0.6844738643888f, -0.4746713729704f },
		{ 0.6177586737675f, -0.4139606199962f },
		{ 0.5481296794362f, -0.3836589230173f },
		{ 0.4793066233427f, -0.3706943542384f },
		{ 0.4114732308852f, -0.3672136768041f },
		{ 0.3475794655971f, -0.303319911516f },
		{ 0.3989549869353f, -0.2668553164197f },
		{ 0.4608456858805f, -0.2220005738766f },
		{ 0.5102181408758f, 0.167170541969f },
		{ 0.3040155347188f, 0.3791816722431f }
	};

	glColor3ub(ROCK_COLOR_3);
	drawPoly(poly1, 8);

	glColor3ub(ROCK_COLOR_5);
	drawPoly(poly2, 7);

	glColor3ub(ROCK_COLOR_2);
	drawPoly(poly5, 10);
	drawPoly(poly4, 9);

	glColor3ub(ROCK_COLOR_4);
	drawPoly(poly3, 7);

	glColor3ub(ROCK_COLOR_1);
	drawPoly(poly6, 21);
}

void drawRock3()
{
	VERTEX poly1[] = {
		{ -0.326818410514f, 0.2032272311568f },
		{ -0.7373647053795f, -0.1915424753954f },
		{ -0.671579437878f, -0.0089334010672f },
		{ -0.5953615447025f, 0.131646334081f },
		{ -0.5276132945832f, 0.2411130583397f },
		{ -0.4682285667346f, 0.3415635767722f },
		{ -0.3765745593623f, 0.5721768856443f },
		{ -0.3056166181709f, 0.6253953415379f },
		{ -0.1666573166711f, 0.6727006356655f },
		{ -0.0395243387031f, 0.7259190915591f },
		{ 0.0876086392648f, 0.6845269591974f },
		{ 0.2383942642966f, 0.6608743121336f },
		{ 0.3389180143178f, 0.6313085033038f },
		{ 0.3783934540716f, 0.6096306788972f },
		{ 0.2543414011719f, 0.4473940208303f },
		{ 0.1295877692533f, 0.3048184414947f },
		{ -0.0700180418166f, 0.1123414093917f },
		{ -0.0237317930511f, -0.0657621418415f },
		{ -0.035097541206f, -0.1642652925169f },
		{ -0.0996283766713f, -0.2944188329934f },
		{ -0.1291712941436f, -0.3308954842792f },
		{ -0.300298331486f, -0.2817113567837f },
		{ -0.4745731365272f, -0.2551912777557f },
		{ -0.7373647053795f, -0.1915424753954f }
	};

	VERTEX poly2[] = {
		{ -0.406378647598f, -0.4370432482335f },
		{ -0.7373647053795f, -0.1915424753954f },
		{ -0.4745731365272f, -0.2551912777557f },
		{ -0.300298331486f, -0.2817113567837f },
		{ -0.0996283766713f, -0.2944188329934f },
		{ -0.1291712941436f, -0.3308954842792f },
		{ -0.1373892745997f, -0.5052377371626f },
		{ -0.1298121091632f, -0.70982120395f },
		{ -0.4935160501186f, -0.7136097866683f },
		{ -0.6299050279769f, -0.5317578161906f },
		{ -0.7397739268072f, -0.365060176586f },
		{ -0.7373647053795f, -0.1915424753954f }
	};

	VERTEX poly3[] = {
		{ 0.2149489182009f, 0.059261087862f },
		{ 0.3783934540716f, 0.6096306788972f },
		{ 0.468783960326f, 0.3964449497894f },
		{ 0.6072159600275f, 0.1479853042256f },
		{ 0.4915154566357f, -0.0089334010672f },
		{ 0.3248178170311f, -0.1604767097986f },
		{ 0.2263146663557f, -0.2514026950375f },
		{ 0.1723604430539f, -0.4044950656999f },
		{ 0.0952752120779f, -0.4823615792873f },
		{ 0.0f, -0.4f },
		{ -0.0996283766713f, -0.2944188329934f },
		{ -0.035097541206f, -0.1642652925169f },
		{ -0.0237317930511f, -0.0657621418415f },
		{ -0.0700180418166f, 0.1123414093917f },
		{ 0.1295877692533f, 0.3048184414947f },
		{ 0.2543414011719f, 0.4473940208303f },
		{ 0.3783934540716f, 0.6096306788972f }
	};

	VERTEX poly4[] = {
		{ -0.0540404547974f, -0.5203920680358f },
		{ -0.0996283766713f, -0.2944188329934f },
		{ 0.0f, -0.4f },
		{ 0.0952752120779f, -0.4823615792873f },
		{ 0.0558284440329f, -0.5847979742466f },
		{ 0.0709122634842f, -0.7085889590854f },
		{ -0.1298121091632f, -0.70982120395f },
		{ -0.1373892745997f, -0.5052377371626f },
		{ -0.1291712941436f, -0.3308954842792f },
		{ -0.0996283766713f, -0.2944188329934f }
	};

	VERTEX poly5[] = {
		{ 0.2490461626654f, -0.5847979742466f },
		{ 0.0952752120779f, -0.4823615792873f },
		{ 0.3180221706484f, -0.4928028429703f },
		{ 0.4498410467346f, -0.5544893125003f },
		{ 0.5894950264062f, -0.6633434831258f },
		{ 0.3058749034397f, -0.7211869521049f },
		{ 0.0709122634842f, -0.7085889590854f },
		{ 0.0558284440329f, -0.5847979742466f },
		{ 0.0952752120779f, -0.4823615792873f }
	};

	VERTEX poly6[] = {
		{ 0.7112532542963f, 0.0137980952425f },
		{ 0.3783934540716f, 0.6096306788972f },
		{ 0.5181062229428f, 0.4580871892805f },
		{ 0.6242992386828f, 0.3529395153521f },
		{ 0.7147901906021f, 0.2659289846605f },
		{ 0.7704769302447f, 0.0988687657326f },
		{ 0.808761563749f, -0.0890739805612f },
		{ 0.829644091115f, -0.3118209391317f },
		{ 0.7043489269191f, -0.5241266340192f },
		{ 0.5894950264062f, -0.6633434831258f },
		{ 0.4498410467346f, -0.5544893125003f },
		{ 0.3180221706484f, -0.4928028429703f },
		{ 0.0952752120779f, -0.4823615792873f },
		{ 0.1723604430539f, -0.4044950656999f },
		{ 0.2263146663557f, -0.2514026950375f },
		{ 0.3248178170311f, -0.1604767097986f },
		{ 0.4915154566357f, -0.0089334010672f },
		{ 0.6072159600275f, 0.1479853042256f },
		{ 0.468783960326f, 0.3964449497894f },
		{ 0.3783934540716f, 0.6096306788972f }
	};

	glColor3ub(ROCK_COLOR_1);
	drawPoly(poly1, 24);
	drawPoly(poly4, 10);

	glColor3ub(ROCK_COLOR_2);
	drawPoly(poly2, 12);

	glColor3ub(ROCK_COLOR_3);
	drawPoly(poly3, 17);

	glColor3ub(ROCK_COLOR_4);
	drawPoly(poly5, 9);

	glColor3ub(ROCK_COLOR_5);
	drawPoly(poly6, 20);
}

void drawRock4()
{
	VERTEX poly1[] = {
		{ -0.4249899321599f, 0.128085378639f },
		{ -0.4736103513043f, 0.0126118831711f },
		{ -0.104905506126f, -0.0360085359733f },
		{ -0.1089572077214f, 0.0085601815757f },
		{ -0.2021463444148f, 0.089594213483f },
		{ 0.0f, 0.2f },
		{ 0.0591884084863f, 0.3083860996328f },
		{ 0.0389299005095f, 0.4441181030775f },
		{ -0.5708511895931f, 0.332696309205f },
		{ -0.6620144754888f, 0.2921792932513f },
		{ -0.4736103513043f, 0.0126118831711f }
	};

	VERTEX poly2[] = {
		{ 0.1422482911913f, 0.1949384549625f },
		{ 0.348885072555f, 0.3894201315401f },
		{ 0.4582810156298f, 0.1969643057602f },
		{ 0.233411577087f, 0.045025495934f },
		{ 0.1787136055496f, -0.0501894915571f },
		{ -0.104905506126f, -0.0360085359733f },
		{ -0.1089572077214f, 0.0085601815757f },
		{ -0.2021463444148f, 0.089594213483f },
		{ 0.0f, 0.2f },
		{ 0.0591884084863f, 0.3083860996328f },
		{ 0.0389299005095f, 0.4441181030775f },
		{ 0.348885072555f, 0.3894201315401f }
	};

	VERTEX poly3[] = {
		{ 0.5762839283729f, 0.0472884147764f },
		{ 0.2223880528735f, -0.0722497476145f },
		{ 0.2695741696067f, -0.1162901232322f },
		{ 0.442589930962f, -0.1210087349056f },
		{ 0.5621280933529f, -0.1839235572166f },
		{ 0.6769476440705f, -0.3081803312808f },
		{ 0.8279432176169f, -0.2138080978143f },
		{ 0.8f, 0.0f },
		{ 0.7178422785726f, 0.231314270036f },
		{ 0.348885072555f, 0.3894201315401f },
		{ 0.4582810156298f, 0.1969643057602f },
		{ 0.233411577087f, 0.045025495934f },
		{ 0.1787136055496f, -0.0501894915571f },
		{ 0.2223880528735f, -0.0722497476145f }
	};

	VERTEX poly4[] = {
		{ 0.3598719080903f, -0.2258880530286f },
		{ 0.633949800958f, -0.3282673437497f },
		{ 0.4515866893612f, -0.3346660494197f },
		{ 0.1903062078335f, -0.3538621664299f },
		{ 0.1787136055496f, -0.0501894915571f },
		{ 0.2223880528735f, -0.0722497476145f },
		{ 0.2695741696067f, -0.1162901232322f },
		{ 0.442589930962f, -0.1210087349056f },
		{ 0.5621280933529f, -0.1839235572166f },
		{ 0.6769476440705f, -0.3081803312808f },
		{ 0.633949800958f, -0.3282673437497f }
	};

	VERTEX poly5[] = {
		{ 0.05f, -0.2f },
		{ -0.0711232533288f, -0.3592391915872f },
		{ -0.0986122695197f, -0.2648602359986f },
		{ -0.1178545808533f, -0.1384107615206f },
		{ -0.118770881393f, -0.0852653302183f },
		{ -0.104905506126f, -0.0360085359733f },
		{ 0.1787136055496f, -0.0501894915571f },
		{ 0.1903062078335f, -0.3538621664299f },
		{ -0.0711232533288f, -0.3592391915872f }
	};

	VERTEX poly6[] = {
		{ -0.5543215155124f, -0.1880301108543f },
		{ -0.3166911553571f, -0.3633690173766f },
		{ -0.5174080615077f, -0.3749044717531f },
		{ -0.6523728777123f, -0.3599083810637f },
		{ -0.7446565127241f, -0.299924018306f },
		{ -0.8057944209194f, -0.1834159291037f },
		{ -0.8219440570464f, -0.0980535667178f },
		{ -0.77118805779f, 0.0184545224845f },
		{ -0.7100501495947f, 0.1753367020045f },
		{ -0.6620144754888f, 0.2921792932513f },
		{ -0.4736103513043f, 0.0126118831711f },
		{ -0.104905506126f, -0.0360085359733f },
		{ -0.118770881393f, -0.0852653302183f },
		{ -0.1178545808533f, -0.1384107615206f },
		{ -0.0986122695197f, -0.2648602359986f },
		{ -0.0711232533288f, -0.3592391915872f },
		{ -0.3166911553571f, -0.3633690173766f }
	};

	glColor3ub(ROCK_COLOR_3);
	drawPoly(poly1, 11);
	drawPoly(poly4, 11);

	glColor3ub(ROCK_COLOR_2);
	drawPoly(poly2, 12);
	// drawPoly(x4, y4, 11);

	glColor3ub(ROCK_COLOR_1);
	drawPoly(poly3, 14);

	glColor3ub(ROCK_COLOR_4);
	drawPoly(poly5, 9);

	glColor3ub(ROCK_COLOR_5);
	drawPoly(poly6, 17);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


