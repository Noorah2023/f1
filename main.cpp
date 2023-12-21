#include<windows.h>
#include<GL/glut.h>
void init(void){
glClearColor(1,1,1,0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,400,0,400);
}


void home(void){
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(231, 76, 60 );
glBegin(GL_POLYGON);
glVertex2i(350,50);
glVertex2i(120,50);
glVertex2i(120,210);
glVertex2i(350,210);
glEnd();


glColor3ub( 169, 50, 38);
glBegin(GL_POLYGON);
glVertex2i(250,50);
glVertex2i(210,50);
glVertex2i(210,110);
glVertex2i(250,110);
glEnd();

glColor3ub(241, 196, 15  );
glRecti(230,90 ,240,80 );

glColor3ub(93, 173, 226 );
glBegin(GL_POLYGON);
glVertex2i(180,150);
glVertex2i(140,150);
glVertex2i(140,180);
glVertex2i(180,180);
glEnd();

glColor3ub(93, 173, 226 );
glBegin(GL_POLYGON);
glVertex2i(330,150);
glVertex2i(290,150);
glVertex2i(290,180);
glVertex2i(330,180);
glEnd();


glColor3ub( 23, 32, 42);
glBegin(GL_LINES);
glVertex2i(160,150);
glVertex2i(160,180);

glVertex2i(180,165);
glVertex2i(140,165);
glEnd();

glColor3ub( 23, 32, 42);
glBegin(GL_LINES);
glVertex2i(310,150);
glVertex2i(310,180);

glVertex2i(330,165);
glVertex2i(290,165);
glEnd();

glColor3ub(189, 195, 199 );
glRecti(140,300,160,240);

glColor3ub( 205, 97, 85);
glBegin(GL_TRIANGLES);
glVertex2i(360,200);
glVertex2i(100,200);
glVertex2i(220,300);
glEnd();


glFlush();
}


int main (int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(10,10);
glutCreateWindow("HOME");
init();
glutDisplayFunc(home);
glutMainLoop();
}


