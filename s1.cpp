#include<GL/glut.h>
#include<stdio.h>

void tableleg()
{
glPushMatrix();
glTranslated(0,-3.5,0);
glScaled(0.05,1.0,0.05);
glutSolidCube(5);
glPopMatrix();

}


void table()
{
glPushMatrix();
glTranslated(0,-1,0);
glScaled(1,0.05,1);
glutSolidCube(10);
glPopMatrix();
glPushMatrix();
glTranslated(-4,0,4);
tableleg();
glTranslated(0,0,-8);
tableleg();
glTranslated(8,0,0);
tableleg();
glTranslated(0,0,8);
tableleg();
glPopMatrix();
}

void init()
{
float mdiff[]={0.8,0.8,0.7,1};
float mambi[]={0.7,0.7,0.7,1};
float mspec[]={1,1,1,1};
float mshi[]={10};

glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,mambi);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,mdiff);
glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,mspec);
glMaterialfv(GL_FRONT_AND_BACK,GL_SHININES,mshi);

float lambi[]={0,0,0,0};
float ldiff[]={1,1,1,1};
float lspec[]={1,1,1,1};
glLightfv(GL_LIGTH0,GL_AMBIENT,lambi);
glLightfv(GL_LIGTH0,GL_DIFFUSE,ldiff);
glLightfv(GL_LIGTH0,GL_SPECULAR,lspec);

glShapeModel(GL_SMOOTH);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_DEPTH_TEST);
glClearColor(0.1,0.1,0.1,,1);
glColor3f(1,0,0);
float lint[]={0.6,0.6,0.5,1.0};
float lpos[]={3,7,3,0};
glLightfv(GL_LIGHT0,GL_DIFFUSE,lint);
glLightfv(GL_LIGHT0,GL_POISTION,lpos);
}

void display(void)
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10,10,-10,10,-10,10);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(4,0,0,-5,-2,-5,0,1,0);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glPushMatrix();
glutSolidTeapot(1);
glPopMatrix();
glPushMatrix();
table();
glPopMatrix();
glFlush();
}

void main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutCreateWindow("tea");
glClearColor(0.1,0.1,0.1,1);
Init();
glutDisplayFunc(display);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glShapeModel(GL_SMOOTH);
glEnable(GL_DEPTH_TEST);
glEnable(GL_NORMALIZE);
glutMainLoop();
}




