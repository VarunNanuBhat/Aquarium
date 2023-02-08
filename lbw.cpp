#include<glut.h>
#include<gl.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
static GLfloat spin=45.0,spin1=200.0,bail=1.0,ball=1.0;
void Sprint( int x, int y, char *st)
{
int l,i;
l=strlen( st ); // see how many characters are in text string.
glRasterPos2i( x, y); // location to start printing text
for( i=0; i < l; i++)  // loop until i is greater then l
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]); // Print a character on the screen
}
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
 //CODE FOR BOUNDRY
glColor3f(1.0,1.0,1.0);
glLineWidth(5.0);
glBegin(GL_LINES);
glVertex2f(20.0,1.0);
glVertex2f(10.0,50.0);
glVertex2f(10.0,50.0);
glVertex2f(1.0,200.0);
glVertex2f(1.0,200.0);
glVertex2f(1.0,350.0);
glVertex2f(1.0,350.0);
glVertex2f(10.0,475.0);
glVertex2f(10.0,475.0);
glVertex2f(30.0,525.0);
glVertex2f(30.0,525.0);
glVertex2f(70.0,525.0);
glVertex2f(70.0,525.0);
glVertex2f(85.0,475.0);
glVertex2f(85.0,475.0);
glVertex2f(95.0,350.0);
glVertex2f(95.0,350.0);
glVertex2f(95.0,100.0);
glVertex2f(95.0,100.0);
glVertex2f(85.0,1.0);
glVertex2f(85.0,1.0);
glVertex2f(20.0,1.0);
glEnd();
//CODE FOR FIRST SHADE
glColor3f(0.0,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,475.0);
glVertex2f(1.0,350.0);
    glVertex2f(95.0,350.0);
glVertex2f(85.0,475.0);
glEnd();
//CODE FOR SECOND SHADE
glColor3f(0.0,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,50.0);
glVertex2f(3.0,175.0);
    glVertex2f(95.0,175.0);
glVertex2f(95.0,100.0);
glVertex2f(90.0,50.0);
glEnd();
//CODE FOR THIRD SHADE
glColor3f(0.0,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,475.0);
glVertex2f(30.0,525.0);
    glVertex2f(30.0,1.0);
glVertex2f(20.0,1.0);
glVertex2f(10.0,50.0);
glEnd();
//CODE FOR FIRST SQUARE SHADE
glColor3f(0.0,0.6,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,50.0);
glVertex2f(30.0,50.0);
    glVertex2f(30.0,175.0);
glVertex2f(10.0,175.0);
glEnd();
//CODE FOR SECOND SQUARE SHADE
glColor3f(0.0,0.6,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,475.0);
glVertex2f(30.0,475.0);
    glVertex2f(30.0,350.0);
glVertex2f(10.0,350.0);
glEnd();
//CODE FOR FOURTH SHADE
glColor3f(0.0,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,525.0);
glVertex2f(70.0,525.0);
glVertex2f(85.0,475.0);
glVertex2f(85.0,1.0);
glVertex2f(65.0,1.0);
glEnd();
//CODE FOR THIRD SQUARE SHADE
glColor3f(0.0,0.6,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,475.0);
glVertex2f(85.0,475.0);
    glVertex2f(85.0,350.0);
glVertex2f(65.0,350.0);
glEnd();
//CODE FOR FOURTH SQUARE SHADE
glColor3f(0.0,0.6,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,50.0);
glVertex2f(85.0,50.0);
    glVertex2f(85.0,175.0);
glVertex2f(65.0,175.0);
glEnd();
//CODE FOR PITCH
glColor3f(0.5,0.7,0.0);
glBegin(GL_POLYGON);
    glVertex3f(45.0,405.0,0.0);
    glVertex3f(45.0,132.0,0.0);
    glVertex3f(55.0,132.0,0.0);
    glVertex3f(55.0,405.0,0.0);
