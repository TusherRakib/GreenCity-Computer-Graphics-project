#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cstring>

void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

///VARIABLE//
float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

float cloud = 0.0;
float t = 0.0;
float t_stop = t;
float bp = 0.0;
float q = 0.0;
float fi = 0.0;
int b = 0;
int n = 0;
int c = 0;
float _angle_stop = _angle;
float _angle_opposite = 0.0;
float Sun_down = 2.3;
float trn = 0;
float Sun_rise = 0;
float Moon_rise = 4.3;
float Moon_down = 2.3;
float fullscr = 0;
float ron = 0;
///VARIABLE END//

void keyboardown(int key, int x, int y)
{
	switch (key){

	case GLUT_KEY_UP:
		n = 1;

		break;

	case GLUT_KEY_DOWN:
        n= 2;
		break;

    case GLUT_KEY_F1:
        b = 7;
		break;
    case GLUT_KEY_F2:
        b = 8;
		break;



     case GLUT_KEY_F10:
        fullscr = 1;
        break;

    case GLUT_KEY_F9:
        exit(0);
        break;

        case GLUT_KEY_F11:
		c = 1;

		break;

	case GLUT_KEY_F12:
        c= 2;
		break;


	default:
		break;


	}

}

void drawScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units
///---------------------------------------------------------//
/// Mud ///

glPushMatrix();
      glTranslatef(0,-.9,0);
       glBegin(GL_POLYGON);
   glColor3ub	(210,105,30);

    glVertex3f(-7,0,0);
    glVertex3f(-7,.2,0);
    glVertex3f(7,.2,0);
    glVertex3f(7,0,0);

    glEnd();
glPopMatrix();

/// MUD END  ///





