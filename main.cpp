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
    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();

    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-76.0f, -98.0f);    // x, y
	glVertex2f(-76.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, -6.0,0.0);
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
    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


     glTranslatef(0.0, 6.0,0.0);
    glLineWidth(2.5);
	glBegin(GL_LINES);              //road lines
	glColor3ub(255,255,255);

	glVertex2f(-86.0f, -98.0f);    // x, y
	glVertex2f(-86.0f, -94.0f);

    glEnd();


    glTranslatef(0.0, 6.0,0.0);
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


static void Building()
{
    glPushMatrix();
    glTranslatef(10.0f,10.0f,0.0f);
    //Building Body
    glBegin(GL_POLYGON);
	glColor3ub(238, 233, 233);


	glVertex2f(50.0f, -30.0f);
	glVertex2f(75.0f, -30.0f);
	glVertex2f(75.0f, 14.0f);
	glVertex2f(74.0f, 14.0f);
	glVertex2f(74.0f, 15.0f);
	glVertex2f(51.0f, 15.0f);
	glVertex2f(51.0f, 14.0f);
	glVertex2f(50.0f, 14.0f);


   glEnd();

//Building Rooftop design
    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(56.0f, 15.0f);
    glVertex2f(69.0f, 15.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(56.0f, 18.0f);

	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 233, 233);

    glVertex2f(59.0f, 18.0f);
    glVertex2f(66.0f, 18.0f);
    glVertex2f(66.0f, 20.0f);
    glVertex2f(59.0f, 20.0f);

	glEnd();


	//Block Gates Design Left
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(55.0f, -29.0f);
    glVertex2f(62.0f, -29.0f);
    glVertex2f(62.0f, 13.0f);
    glVertex2f(55.0f, 13.0f);

	glEnd();



//Block Gates Design Right
	 glBegin(GL_QUADS);
	glColor3ub(139, 119, 101);

    glVertex2f(63.0f, -29.0f);
    glVertex2f(70.0f, -29.0f);
    glVertex2f(70.0f, 13.0f);
    glVertex2f(63.0f, 13.0f);

	glEnd();


	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(50.0f, 14.0f);    // x, y
	glVertex2f(75.0f, 14.0f);

    glEnd();



	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(51.0f, 15.0f);    // x, y
	glVertex2f(74.0f, 15.0f);

    glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(238, 118, 33);

	glVertex2f(56.0f, 18.0f);    // x, y
	glVertex2f(69.0f, 18.0f);

    glEnd();


    glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(65, 65, 65);

	glVertex2f(50.0f, -30.50f);    // x, y
	glVertex2f(75.0f, -30.50f);

    glEnd();


    //Building windows Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);


    glPushMatrix();
    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(50.5f, -26.0f);
    glVertex2f(52.5f, -26.0f);
    glVertex2f(52.5f, -21.0f);
    glVertex2f(50.5f, -21.0f);

    glEnd();



    //Building small windows Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);


    glPushMatrix();
    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(53.0f, -23.0f);
    glVertex2f(54.5f, -23.0f);
    glVertex2f(54.5f, -20.0f);
    glVertex2f(53.0f, -20.0f);

    glEnd();


    //Building Window divider
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, 8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


     glTranslatef(0.0, 8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, 8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(51.5f, -26.0f);    // x, y
	glVertex2f(51.5f, -21.0f);

    glEnd();

     //Building windows Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);


    glPushMatrix();
    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(72.5f, -26.0f);
    glVertex2f(74.5f, -26.0f);
    glVertex2f(74.5f, -21.0f);
    glVertex2f(72.5f, -21.0f);

    glEnd();



     //Building small windows Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);


    glPushMatrix();
    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(70.5f, -23.0f);
    glVertex2f(72.0f, -23.0f);
    glVertex2f(72.0f, -20.0f);
    glVertex2f(70.5f, -20.0f);

    glEnd();


//Building Window divider Right
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    glPushMatrix();
    glTranslatef(0.0, -8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


     glTranslatef(0.0, -8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


     glTranslatef(0.0, -8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


     glTranslatef(0.0, -8.0,0.0);
    glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(73.5f, -26.0f);    // x, y
	glVertex2f(73.5f, -21.0f);

    glEnd();


    //Building Door Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -29.0f);
    glVertex2f(61.3f, -29.0f);
    glVertex2f(61.3f, -22.0f);
    glVertex2f(55.7f, -22.0f);

    glEnd();

     //Building Door Right

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -29.0f);
    glVertex2f(69.3f, -29.0f);
    glVertex2f(69.3f, -22.0f);
    glVertex2f(63.7f, -22.0f);

    glEnd();

    //Building Middle Window Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);


    glPushMatrix();
    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

    glEnd();


    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(55.7f, -20.0f);
    glVertex2f(57.7f, -20.0f);
    glVertex2f(57.7f, -14.0f);
    glVertex2f(55.7f, -14.0f);

    glEnd();

    //Building Middle Big Door

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);


    glPushMatrix();
    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(58.3f, -20.0f);
    glVertex2f(61.3f, -20.0f);
    glVertex2f(61.3f, -14.0f);
    glVertex2f(58.3f, -14.0f);

    glEnd();



    //Building Middle Window Left

	glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);



    glPushMatrix();
    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();

    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();

    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();

    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();

    glTranslatef(0.0, 8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(63.7f, -20.0f);
    glVertex2f(66.7f, -20.0f);
    glVertex2f(66.7f, -14.0f);
    glVertex2f(63.7f, -14.0f);

    glEnd();



    //Building Middle Big Door

    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

    glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);


    glPushMatrix();
    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

     glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

     glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();


    glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

     glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();

      glTranslatef(0.0, -8.0, 0.0);
    glBegin(GL_QUADS);
	glColor3ub(36, 36, 36);

     glVertex2f(66.9f, -20.0f);
    glVertex2f(68.9f, -20.0f);
    glVertex2f(68.9f, -14.0f);
    glVertex2f(66.9f, -14.0f);

    glEnd();

    glPopMatrix();



}


static void BuildingMidleDoorL()
{



}


static void BuildingWindowL()
{

}

static void BuildingWindowR()
{


}

static void BuildingDoor()
{




}

static void BuildingMidleDoorR()
{




}


static void Park()
{

   // Park Body


   glBegin(GL_QUADS);
	glColor3ub(34, 139, 34);

    glVertex2f(50.0f, -35.0f);
    glVertex2f(50.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -35.0f);

    glEnd();


   //Park Upper Road

	glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -46.0f);
    glVertex2f(100.0f, -46.0f);
    glVertex2f(100.0f, -40.0f);
    glVertex2f(51.0f, -40.0f);

    glEnd();

    //Park Down Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(51.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(51.0f, -94.0f);

    glEnd();


    //Park Middle 1st Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(58.0f, -46.0f);
    glVertex2f(58.0f, -94.0f);
    glVertex2f(62.0f, -94.0f);
    glVertex2f(62.0f, -46.0f);

    glEnd();

    //Park Middle 2nd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(74.0f, -46.0f);
    glVertex2f(74.0f, -94.0f);
    glVertex2f(78.0f, -94.0f);
    glVertex2f(78.0f, -46.0f);

    glEnd();

    //Park Middle 3rd Road

    glBegin(GL_QUADS);
	glColor3ub(222, 184, 135);

    glVertex2f(96.0f, -46.0f);
    glVertex2f(96.0f, -94.0f);
    glVertex2f(100.0f, -94.0f);
    glVertex2f(100.0f, -46.0f);

    glEnd();


    glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(139, 26, 26);

    glVertex2f(50.0f, -39.0f);
    glVertex2f(50.0f, -100.0f);

     glEnd();


      //Park Lamp post 1

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(72.5f, -35.0f);
    glVertex2f(72.5f, -49.0f);
    glVertex2f(73.2f, -49.0f);
    glVertex2f(73.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(72.3f, -49.50f);
    glVertex2f(73.5f, -49.50f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -38.0f);
    glVertex2f(72.60f, -34.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(73.10f, -38.0f);
    glVertex2f(73.10f, -34.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.60f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(72.90f, -34.50f);
    glVertex2f(75.0f, -34.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(71.50f, -34.50f);
    glVertex2f(70.50f, -34.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(74.0f, -34.50f);
    glVertex2f(75.0f, -34.50f);

     glEnd();








     //Park Lamp post 2

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(93.5f, -35.0f);
    glVertex2f(93.5f, -49.0f);
    glVertex2f(94.2f, -49.0f);
    glVertex2f(94.2f, -35.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(93.3f, -49.50f);
    glVertex2f(94.5f, -49.50f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.60f, -38.0f);
    glVertex2f(93.60f, -34.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(94.10f, -38.0f);
    glVertex2f(94.10f, -34.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.60f, -34.50f);
    glVertex2f(91.50f, -34.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(93.90f, -34.50f);
    glVertex2f(96.0f, -34.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(92.50f, -34.50f);
    glVertex2f(91.50f, -34.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(95.0f, -34.50f);
    glVertex2f(96.0f, -34.50f);

     glEnd();





     //Park Down Lamp post 3

    glBegin(GL_QUADS);
	glColor3ub(139, 69, 19);

    glVertex2f(62.5f, -80.0f);
    glVertex2f(62.5f, -91.0f);
    glVertex2f(63.2f, -91.0f);
    glVertex2f(63.2f, -80.0f);

    glEnd();


    glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(139, 69, 19);

    glVertex2f(62.3f, -91.0f);
    glVertex2f(63.5f, -91.0f);

     glEnd();



    glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.60f, -79.0f);
    glVertex2f(62.60f, -83.0f);

     glEnd();


      glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(63.10f, -79.0f);
    glVertex2f(63.10f, -83.0f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.60f, -79.50f);
    glVertex2f(60.50f, -79.50f);

     glEnd();



      glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(115, 115, 115);

    glVertex2f(62.90f, -79.50f);
    glVertex2f(65.0f, -79.50f);

     glEnd();



     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(61.50f, -79.50f);
    glVertex2f(60.50f, -79.50f);

     glEnd();


     glLineWidth(3.50);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);

    glVertex2f(64.0f, -79.50f);
    glVertex2f(65.0f, -79.50f);

     glEnd();
}

static void display(void)
{
    glClearColor(0.0f,1.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	Road();
	RoadMiddleLinesL();
	RoadMiddleLinesR();
	RoadMiddleLinesA();
    Building();
    BuildingDoor();
    BuildingWindowL();
    BuildingWindowR();
    BuildingMidleDoorL();
    BuildingMidleDoorR();
    Park();

    glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1500, 720);                 // Initialize GLUT
	glutCreateWindow("City Road side");
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
	glutDisplayFunc(display);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
