#include<GL/glut.h>
#include<stdio.h>
void drawTrianlge(){
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(0.0,1.0);
glVertex2f(-0.9,-0.9);
glVertex2f(0.9,-0.9);
glEnd();
glFlush();
}
int main(int argc , char ** argv){
glutInit(&argc,argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("Triangle");
glutDisplayFunc(drawTrianlge);
glutMainLoop();
return 0;
}
