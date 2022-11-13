#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

float windowWidth=1600;
float windowHeight=1000;
float s=0;
float c=0;
float b=0;
bool suns=false;
bool cloudc=false;
bool boatb=false;

void sky(void)
{
glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,1.0,1.0);
		glVertex2f(-50,50);
		glVertex2f(-50,-15);
		glVertex2f(50,10);
		glVertex2f(50,50);
	glEnd();
    glPopMatrix();


}

void tree(void){

  glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0,0,0);
		glVertex2f(10,-10);
		glVertex2f(10,-25);
		glVertex2f(11.5,-25);
		glVertex2f(11.5,-10);
	glEnd();
    glPopMatrix();


    glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3f(0,100,0);
		glVertex2f(6,-10);
		glVertex2f(11,9);
		glVertex2f(16,-10);
	glEnd();
    glPopMatrix();
}


void river(void)//shape of river
{
     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(0,0,205);
		glVertex2f(-50,-20);
		glVertex2f(-50,-40);
		glVertex2f(50,-40);
		glVertex2f(50,-20);


    glPopMatrix();
    glEnd();
}

void sun()  // size of sun
{
    glPushMatrix();

    glColor3ub(255,140,0);
    glTranslatef(25+s,20,0);
    glScalef(1,.5,0);
    glutSolidSphere(5.5,100,7);

    glPopMatrix();
    glEnd();

}
void cloud(void)  //size of cloud
{

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-25+c,20,0);
    glScalef(0.5,0.5,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-22+c,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

     glPopMatrix();
    glEnd();



    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-28+c,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();


}

void ground(void)
{
glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,215,0);
		glVertex2f(-50,2);
		glVertex2f(-50,-50);
		glVertex2f(50,-50);
		glVertex2f(50,10);
	glEnd();
    glPopMatrix();


}


void tri(void)
{
glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3ub(189,183,107);
		glVertex2f(5,10);
		glVertex2f(1,0);
		glVertex2f(10,0);
	glEnd();
    glPopMatrix();


}


void home(void)
{
glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(255,20,147);
		glVertex2f(-40,-35);
		glVertex2f(-40,-45);
		glVertex2f(-25,-45);
		glVertex2f(-25,-35);
	glEnd();
    glPopMatrix();

    glPushMatrix();//door
      glBegin(GL_QUADS);
		glColor3ub(128,0,0);
		glVertex2f(-33.5,-38);
		glVertex2f(-33.5,-45);
		glVertex2f(-30.5,-45);
		glVertex2f(-30.5,-38);
	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(47,79,79);
		glVertex2f(-40,-45);
		glVertex2f(-43,-48);
		glVertex2f(-20,-48);
		glVertex2f(-25,-45);
	glEnd();
    glPopMatrix();


}


void boat(void)//boat
{
   glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(244,164,96);
		glVertex2f(15+b,-40);
		glVertex2f(23+b,-43);
		glVertex2f(30+b,-43);
		glVertex2f(35+b,-40);
	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3f(139,0,0);
		glVertex2f(26+b,-35);
		glVertex2f(22.5+b,-40);
		glVertex2f(30+b,-40);
	glEnd();
    glPopMatrix();


}





	void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-50, 50, -50, 50);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

    sky();
    cloud();
    sun();
    ground();
    river();


     glPushMatrix();//cloud 2
    glTranslatef(32,6.9,0);
    cloud();
    glEnd();
    glPopMatrix();


     glPushMatrix();//cloud 2
    glTranslatef(10,6.9,0);
    cloud();
    glEnd();
    glPopMatrix();



    glPushMatrix();//cloud 3
    glTranslatef(32,6.9,0);
    cloud();
    glEnd();
    glPopMatrix();


        glPushMatrix();//house shade 1
    glTranslatef(-42,-2,0);
    glScalef(1.75,1,1);
    tri();
    glEnd();
    glPopMatrix();


     glPushMatrix();//tree 1
    glTranslatef(-10,10,0);
    tree();
    glEnd();
    glPopMatrix();



     glPushMatrix();//tree 2
    glTranslatef(-3,12,0);
    tree();
    glEnd();
    glPopMatrix();

    glPushMatrix();//tree 3
    glTranslatef(6,15,0);
    tree();
    glEnd();
    glPopMatrix();





    glPushMatrix();//home 2
    glTranslatef(20,33,0);
    home();
    glEnd();
    glPopMatrix();


    glPushMatrix();//home 1
    glTranslatef(0,33,0);
    home();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0,5,0);
    boat();
    glEnd();
    glPopMatrix();

        glPushMatrix();//shade 2
    glTranslatef(-22,-2,0);
    glScalef(1.75,1,1);
    tri();
    glEnd();
    glPopMatrix();


  glFlush();
    glutSwapBuffers();

}

void button( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'S':
        suns = true;

        glutPostRedisplay();
        break;
    case 's':
        suns = false;
        glutPostRedisplay();
        break;

        case 'C':
        cloudc = true;

        glutPostRedisplay();
        break;
    case 'c':
        cloudc = false;
        glutPostRedisplay();
        break;

        case 'B':
        boatb = true;

        glutPostRedisplay();
        break;
    case 'b':
        boatb = false;
        glutPostRedisplay();
        break;


    }

        }
        void movesun()
{
    if(suns == true)
    {
        s += 0.002;
        if(s > 100)
            s = -60;
    }
    else if (suns == false)
    {
        s = 1;

    }

}

 void movecloud()
{
    if(cloudc == true)
    {
        c += 0.002;
        if(c > 100)
            c = -60;
    }
    else if (cloudc == false)
    {
        c = 1;

    }

}
 void moveboat()
{
    if(boatb == true)
    {
        b += 0.002;
        if(b > 100)
            b = -60;
    }
    else if (boatb == false)
    {
         b=1;

    }

}


void animation (void){


    movesun();
    movecloud();
    moveboat();

    glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Home");

    glutKeyboardFunc(button);
    glutIdleFunc(animation);



    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