///-------------pani----------///




     glPushMatrix(); ///pani
     glTranslatef(0,-2.3,0);
     glScalef(2,1,1);
      glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex3f(5,-1,0);
    glVertex3f(5,.3,0);
    glVertex3f(-5,.3,0);
    glVertex3f(-5,-1,0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(0,-2.3,0);
     glPushMatrix();///dheu
      glTranslatef(5,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	  glPushMatrix();///dheu
      glTranslatef(4,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(3,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(2,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();///dheu
      glTranslatef(1,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(0,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(-1,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(-2,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(-3,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(-4,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu
      glTranslatef(-5,.3,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();



///----------------------------------------------------------------------------------------///

///CLOUD ///

 glPushMatrix();
    glColor3ub(234, 236, 239);
    glTranslatef(cloud,0,0);
    glTranslatef(-6.0,2.3,0);
    glRotatef(-180,0.0,0.0,1.0);
    glScalef(2.1,1,0);
    glutSolidSphere(.4,50,50);
      glEnd();

    glTranslatef(0.0,0.0,0);
    glScalef(1,2.2,0);
    glRotatef(-100,0.0,0.0,1.0);

    glutSolidSphere(.25,50,50);
    glEnd();


    glPopMatrix();

///CLOUD ///

///--------------------------------------------------------------------------------------///

///ROAD //

glPushMatrix();
    glScalef(2.2,0.5,1);

    glPushMatrix();
    glColor3ub(128,128,128);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,-0.35,0.0);
    glVertex3f(4.8,0.2,0.0);
    glVertex3f(-4.8,0.2,0.0);
    glVertex3f(-4.8,-0.35,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128,128,128);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,-1.1,0.0);
    glVertex3f(4.8,-0.55,0.0);
    glVertex3f(-4.8,-0.55,0.0);
    glVertex3f(-4.8,-1.1,0.0);
    glEnd();
    glPopMatrix();

///ROAD ///


///FOOTPATH

glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,0.2,0.0);
    glVertex3f(4.8,0.3,0.0);
    glVertex3f(-4.8,0.3,0.0);
    glVertex3f(-4.8,0.2,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,-1.2,0.0);
    glVertex3f(4.8,-1.1,0.0);
    glVertex3f(-4.8,-1.1,0.0);
    glVertex3f(-4.8,-1.2,0.0);
    glEnd();
    glPopMatrix();

///FOOTHPATH

///--------------------------------------------------------------------------------------///

///DIVIDER ///

glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-4.4,-.47,0.0);
    glVertex3f(-4.3,-.43,0.0);
    glVertex3f(-4.5,-.43,0.0);
    glVertex3f(-4.6,-.47,0.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-3.9,-.47,0.0);
    glVertex3f(-3.8,-.43,0.0);
    glVertex3f(-4.0,-.43,0.0);
    glVertex3f(-4.1,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-3.4,-.47,0.0);
    glVertex3f(-3.3,-.43,0.0);
    glVertex3f(-3.5,-.43,0.0);
    glVertex3f(-3.6,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-2.9,-.47,0.0);
    glVertex3f(-2.8,-.43,0.0);
    glVertex3f(-3.0,-.43,0.0);
    glVertex3f(-3.1,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-2.4,-.47,0.0);
    glVertex3f(-2.3,-.43,0.0);
    glVertex3f(-2.5,-.43,0.0);
    glVertex3f(-2.6,-.47,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,-.47,0.0);
    glVertex3f(-1.8,-.43,0.0);
    glVertex3f(-2.0,-.43,0.0);
    glVertex3f(-2.1,-.47,0.0);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-1.4,-.47,0.0);
    glVertex3f(-1.3,-.43,0.0);
    glVertex3f(-1.5,-.43,0.0);
    glVertex3f(-1.6,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-.9,-.47,0.0);
    glVertex3f(-.8,-.43,0.0);
    glVertex3f(-1.0,-.43,0.0);
    glTranslatef(-1.4,1.6,0);
    glVertex3f(-1.1,-.47,0.0);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(-.4,-.47,0.0);
    glVertex3f(-.3,-.43,0.0);
    glVertex3f(-.5,-.43,0.0);
    glVertex3f(-.6,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(.05,-.47,0.0);
    glVertex3f(.15,-.43,0.0);
    glVertex3f(-.05,-.43,0.0);
    glVertex3f(-.15,-.47,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(4.3,-.47,0.0);
    glVertex3f(4.4,-.43,0.0);
    glVertex3f(4.6,-.43,0.0);
    glVertex3f(4.5,-.47,0.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(3.8,-.47,0.0);
    glVertex3f(3.9,-.43,0.0);
    glVertex3f(4.1,-.43,0.0);
    glVertex3f(4.0,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(3.3,-.47,0.0);
    glVertex3f(3.4,-.43,0.0);
    glVertex3f(3.6,-.43,0.0);
    glVertex3f(3.5,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(2.8,-.47,0.0);
    glVertex3f(2.9,-.43,0.0);
    glVertex3f(3.1,-.43,0.0);
    glVertex3f(3.0,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(2.3,-.47,0.0);
    glVertex3f(2.4,-.43,0.0);
    glVertex3f(2.6,-.43,0.0);
    glVertex3f(2.5,-.47,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(1.8,-.47,0.0);
    glVertex3f(1.9,-.43,0.0);
    glVertex3f(2.1,-.43,0.0);
    glVertex3f(2.0,-.47,0.0);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-.47,0.0);
    glVertex3f(1.4,-.43,0.0);
    glVertex3f(1.6,-.43,0.0);
    glVertex3f(1.5,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(.8,-.47,0.0);
    glVertex3f(.9,-.43,0.0);
    glVertex3f(1.1,-.43,0.0);
    glVertex3f(1.0,-.47,0.0);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f(.3,-.47,0.0);
    glVertex3f(.4,-.43,0.0);
    glVertex3f(.6,-.43,0.0);
    glVertex3f(.5,-.47,0.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,-.55,0.0);
    glVertex3f(4.8,-.35,0.0);
    glVertex3f(-4.8,-.35,0.0);
    glVertex3f(-4.8,-.55,0.0);
    glEnd();
    glPopMatrix();

///DIVIDER ///

///--------------------------------------------------------------------------------------///

///FOOTHPATH GRASS ///
glPushMatrix();
    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.8,-1.4,0.0);
    glVertex3f(4.8,0.5,0.0);
    glVertex3f(-4.8,0.5,0.0);
    glVertex3f(-4.8,-1.4,0.0);
    glEnd();
    glPopMatrix();


glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3f(-3.7,1.6,0.0);
    glVertex3f(-3.9,1.6,0.0);
    glVertex3f(-3.9,1.4,0.0);
    glVertex3f(-3.7,1.4,0.0);
    glPopMatrix();

 glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3f(-3.3,2.0,0.0);
    glVertex3f(-3.5,2.0,0.0);
    glVertex3f(-3.5,1.8,0.0);
    glVertex3f(-3.3,1.8,0.0);
    glPopMatrix();



     glPushMatrix();
    glColor3ub(0,0,255);
    glBegin(GL_QUADS);
    glVertex3f(-3.7,2.0,0.0);
    glVertex3f(-3.9,2.0,0.0);
    glVertex3f(-3.9,1.8,0.0);
    glVertex3f(-3.7,1.8,0.0);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex3f(-3.3,1.6,0.0);
    glVertex3f(-3.5,1.6,0.0);
    glVertex3f(-3.5,1.4,0.0);
    glVertex3f(-3.3,1.4,0.0);
    glPopMatrix();
     glPushMatrix();
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex3f(-3.2,1.2,0.0);
    glVertex3f(-4.0,1.2,0.0);
    glVertex3f(-4.0,1.0,0.0);
    glVertex3f(-3.2,1.0,0.0);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3f(-3.4,0.8,0.0);
    glVertex3f(-3.8,0.8,0.0);
    glVertex3f(-3.8,0.2,0.0);
    glVertex3f(-3.4,0.2,0.0);
    glPopMatrix();

glPushMatrix();
    glColor3ub(192, 192, 192);
    glBegin(GL_QUADS);
    glVertex3f(-3.2,2.2,0.0);
    glVertex3f(-4.0,2.2,0.0);
    glVertex3f(-4.0,0.2,0);
    glVertex3f(-3.2,0.2,0.0);
    glEnd();
    glPopMatrix();

glPushMatrix();
    glColor3ub(105, 105, 105);
    glBegin(GL_QUADS);
    glVertex3f(-3.0,2.1,0.0);
    glVertex3f(-3.2,2.2,0.0);
    glVertex3f(-3.2,0.2,0.0);
    glVertex3f(-3.0,0.1,0.0);
    glPopMatrix();

    glEnd();
    glPopMatrix();
    glPopMatrix();
glPopMatrix();

///FOOTHPATH GRASS ///



///--------------------------------------------------------------------------------------///

///SUN ///
glPushMatrix();

    if( b == 0){
        glTranslatef(3.7,2.3,0);
    }
    if ( b == 7 ){
        glTranslatef(3.7,Sun_down,0);
    }

    if ( b == 8 ){
        glTranslatef(3.7,Sun_rise,0);
    }

	glBegin(GL_POLYGON);
	glColor3ub(255, 247, 0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

glPopMatrix();

///SUN ///

///--------------------------------------------------------------------------------------///

///MOON ///
glPushMatrix();

    if( b == 0){
        glTranslatef(3.7,3.3,0);
    }
    if ( b == 7 ){
        glTranslatef(3.7,Moon_rise,0);
    }

    if ( b == 8 ){
        glTranslatef(3.7,Moon_down,0);
    }

	glBegin(GL_POLYGON);
	glColor3ub(250, 250, 250);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

glPopMatrix();

///MOON ///

///--------------------------------------------------------------------------------------///

///STAR ///

glPushMatrix();
glTranslatef(-5,1.5,0);
 glScalef(0.4,0.4,0);

 glRotatef(20,1.0,0.0,0.0);
 glColor3ub(160, 193, 247);
 ///glRotatef(_angle,0.0,1.0,0.0
 if(b == 8){ glColor3ub(160, 193, 247);}
 if(b == 7){ glColor3ub(255,255,0);}

 glBegin(GL_TRIANGLES);

 glVertex3f(1.1,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);

 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.7,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(0.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(1.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glPopMatrix();

glPushMatrix();
glTranslatef(-2,1.6,0);
 glScalef(0.4,0.4,0);

 glRotatef(20,1.0,0.0,0.0);
 glColor3ub(160, 193, 247);
 if(b == 8){ glColor3ub(160, 193, 247);}
 if(b == 7){ glColor3ub(255,255,0);}


 glBegin(GL_TRIANGLES);

 glVertex3f(1.1,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);

 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.7,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(0.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(1.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glPopMatrix();

glPushMatrix();
glTranslatef(-3.5,1.8,0);
 glScalef(0.4,0.4,0);

 glRotatef(20,1.0,0.0,0.0);
 glColor3ub(160, 193, 247);
 if(b == 8){ glColor3ub(160, 193, 247);}
 if(b == 7){ glColor3ub(255,255,0);}

 glBegin(GL_TRIANGLES);

 glVertex3f(1.1,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);

 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.7,1.1,0);
 glVertex3f(1.4,1.3,0);
 glVertex3f(1.4,1.9,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(0.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex3f(1.4,1.6,0);
 glVertex3f(1.9,1.6,0);
 glVertex3f(1.4,1.3,0);
 glEnd();

 glPopMatrix();

 ///STAR ///

 ///-----------------------------------------------------------------------------------///


///SKY //

glPushMatrix();
glTranslatef(-8,0,0);
glScalef(20,4,1);
glColor3ub(160, 193, 247);
glBegin(GL_QUADS);
if(b == 8){glColor3ub(160, 193, 247);}
if(b == 7){glColor3ub(0, 0, 0);}

glVertex3f(0,0,0);
glVertex3f(1,0,0);
glVertex3f(1,1,0);
glVertex3f(0,1,0);
glEnd();
glPopMatrix();

///SKY //



///RAILLINE ///

 glPushMatrix();

    glPushMatrix();
    glScalef(2,.5,0);

    glPushMatrix();
    glColor3ub(112,128,144);
    glBegin(GL_POLYGON);
    glVertex3f(5,-2.65,0.0);
    glVertex3f(5,-2.60,0.0);
    glVertex3f(-5,-2.60,0.0);
    glVertex3f(-5,-2.65,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(192,192,192);
    glBegin(GL_POLYGON);
    glVertex3f(5,-2.60,0.0);
    glVertex3f(5,-2.50,0.0);
    glVertex3f(-5,-2.50,0.0);
    glVertex3f(-5,-2.60,0.0);
    glEnd();
    glPopMatrix();



     glPushMatrix();
    glColor3ub(112,128,144);
    glBegin(GL_POLYGON);
    glVertex3f(5,-1.90,0.0);
    glVertex3f(5,-1.85,0.0);
    glVertex3f(-5,-1.85,0.0);
    glVertex3f(-5,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(192,192,192);
    glBegin(GL_POLYGON);
    glVertex3f(5,-1.85,0.0);
    glVertex3f(5,-1.75,0.0);
    glVertex3f(-5,-1.75,0.0);
    glVertex3f(-5,-1.85,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-5,-2.65,0.0);
    glVertex3f(-4.9,-2.65,0.0);
    glVertex3f(-4.7,-1.90,0.0);
    glVertex3f(-4.8,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-4.6,-2.65,0.0);
    glVertex3f(-4.5,-2.65,0.0);
    glVertex3f(-4.3,-1.90,0.0);
    glVertex3f(-4.4,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-4.2,-2.65,0.0);
    glVertex3f(-4.1,-2.65,0.0);
    glVertex3f(-3.9,-1.90,0.0);
    glVertex3f(-4.0,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3.8,-2.65,0.0);
    glVertex3f(-3.7,-2.65,0.0);
    glVertex3f(-3.5,-1.90,0.0);
    glVertex3f(-3.6,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3.4,-2.65,0.0);
    glVertex3f(-3.3,-2.65,0.0);
    glVertex3f(-3.1,-1.90,0.0);
    glVertex3f(-3.2,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3.0,-2.65,0.0);
    glVertex3f(-2.9,-2.65,0.0);
    glVertex3f(-2.7,-1.90,0.0);
    glVertex3f(-2.8,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.6,-2.65,0.0);
    glVertex3f(-2.5,-2.65,0.0);
    glVertex3f(-2.3,-1.90,0.0);
    glVertex3f(-2.4,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,-2.65,0.0);
    glVertex3f(-2.1,-2.65,0.0);
    glVertex3f(-1.9,-1.90,0.0);
    glVertex3f(-2.0,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.8,-2.65,0.0);
    glVertex3f(-1.7,-2.65,0.0);
    glVertex3f(-1.5,-1.90,0.0);
    glVertex3f(-1.6,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.4,-2.65,0.0);
    glVertex3f(-1.3,-2.65,0.0);
    glVertex3f(-1.1,-1.90,0.0);
    glVertex3f(-1.2,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0,-2.65,0.0);
    glVertex3f(-0.9,-2.65,0.0);
    glVertex3f(-0.7,-1.90,0.0);
    glVertex3f(-0.8,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.6,-2.65,0.0);
    glVertex3f(-0.5,-2.65,0.0);
    glVertex3f(-0.3,-1.90,0.0);
    glVertex3f(-0.4,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.2,-2.65,0.0);
    glVertex3f(-0.1,-2.65,0.0);
    glVertex3f(0.1,-1.90,0.0);
    glVertex3f(0.0,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-2.65,0.0);
    glVertex3f(0.3,-2.65,0.0);
    glVertex3f(0.5,-1.90,0.0);
    glVertex3f(0.4,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.6,-2.65,0.0);
    glVertex3f(0.7,-2.65,0.0);
    glVertex3f(0.9,-1.90,0.0);
    glVertex3f(0.8,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.0,-2.65,0.0);
    glVertex3f(1.1,-2.65,0.0);
    glVertex3f(1.3,-1.90,0.0);
    glVertex3f(1.2,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.4,-2.65,0.0);
    glVertex3f(1.5,-2.65,0.0);
    glVertex3f(1.7,-1.90,0.0);
    glVertex3f(1.6,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.8,-2.65,0.0);
    glVertex3f(1.9,-2.65,0.0);
    glVertex3f(2.1,-1.90,0.0);
    glVertex3f(2.0,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.2,-2.65,0.0);
    glVertex3f(2.3,-2.65,0.0);
    glVertex3f(2.5,-1.90,0.0);
    glVertex3f(2.4,-1.90,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.6,-2.65,0.0);
    glVertex3f(2.7,-2.65,0.0);
    glVertex3f(2.9,-1.90,0.0);
    glVertex3f(2.8,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.0,-2.65,0.0);
    glVertex3f(3.1,-2.65,0.0);
    glVertex3f(3.3,-1.90,0.0);
    glVertex3f(3.2,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,-2.65,0.0);
    glVertex3f(3.5,-2.65,0.0);
    glVertex3f(3.7,-1.90,0.0);
    glVertex3f(3.6,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.8,-2.65,0.0);
    glVertex3f(3.9,-2.65,0.0);
    glVertex3f(4.1,-1.90,0.0);
    glVertex3f(4.0,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.2,-2.65,0.0);
    glVertex3f(4.3,-2.65,0.0);
    glVertex3f(4.5,-1.90,0.0);
    glVertex3f(4.4,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.6,-2.65,0.0);
    glVertex3f(4.7,-2.65,0.0);
    glVertex3f(4.9,-1.90,0.0);
    glVertex3f(4.8,-1.90,0.0);
    glEnd();
    glPopMatrix();


    glPopMatrix();

///RAILLINE ///


///MUD ///
  glPushMatrix();
      glTranslatef(0,-2.33,0);
       glBegin(GL_POLYGON);
   glColor3ub	(210,105,30);

    glVertex3f(-7,0,0);
    glVertex3f(-7,1,0);
    glVertex3f(7,1,0);
    glVertex3f(7,0,0);

    glEnd();
glPopMatrix();

///MUD ///



///-------------------------------------------END----------------------------------------///
	glutSwapBuffers();
}

void update(int value) {
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 3.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}



    _angle += 2.0f;

	if (_angle > 360) {
		_angle -= 360;
	}

	_angle_opposite -=2.0f;

	if (_angle_opposite > 360){
        _angle_opposite += 360;
	}




	///carfullscr

	if(t<=0)
{
    t+=.06;
}

if(t>=0)
{
    t+=.06;
}

if(t>9)
{

    t=-6;
}


///cloud
if(q<=0)
{
    q+=.004;
}

if(cloud>=0)
{
    cloud+=.004;
}

if(cloud>6)
{

    cloud=-6;
}

    if(b == 7 && Sun_down > 0.5){
        Sun_down -= 0.01f;
        Moon_rise -= 0.01f;
        Moon_down = Moon_rise;
        Sun_rise = Sun_down;

    }

    if(b == 8 && Sun_rise < 2.3 ){
        Sun_rise += 0.01f;
         Moon_down += 0.01f;
         Moon_rise = Moon_down;
        Sun_down = Sun_rise;
    }

    if(fullscr == 1){glutFullScreen();}




	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}


int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1000, 1000);

	//Create the window
	glutCreateWindow("green city");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	//if(fullscr == 1){glutFullScreen();}
///	glutFullScreen();

	glutReshapeFunc(handleResize);
    glutSpecialFunc(keyboardown);
///     glutSpecialFunc(keyboarlower1);
	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}

