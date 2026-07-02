#include <GL/glut.h>
#include <cmath>

float carX = -50;
bool dayMode = true;
bool lightsOn = false;

//Rania
void Sky()
{
    if (dayMode) 
        glColor3f(0.7,0.9,1.0);
    else 
        glColor3f(0.0,0.0,0.2);
    glBegin(GL_QUADS);
        glVertex2i(-100,100);
        glVertex2i(100,100);
        glVertex2i(100,-50);
        glVertex2i(-100,-50);
    glEnd();
}

void road()
{
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
        glVertex2i(-100,-30);
        glVertex2i(100,-30);
        glVertex2i(100,-100);
        glVertex2i(-100,-100);
    glEnd();
    // sidewalk
    glColor3f(0.7,0.7,0.7);
    glBegin(GL_QUADS);
        glVertex2i(-100,-10);
        glVertex2i(100,-10);
        glVertex2i(100,-30);
        glVertex2i(-100,-30);
    glEnd();
    // line of the road
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
        glVertex2i(-90,-60);
        glVertex2i(-70,-60);
        glVertex2i(90,-60);
        glVertex2i(70,-60);
        glVertex2i(-60,-60);
        glVertex2i(-40,-60);
        glVertex2i(60,-60);
        glVertex2i(40,-60);
        glVertex2i(-30,-60);
        glVertex2i(-10,-60);
        glVertex2i(30,-60);
        glVertex2i(10,-60);
    glEnd();
}
//Layan
void Trees()
{
     
    glColor3f(0.6,0.3,0.0);
    glBegin(GL_QUADS);
        glVertex2i(2,25);
        glVertex2i(-2,25);
        glVertex2i(-2,-25);
        glVertex2i(2,-25);
    glEnd();


    glColor3f(0.0,0.6,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(-12,25);
        glVertex2i(12,25);
        glVertex2i(0,45);
    glEnd();

     
}
//Ahlam
void sidebulding()
{
    // المبنى اليمين
    glColor3f(0.93,0.82,0.65);
    glBegin(GL_QUADS);
        glVertex2i(75,50);
        glVertex2i(40,50);
        glVertex2i(40,-25);
        glVertex2i(75,-25);
    glEnd();

    glColor3f(0.45,0.25,0.10);
    glLineWidth(3);     
    glBegin(GL_LINE_LOOP);
        glVertex2i(75,50);
        glVertex2i(40,50);
        glVertex2i(40,-25);
        glVertex2i(75,-25);
    glEnd();

    // شباك اليمين
    if (lightsOn)
    glColor3f(1.0, 1.0, 0.2);
else
    glColor3f(0.35, 0.70, 0.90);
        glBegin(GL_QUADS);
        glVertex2i(45,5);
        glVertex2i(50,5);
        glVertex2i(50,15);
        glVertex2i(45,15);

        glVertex2i(55,5);
        glVertex2i(60,5);
        glVertex2i(60,15);
        glVertex2i(55,15);

        glVertex2i(65,5);
        glVertex2i(70,5);
        glVertex2i(70,15);
        glVertex2i(65,15);
    glEnd();

    // المبنى اليسار 
    glColor3f(0.93,0.82,0.65);
    glBegin(GL_QUADS);
        glVertex2i(-75,50);
        glVertex2i(-40,50);
        glVertex2i(-40,-25);
        glVertex2i(-75,-25);
    glEnd();

    glColor3f(0.45,0.25,0.10);
    glLineWidth(3);     
    glBegin(GL_LINE_LOOP);
        glVertex2i(-75,50);
        glVertex2i(-40,50);
        glVertex2i(-40,-25);
        glVertex2i(-75,-25);
    glEnd();

    // شباك اليسار
if (lightsOn)
    glColor3f(1.0, 1.0, 0.2);
else
    glColor3f(0.35, 0.70, 0.90);

        glBegin(GL_QUADS); 
        glVertex2i(-70,5);
        glVertex2i(-65,5);
        glVertex2i(-65,15);
        glVertex2i(-70,15);

        glVertex2i(-60,5);
        glVertex2i(-55,5);
        glVertex2i(-55,15);
        glVertex2i(-60,15);

        glVertex2i(-50,5);
        glVertex2i(-45,5);
        glVertex2i(-45,15);
        glVertex2i(-50,15);
    glEnd();
}
//Dalia
void Center()
{

    glColor3f(0.93,0.82,0.65);
    glBegin(GL_QUADS);
        glVertex2i(35,90);
        glVertex2i(-35,90);
        glVertex2i(-35,-25);
        glVertex2i(35,-25);
    glEnd();

    glColor3f(0.45,0.25,0.10);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
        glVertex2i(35,90);
        glVertex2i(-35,90);
        glVertex2i(-35,-25);
        glVertex2i(35,-25);
    glEnd();
}
//Lama
void GateFrame()
{
    if (dayMode) 
        glColor3f(0.7,0.9,1.0);
    else 
        glColor3f(0.0,0.0,0.2);

    glBegin(GL_POLYGON);
        glVertex2i(0,70);
        glVertex2i(-20,45);
        glVertex2i(-20,-25);
        glVertex2i(20,-25);
        glVertex2i(20,45);
    glEnd();

    glColor3f(0.45,0.25,0.10);
    glLineWidth(5);

    glBegin(GL_LINE_LOOP);
        glVertex2i(0,70);
        glVertex2i(-20,45);
        glVertex2i(-20,-25);
        glVertex2i(20,-25);
        glVertex2i(20,45);
    glEnd();
}
//Rahaf
void GateBars()
{
    glColor3f(0,0,0);

    glLineWidth(6);
    glBegin(GL_LINES);
        glVertex2i(-18,0);
        glVertex2i(0,18);
        glVertex2i(18,0);
        glVertex2i(0,18);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2i(-18,-25); glVertex2i(-18,0);
        glVertex2i(-14,-25); glVertex2i(-14,5);
        glVertex2i(-10,-25); glVertex2i(-10,10);
        glVertex2i(-6,-25);  glVertex2i(-6,14);
        glVertex2i(-2,-25);  glVertex2i(-2,18);
        glVertex2i(2,-25);   glVertex2i(2,18);
        glVertex2i(6,-25);   glVertex2i(6,14);
        glVertex2i(10,-25);  glVertex2i(10,10);
        glVertex2i(14,-25);  glVertex2i(14,5);
        glVertex2i(18,-25);  glVertex2i(18,0);
    glEnd();
}
//Retaj
void drawWheel(float x, float y)
{
    glColor3f(0, 0, 0);

    glBegin(GL_POLYGON);

    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.1416 / 180;
        glVertex2f(x + 5 * cos(theta),y + 5 * sin(theta));
    }

    glEnd();
}