glEnd();
//CODE FOR LBW REFERENCE LINE
glColor3f(1.5,1.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(49.0,187.0);
glVertex2f(51.0,187.0);
    glVertex2f(51.0,370.0);
glVertex2f(49.0,370.0);
glEnd();
//CODE FOR CREASE
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
     glVertex2f(40.0,350.0);
    glVertex2f(60.0,350.0);
    glVertex2f(40.0,187.0);
    glVertex2f(60.0,187.0);
glVertex2f(45.0,370.0);
glVertex2f(55.0,370.0);
    glVertex2f(45.0,157.0);
glVertex2f(55.0,157.0);
glVertex2f(45.0,405.0);
glVertex2f(45.0,350.0);
glVertex2f(55.0,405.0);
glVertex2f(55.0,350.0);
glVertex2f(45.0,132.0);
glVertex2f(45.0,187.0);
glVertex2f(55.0,132.0);
    glVertex2f(55.0,187.0);
glEnd();
//CODE FOR WICKETS ON STRIKER SIDE
glBegin(GL_LINES);
//FIRST WICKET
glColor3f(0.9,0.9,0.9);
 glVertex2f(51.0,410.0);
glVertex2f(51.0,370.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(51.0,370.0);
glVertex2f(49.0,390.0);
//SECOND WICKET
    glColor3f(0.9,0.9,0.9);
glVertex2f(50.0,410.0);
glVertex2f(50.0,370.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50.0,370.0);
glVertex2f(48.0,390.0);
//THIRD WICKET
glColor3f(0.9,0.9,0.9);
    glVertex2f(49.0,410.0);
glVertex2f(49.0,370.0);
glColor3f(0.0,0.0,0.0);
    glVertex2f(49.0,370.0);
glVertex2f(47.0,390.0);
    glEnd();
//CODE FOR WICKET ON NON STRIKER SIDE
glBegin(GL_LINES);
//FIRST WICKET
glColor3f(0.9,0.9,0.9);
    glVertex2f(51.0,157.0);
glVertex2f(51.0,197.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(51.0,157.0);
glVertex2f(49.0,177.0);
//SECOND WICKET
glColor3f(0.9,0.9,0.9);
    glVertex2f(50.0,157.0);
glVertex2f(50.0,197.0);
glColor3f(0.0,0.0,0.0);
    glVertex2f(50.0,157.0);
glVertex2f(48.0,177.0);
//THIRD WICKET
glColor3f(0.9,0.9,0.9);
    glVertex2f(49.0,157.0);
glVertex2f(49.0,197.0);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(49.0,157.0);
glVertex2f(47.0,177.0);
glEnd();
//CODE FOR BAILS
glColor3f(1.0,1.0,1.0);
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(49.0,197.0);
glVertex2f(49.2,197.0);
glEnd();
    glLineWidth(5.0);
glBegin(GL_LINES);
glVertex2f(49.2,197.0);
glVertex2f(49.8,197.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(49.8,197.0);
glVertex2f(50.0,197.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(50.0,197.0);
glVertex2f(50.2,197.0);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINES);
glVertex2f(50.2,197.0);
glVertex2f(50.8,197.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(50.8,197.0);
glVertex2f(51.0,197.0);
glEnd();
if(bail==1.0)
{
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(49.0,410.0);
 glVertex2f(49.2,410.0);
   glEnd();
       glLineWidth(5.0);
   glBegin(GL_LINES);
       glVertex2f(49.2,410.0);
   glVertex2f(49.8,410.0);
   glEnd();
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(49.8,410.0);
   glVertex2f(50.0,410.0);
   glEnd();
       glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(50.0,410.0);
   glVertex2f(50.2,410.0);
   glEnd();
   glLineWidth(5.0);
   glBegin(GL_LINES);
   glVertex2f(50.2,410.0);
   glVertex2f(50.8,410.0);
   glEnd();
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(50.8,410.0);
   glVertex2f(51.0,410.0);
   glEnd();
}
//CODE FOR SHADOW OF BAILS
    glColor3f(0.0,0.0,0.0);
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(47.0,177.0);
glVertex2f(47.2,177.0);
glEnd();
    glLineWidth(5.0);
glBegin(GL_LINES);
glVertex2f(47.2,177.0);
glVertex2f(47.8,177.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(47.8,177.0);
glVertex2f(48.0,177.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(48.0,177.0);
glVertex2f(48.2,177.0);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINES);
glVertex2f(48.2,177.0);
glVertex2f(48.8,177.0);
glEnd();
glLineWidth(1.0);
glBegin(GL_LINES);
glVertex2f(48.8,177.0);
glVertex2f(49.0,177.0);
glEnd();
if(bail==1.0)
{
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(47.0,390.0);
   glVertex2f(47.2,390.0);
   glEnd();
       glLineWidth(5.0);
glBegin(GL_LINES);
   glVertex2f(47.2,390.0);
   glVertex2f(47.8,390.0);
   glEnd();
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(47.8,390.0);
   glVertex2f(48.0,390.0);
   glEnd();
       glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(48.0,390.0);
   glVertex2f(48.2,390.0);
   glEnd();
   glLineWidth(5.0);
   glBegin(GL_LINES);
   glVertex2f(48.2,390.0);
glVertex2f(48.8,390.0);
   glEnd();
   glLineWidth(1.0);
   glBegin(GL_LINES);
   glVertex2f(48.8,390.0);
   glVertex2f(49.0,390.0);
   glEnd();
}
//CODE FOR ADVERTISEMENT BOARD
//CODE FOR FIRST BLUE BOARD AND ITS SHADOW
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
    glVertex2f(1.0,350.0);
glVertex2f(0.0,410.0);
glVertex2f(10.0,550.0);
glVertex2f(10.0,475.0);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(1.0,350.0);
glVertex2f(10.0,475.0);
glVertex2f(10.0,525.0);
glVertex2f(1.0,400.0);
glEnd();
//CODE FOR SECOND BLUE BOARD AND ITS SHADOW
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,475.0);
glVertex2f(10.0,550.0);
glVertex2f(30.0,550.0);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,475.0);
glVertex2f(30.0,525.0);
glVertex2f(30.0,550.0);
glVertex2f(10.0,525.0);
glEnd();
//CODE FOR THIRD BLUE BOARD AND ITS SHADOW
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,550.0);
glVertex2f(85.0,540.0);
glVertex2f(85.0,525.0);
    glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,525.0);
glVertex2f(70.0,555.0);
glVertex2f(85.0,525.0);
glVertex2f(85.0,475.0);
 glEnd();
//CODE FOR FOURTH BLUE BOARD AND ITS SHADOW
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(85.0,525.0);
glVertex2f(85.0,540.0);
glVertex2f(95.0,425.0);
glVertex2f(95.0,350.0);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(85.0,525.0);
glVertex2f(85.0,475.0);
glVertex2f(95.0,350.0);
glVertex2f(95.0,400.0);
glEnd();
//CODE FOR FIRST YELLOW BOARD.
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(30.0,550.0);
glVertex2f(70.0,550.0);
glVertex2f(70.0,525.0);
glVertex2f(30.0,525.0);
glEnd();
glColor3f(0.0,0.0,1.0);
Sprint(43,530,"HAWK-EYE");//To display project name.
//CODE FOR SECOND YELLOW BOARD
    glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(95.0,350.0);
glVertex2f(95.0,435.0);
glVertex2f(98.0,150.0);
glVertex2f(95.0,100.0);
glEnd();
//CODE FOR THIRD YELLOW BOARD
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(1.0,350.0);
glVertex2f(0.0,400.0);
glVertex2f(0.0,200.0);
glVertex2f(1.0,200.0);
glEnd();
//CODE FOR FIFTH BLUE BOARD
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,200.0);
glVertex2f(1.0,200.0);
glVertex2f(10.0,50.0);
glVertex2f(6.0,80.0);
glEnd();
//CODE FOR FOURTH YELLOW BOARD
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.0,50.0);
glVertex2f(6.0,80.0);
glVertex2f(15.0,10.0);
glVertex2f(20.0,0.0);
glEnd();
//CODE FOR SIXTH BLUE BOARD
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(95.0,100.0);
glVertex2f(85.0,1.0);
glVertex2f(90.0,30.0);
glVertex2f(98.0,150.0);
    glEnd();
