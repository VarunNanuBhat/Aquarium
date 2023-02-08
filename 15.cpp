#include<glut.h>
#include<gl.h>
#include<stdio.h>
GLfloat ver[][3]={
	-0.5,-0.5,-0.5,
	-0.5, 0.5,-0.5,
	 0.5, 0.5,-0.5,
	 0.5,-0.5,-0.5,
	-0.5,-0.5,0.5,
	-0.5,0.5, 0.5,
	 0.5, 0.5, 0.5,
	 0.5,-0.5, 0.5};
GLfloat nor[][3]={
	-0.5,-0.5,-0.5,
	-0.5, 0.5,-0.5,
	 0.5, 0.5,-0.5,
	 0.5,-0.5,-0.5,
	-0.5,-0.5,0.5,
	-0.5,0.5, 0.5,
	 0.5, 0.5, 0.5,
	 0.5,-0.5, 0.5};
GLfloat col[][3]={
	0,0,0,
	0,0,1,
	0,1,0,
	0,1,1,
	1,0,0,
	1,0,1,
	1,1,0,
	1,1,1};
void Polygon(int a,int b,int c,int d)
{
	glBegin(GL_POLYGON);
	glColor3fv(col[a]);glNormal3fv(nor[a]);glVertex3fv(ver[a]);
	glColor3fv(col[b]);glNormal3fv(nor[b]);glVertex3fv(ver[b]);
	glColor3fv(col[c]);glNormal3fv(nor[c]);glVertex3fv(ver[c]);
	glColor3fv(col[d]);glNormal3fv(nor[d]);glVertex3fv(ver[d]);
glEnd();
}
void ColorCube()
{
Polygon(0,3,2,1);
Polygon(4,7,6,5);
Polygon(1,2,6,5);
Polygon(0,4,5,1);
Polygon(0,3,7,4);
Polygon(4,7,6,5);
}
static GLfloat theta[]={0,0,0,0};
static GLint axis=2;
static GLdouble viewer[]={0,0,1};

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
gluLookAt(viewer[0],viewer[1],viewer[2],0,0,0,0,1,1);
glRotated(theta[0],1,0,0);
glRotated(theta[1],0,1,0);
glRotated(theta[2],0,0,1);
ColorCube();
glFlush();
glutSwapBuffers();
}

void mouse(int bin,int state,int n,int y)
{
if(bin==GLUT_LEFT_BUTTON && state==GLUT_DOWN) axis=0;
if(bin==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN) axis=1;
if(bin==GLUT_RIGHT_BUTTON && state==GLUT_DOWN) axis=2;
theta[axis]+=2;
if(theta[axis]>360) theta[axis]=-360;
glutPostRedisplay();}

void reshape(int w,int h)
{
glViewport(0,0,w,h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w<=h) 
glOrtho(-1,1,(float)-h/w,(float)h/w,-10,10);
else 
glOrtho((float)-w/h,(float)w/h,-1,1,-10,10);
glMatrixMode(GL_MODELVIEW);
}

void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutCreateWindow("cube spin with viewers");
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutMouseFunc(mouse);
glEnable(GL_DEPTH_TEST);
glutMainLoop();}

