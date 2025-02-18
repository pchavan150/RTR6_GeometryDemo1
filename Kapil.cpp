///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//                                      Header Files                                                
//                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "common.h"
#include "Kapil.h"


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

//All definations
void drawMeshLayingOnFloor(void)
{

    glBegin(GL_LINE);
    // mesh color
    glColor3f(0.0f, 0.0f, 0.0f);

    float hight = 15.0f;
    float spacing = 22.f;
    float jPrev;
    //float 
    for (float i = (hight) * -1; i <= hight; i++)
    {

        for (float j = (hight * -1.0f); j < hight; )
        {
            jPrev = j;
            // horizontal
            glVertex3f(j / spacing, i / spacing + 0.005f, 0.0f);
            j = j + 1;
            glVertex3f(j / spacing, i / spacing, 0.0f);

            // Vertical
            glVertex3f(i / spacing + 0.005f, jPrev / spacing, 0.0f);
            glVertex3f(i / spacing, j / spacing, 0.0f);
        }
    }
    glEnd();
}

void drawConeToPlaceBirds(void)
{
    double base = 0.2;
    double height = 0.03f;
    GLint slices = 8;
    GLint stacks = 10;

    glPushMatrix();
    glTranslatef(0.4, 0.4, 0);                     //  Quadrant I
    glutWireCone(0.2f, 0.05f, 8, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, 0.4, 0);                     //  Quadrant II
    glutWireCone(0.2f, 0.05f, 8, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.4, 0);                    //   Quadrant III
    glutWireCone(0.2f, 0.05f, 8, 10);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.4, -0.4, 0);                    //   Quadrant IV
    glutWireCone(0.2f, 0.05f, 8, 10);
    glPopMatrix();
}


void drawMeshFlying(void)
{
    drawMeshLayingOnFloor();
    drawConeToPlaceBirds();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                      End of File                                                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