//CODE FOR GURU
glColor3f(0.0,0.5,0.0);
glLineWidth(10.0);
glBegin(GL_LINES);
    glVertex2f(10.0,230.0);
glVertex2f(10.0,280.0);
glVertex2f(10.0,280.0);
glVertex2f(11.0,300.0);
    glVertex2f(11.0,300.0);
glVertex2f(15.0,300.0);
    glVertex2f(15.0,300.0);
glVertex2f(15.0,290.0);
    glVertex2f(10.0,230.0);
glVertex2f(11.0,210.0);
    glVertex2f(11.0,210.0);
glVertex2f(15.0,210.0);
    glVertex2f(15.0,210.0);
glVertex2f(15.0,245.0);
glVertex2f(15.0,245.0);
glVertex2f(12.0,245.0);
    glVertex2f(17.0,210.0);
glVertex2f(17.0,300.0);
    glVertex2f(20.0,300.0);
glVertex2f(20.0,210.0);
    glVertex2f(17.0,210.0);
glVertex2f(20.0,210.0);
    glVertex2f(22.0,208.0);
    glVertex2f(22.0,300.0);
glVertex2f(22.0,300.0);
glVertex2f(25.0,300.0);
glVertex2f(25.0,300.0);
glVertex2f(25.0,250.0);
glVertex2f(25.0,250.0);
glVertex2f(22.0,250.0);
glVertex2f(23.0,250.0);
glVertex2f(25.0,208.0);
glVertex2f(27.0,210.0);
glVertex2f(27.0,300.0);
    glVertex2f(27.0,210.0);