void Car()
{
    glColor3f(0.9, 0.1, 0.1);

    glBegin(GL_QUADS);
        glVertex2f(carX - 18, -78);
        glVertex2f(carX + 18, -78);
        glVertex2f(carX + 18, -66);
        glVertex2f(carX - 18, -66);
    glEnd();

    glColor3f(1.0, 0.2, 0.2);

    glBegin(GL_POLYGON);
        glVertex2f(carX - 10, -66);
        glVertex2f(carX + 10, -66);
        glVertex2f(carX + 5, -56);
        glVertex2f(carX - 5, -56);
    glEnd();

    glColor3f(0.7, 0.9, 1);

    glBegin(GL_QUADS);
        glVertex2f(carX - 7, -65);
        glVertex2f(carX - 1, -65);
        glVertex2f(carX - 1, -59);
        glVertex2f(carX - 7, -59);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(carX + 1, -65);
        glVertex2f(carX + 7, -65);
        glVertex2f(carX + 7, -59);
        glVertex2f(carX + 1, -59);
    glEnd();

    drawWheel(carX - 11, -78);
    drawWheel(carX + 11, -78);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    case 'A':
        carX -= 5;
        break;

    case 'd':
    case 'D':
        carX += 5;
        break;

    case 'n':
    case 'N':
        dayMode = false;
        lightsOn =true;
        break;

    case 'm':
    case 'M':
        dayMode = true;
        lightsOn =false;
        break;

        
    }

    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    Sky();
    road();
    glPushMatrix();
    glTranslatef(88,0,0);
    Trees();
    glPopMatrix();
glPushMatrix();
    glTranslatef(-88,0,0);
    Trees();
    glPopMatrix();
    sidebulding();
    Center();
    GateFrame();
    GateBars();
    Car();
    
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Taif University Gate");

    gluOrtho2D(-100, 100, -100, 100);

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}