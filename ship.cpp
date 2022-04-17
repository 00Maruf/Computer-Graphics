#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>

using namespace std;




static void Versity()
{
    //annex 1
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-100.0f, 60.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-85.0f, 80.0f);
    glVertex2f(-100.0f, 70.0f);

	glEnd();


    //annex 2

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-85.0f, 90.0f);
	glVertex2f(-85.0f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);



	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	//annex 3 and EWU
	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-75.0f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, 90.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

    //annex 4 final

    glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-50.0f, 60.0f);
	glVertex2f(-50.0f, 88.0f);
    glVertex2f(-60.0f, 88.0f);

	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(139, 131, 120);


	glVertex2f(-72.5f, 60.0f);
	glVertex2f(-62.5f, 60.0f);
	glVertex2f(-62.5f, 70.0f);
    glVertex2f(-72.5f, 70.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);


	glVertex2f(-71.5f, 72.0f);
	glVertex2f(-63.5f, 72.0f);
	glVertex2f(-60.0f, 75.0f);
    glVertex2f(-75.0f, 75.0f);

	glEnd();

	//for annex 1
	glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f,70.0f);
	glVertex2f(-99.0f, 66.0f);
	glVertex2f(-93.0f, 66.0f);
    glVertex2f(-93.0f, 74.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 75.0f);
	glVertex2f(-91.0f, 66.0f);
	glVertex2f(-86.0f, 66.0f);
    glVertex2f(-86.0f, 79.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(-91.0f, 65.0f);
	glVertex2f(-91.0f, 61.0f);
	glVertex2f(-86.0f, 61.0f);
    glVertex2f(-86.0f, 65.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);


	glVertex2f(-99.0f, 65.0f);
	glVertex2f(-99.0f, 61.0f);
	glVertex2f(-93.0f, 61.0f);
    glVertex2f(-93.0f, 65.0f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);


	glVertex2f(-84.5f, 89.5f);
	glVertex2f(-84.5f, 60.5f);
	glVertex2f(-74.5f, 60.5f);
    glVertex2f(-74.5f, 89.5f);

	glEnd();


	glBegin(GL_QUADS);  //window 1
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 88.0f);
	glVertex2f(-84.0f, 85.0f);
	glVertex2f(-81.0f, 85.0f);
    glVertex2f(-81.0f, 88.0f);

	glEnd();

    glBegin(GL_QUADS);  // window 2
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 88.0f);
	glVertex2f(-78.0f, 85.0f);
	glVertex2f(-76.0f, 85.0f);
    glVertex2f(-76.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);  // window 3
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 84.0f);
	glVertex2f(-84.0f, 81.0f);
	glVertex2f(-81.0f, 81.0f);
    glVertex2f(-81.0f, 84.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 84.0f);
	glVertex2f(-78.0f, 81.0f);
	glVertex2f(-76.0f, 81.0f);
    glVertex2f(-76.0f, 84.0f);
	glEnd();

     glBegin(GL_QUADS);  // window 5
	glColor3ub(255,255,255);


	glVertex2f(-84.0f, 79.0f);
	glVertex2f(-84.0f, 76.0f);
	glVertex2f(-81.0f, 76.0f);
    glVertex2f(-81.0f, 79.0f);

	glEnd();

      glBegin(GL_QUADS);  // window 6
	glColor3ub(255,255,255);


	glVertex2f(-78.0f, 79.0f);
	glVertex2f(-78.0f, 76.0f);
	glVertex2f(-76.0f, 76.0f);
    glVertex2f(-76.0f, 79.0f);

	glEnd();


	//annex 4
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);// window 1


	glVertex2f(-59.0f, 86.0f);
	glVertex2f(-59.0f, 83.0f);
	glVertex2f(-56.0f, 83.0f);
    glVertex2f(-56.0f, 86.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255); //window 2


	glVertex2f(-54.0f, 86.0f);
	glVertex2f(-54.0f, 83.0f);
	glVertex2f(-51.0f, 83.0f);
    glVertex2f(-51.0f, 86.0f);

	glEnd();


	glBegin(GL_QUADS);  //window 3
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 81.0f);
	glVertex2f(-59.0f, 78.0f);
	glVertex2f(-56.0f, 78.0f);
    glVertex2f(-56.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 4
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 81.0f);
	glVertex2f(-54.0f, 78.0f);
	glVertex2f(-51.0f, 78.0f);
    glVertex2f(-51.0f, 81.0f);

	glEnd();

	glBegin(GL_QUADS); //window 5
	glColor3ub(255,255,255);


	glVertex2f(-59.0f, 76.0f);
	glVertex2f(-59.0f, 73.0f);
	glVertex2f(-56.0f, 73.0f);
    glVertex2f(-56.0f, 76.0f);

	glEnd();

	glBegin(GL_QUADS); //window 6
	glColor3ub(255,255,255);


	glVertex2f(-54.0f, 76.0f);
	glVertex2f(-54.0f, 73.0f);
	glVertex2f(-51.0f, 73.0f);
    glVertex2f(-51.0f, 76.0f);

	glEnd();

	// annex 3 EWU design

	// E

	glBegin(GL_QUADS);

	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 86.0f);
	glVertex2f(-71.0f, 86.0f);
    glVertex2f(-71.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 84.0f);
	glVertex2f(-74.0f, 82.0f);
	glVertex2f(-71.0f, 82.0f);
    glVertex2f(-71.0f, 84.0f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 80.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-71.0f, 78.0f);
    glVertex2f(-71.0f, 80.0f);

	glEnd();

	//different one

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-74.0f, 88.0f);
	glVertex2f(-74.0f, 78.0f);
	glVertex2f(-73.0f, 78.0f);
    glVertex2f(-73.0f, 88.0f);
	glEnd();

	//W

	glBegin(GL_QUADS); // same 2
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 88.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-68.0f, 78.0f);
    glVertex2f(-68.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);


	glVertex2f(-66.0f, 88.0f);
	glVertex2f(-66.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //middle one
	glColor3ub(67, 110, 238);


	glVertex2f(-67.5f, 83.0f);
	glVertex2f(-67.5f, 78.0f);
	glVertex2f(-66.5f, 78.0f);
    glVertex2f(-66.5f, 83.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);


	glVertex2f(-69.0f, 80.0f);
	glVertex2f(-69.0f, 78.0f);
	glVertex2f(-65.0f, 78.0f);
    glVertex2f(-65.0f, 80.0f);

	glEnd();

	 //U


	 glBegin(GL_QUADS);   //same 2
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 88.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-63.0f, 78.0f);
    glVertex2f(-63.0f, 88.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(67, 110, 238);

	glVertex2f(-62.0f, 88.0f);
	glVertex2f(-62.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 88.0f);

	glEnd();


	glBegin(GL_QUADS); //common one
	glColor3ub(67, 110, 238);

	glVertex2f(-64.0f, 80.0f);
	glVertex2f(-64.0f, 78.0f);
	glVertex2f(-61.0f, 78.0f);
    glVertex2f(-61.0f, 80.0f);

	glEnd();


	 glBegin(GL_QUADS); //annex 2-3
	glColor3ub(105, 105, 105);

	glVertex2f(-74.5f, 90.0f);
	glVertex2f(-74.5f, 60.0f);
	glVertex2f(-75.0f, 60.0f);
    glVertex2f(-75.0f, 90.0f);

	glEnd();

	glBegin(GL_QUADS); //annex 3-4
	glColor3ub(105, 105, 105);

	glVertex2f(-60.5f, 90.0f);
	glVertex2f(-60.5f, 60.0f);
	glVertex2f(-60.0f, 60.0f);
    glVertex2f(-60.0f, 90.0f);

	glEnd();





}




static void display(void)
{
    glClearColor(0.0f,1.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);






    Versity();

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
