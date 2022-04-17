#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>

using namespace std;



static void Road()
{

    //ROAD
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-80.0f, -20.0f);
	glVertex2f(-80.0f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road (2)
    glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);


	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-90.0f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


    //Left Road angle
	glBegin(GL_QUADS);
	glColor3ub(56, 56, 56);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();


	//Road Divider Line

	glBegin(GL_QUADS);
	glColor3ub(22, 82, 22);


	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-82.0f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Right

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-71.50f, -20.0f);
	glVertex2f(-71.50f, -100.0f);
	glVertex2f(-72.0f, -100.0f);
    glVertex2f(-72.0f, -20.0f);

	glEnd();

	//Road Side Line

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-80.50f, -20.0f);
	glVertex2f(-80.50f, -100.0f);
	glVertex2f(-80.0f, -100.0f);
    glVertex2f(-80.0f, -20.0f);

	glEnd();


	//Road Side Line Left Road L

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-90.50f, -20.0f);
	glVertex2f(-90.50f, -100.0f);
	glVertex2f(-90.0f, -100.0f);
    glVertex2f(-90.0f, -20.0f);

	glEnd();


//Road Side Line Left Road R

    glBegin(GL_QUADS);
	glColor3ub(255,255,224);


	glVertex2f(-81.50f, -20.0f);
	glVertex2f(-81.50f, -100.0f);
	glVertex2f(-82.0f, -100.0f);
    glVertex2f(-82.0f, -20.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 4.0f);
	glVertex2f(-90.5f, -20.0f);
	glVertex2f(-90.0f, -20.0f);
	glVertex2f(-100.0f, 5.0f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255,255,224);

    glVertex2f(-100.0f, 19.0f);
	glVertex2f(-82.5f, -20.0f);
	glVertex2f(-82.0f, -20.0f);
	glVertex2f(-100.0f, 20.0f);


	glEnd();


//	// Road Middle Lines
//
//    glBegin(GL_QUADS);
//	glColor3ub(255, 255, 255);
//
//
//	glVertex2f(-76.0f, -95.0f);
//	glVertex2f(-75.0f, -95.0f);
//	glVertex2f(-75.0f, -87.0f);
//	glVertex2f(-76.0f, -87.0f);
//
//
//   glEnd();



}



static void RoadMiddleLinesR()
{
 glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines R
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

}



static void RoadMiddleLinesL()
{

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0,-6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


}

static void RoadMiddleLinesA()
{

    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines L
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -20.0f);    // x, y
	glVertex2f(-100.0f, 12.0f);

    glEnd();
}


static void PublicBuilding()
{
    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);


	glVertex2f(-4.0f, -1.2f);
	glVertex2f(4.0f, -1.2f);
	glVertex2f(4.0f, 1.2f);
	glVertex2f(-4.0f, 1.2f);


   glEnd();

}
 void leftRoads()
 {
     Road();

	RoadMiddleLinesR();
	RoadMiddleLinesL();
	RoadMiddleLinesA();

 }

static void display(void)
{
    glClearColor(0.0f,1.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    leftRoads();
	/*Road();

	RoadMiddleLinesR();
	RoadMiddleLinesL();
	RoadMiddleLinesA();*/


    glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1500, 720);                 // Initialize GLUT
	glutCreateWindow("City Road side");
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
	glutDisplayFunc(display);

	 // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