glVertex2f(30.0,210.0);
    glVertex2f(30.0,210.0);
glVertex2f(30.0,300.0);
    glEnd();
//MESSAGE DISPLAY
glColor3f(0.0,0.0,0.0);
Sprint(30, 100, "press left mouse button to move ball");
Sprint(30, 80, "press right mouse button to pitch the ball");
Sprint(30, 60, "press middle mouse button to stop ball");
//CODE FOR PAVAN
glColor3f(0.0,0.5,0.0);
glLineWidth(10.0);
glBegin(GL_LINES);
glVertex2f(66.0,208.0);
glVertex2f(66.0,300.0);
    glVertex2f(66.0,300.0);
glVertex2f(69.3,300.0);
    glVertex2f(69.3,300.0);
glVertex2f(69.3,250.0);
    glVertex2f(69.3,250.0);
glVertex2f(66.0,250.0);
    glVertex2f(70.0,208.0);
glVertex2f(72.0,303.0);
glVertex2f(72.0,303.0);
glVertex2f(74.0,208.0);
    glVertex2f(71.0,245.0);
glVertex2f(73.0,245.0);
    glVertex2f(74.0,300.0);
glVertex2f(76.0,208.0);
    glVertex2f(76.0,208.0);
glVertex2f(78.0,300.0);
glVertex2f(78.0,208.0);
glVertex2f(80.0,303.0);
glVertex2f(80.0,303.0);
glVertex2f(82.0,208.0);
    glVertex2f(79.0,245.0);
glVertex2f(81.0,245.0);
    glVertex2f(83.0,208.0);
glVertex2f(83.0,303.0);
glVertex2f(83.0,303.0);
glVertex2f(86.0,208.0);
    glVertex2f(86.0,208.0);
glVertex2f(86.0,303.0);
    glEnd();
//CODE FOR BALL AND ITS TRANSLATION
    if(ball==1.0)
{
   glPushMatrix();
    glTranslatef(spin,spin1,-15.0);//specify the position where the translation should start.
   glColor3f(1.0,0.0,0.0);
   glutSolidSphere(1.00000,400,421);//ball
   glPopMatrix();
   glutSwapBuffers();
}
glFlush();
glEnd();
}
//CODE FOR MOVEMENT OF BALL BEFORE PITCHING.
void spindisplay()
{
spin=spin+0.04;
spin1=spin1+1.0;
    glutPostRedisplay();
}
//CODE FOR MOVEMENT OF BALL AFTER PITCHING
void spindisplayy()
{
static GLfloat spiny=spin1,spinx=spin;
ball=0.0;
if(spinx>=49.0&&spinx<=51.0)
{
glColor3f(0.0,0.0,0.0);
Sprint(53,310,"pitched inside");
}
else
{
glColor3f(0.0,0.0,0.0);
Sprint(30,260,"pitched outside");
}
    glPushMatrix();
glTranslatef(spinx,spiny,-15.0);
glColor3f(1.0,0.0,0.0);
glutSolidSphere(1.00000,400,421);
glPopMatrix();
glutSwapBuffers();
spiny=spiny+0.5;
if(spinx>=49.0&&spinx<=51.0&&spiny>=410.0)
{
bail=0.0;//make the bails disappear.
}
 glutPostRedisplay();
}
//CODE FOR MOUSE INTERACTION
void mouse(int button,int state,int x,int y)
{
switch(button)
{
case GLUT_LEFT_BUTTON:
if(state==GLUT_DOWN)
    glutIdleFunc(spindisplay);
break;
case GLUT_MIDDLE_BUTTON:
           if(state==GLUT_DOWN)
   glutIdleFunc(NULL);
           break;
    case GLUT_RIGHT_BUTTON:
if(state==GLUT_DOWN)
        glutIdleFunc(spindisplayy);
break;
default:
break;
}
}
int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(500,500);
    glutInitWindowPosition(30,30);
glutCreateWindow("ppp");
glClearColor(0.0,0.6,0.0,0.0);
glOrtho(0.0,100.0,0.0,550.0,-15.0,50.0);
glutDisplayFunc(display);
glutMouseFunc(mouse);
glutMainLoop();
return(0);
}
