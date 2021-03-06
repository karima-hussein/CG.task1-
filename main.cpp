// shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <stdlib.h> //Needed for "exit" function

  //Include OpenGL header files, so that we can use OpenGL

#include <GL/glut.h>


using namespace std;

//Called when a key is pressed
void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y) {    //The current mouse coordinates
	switch (key) {
	case 27: //Escape key
		exit(0); //Exit the program
	}
}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective


//Called when the window is resized
	//Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0,                  //The camera angle
		(double)w / (double)h, //The width-to-height ratio
		1.0,                   //The near z clipping coordinate
		200.0);                //The far z clipping coordinate
}

//Draws the 3D scene
void drawScene() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective



	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glVertex3f(0.5f, 0.25f, -5.0f);
	glVertex3f(-0.5, 0.25f, -5.0f);
	glVertex3f(0.75f, 1.0f, -5.0f);

	glVertex3f(0.75f, 1.0f, -5.0f);
	glVertex3f(-0.5f, 0.25f, -5.0f);
	glVertex3f(-0.75f, 1.0f, -5.0f);

	glVertex3f(0.75f,1.0f, -5.0f);
	glVertex3f(-0.75f, 1.0f, -5.0f);
	glVertex3f(0.0f, 1.5f, -5.0f);
	//////////////////////////

	//Hexagon Done
	glVertex3f(2.5f, 0.25f, -5.0f);
	glVertex3f(1.5f, 0.25f, -5.0f);
	glVertex3f(2.75f, 1.0f, -5.0f);

	glVertex3f(2.75f, 1.0f, -5.0f);
	glVertex3f(1.5f, 0.25f, -5.0f);
	glVertex3f(1.25f, 1.0f, -5.0f);

	glVertex3f(2.75f, 1.0f, -5.0f);
	glVertex3f(1.25f, 1.0f, -5.0f);
	glVertex3f(1.5f, 1.5f, -5.0f);

	glVertex3f(2.75f, 1.0f, -5.0f);
	glVertex3f(1.5f, 1.5f, -5.0f);
	glVertex3f(2.5f, 1.5f, -5.0f);

	/////////////
	//octagon Done
	glVertex3f(-1.5f, 0.0f, -5.0f);
	glVertex3f(-2.5f, 0.0f, -5.0f);
	glVertex3f(-1.0f, 0.5f, -5.0f);

	glVertex3f(-1.0f, 0.5f, -5.0f);
	glVertex3f(-2.5f, 0.0f, -5.0f);
	glVertex3f(-3.0f, 0.5f, -5.0f);

	glVertex3f(-1.0f, 0.5f, -5.0f);
	glVertex3f(-3.0f, 0.5f, -5.0f);
	glVertex3f(-3.0f, 1.5f, -5.0f);

	glVertex3f(-1.0f, 0.5f, -5.0f);
	glVertex3f(-3.0f, 1.5f, -5.0f);
	glVertex3f(-2.5f, 2.0f, -5.0f);

	glVertex3f(-1.0f, 0.5f, -5.0f);
	glVertex3f(-2.5f, 2.0f, -5.0f);
	glVertex3f(-1.5f, 2.0f, -5.0f);

	glVertex3f(-1.0f, 0.5f, -5.0f);
	glVertex3f(-1.5f, 2.0f, -5.0f);
	glVertex3f(-1.0f, 1.5f, -5.0f);

	////////////////////
	//heptaagon Done
	glVertex3f(0.5f, -2.0f, -5.0f);
	glVertex3f(-0.5f, -2.0f, -5.0f);
	glVertex3f(1.0f, -1.0f, -5.0f);

	glVertex3f(1.0f, -1.0f, -5.0f);
	glVertex3f(-0.5f, -2.0f, -5.0f);
	glVertex3f(-1.0f, -1.0f, -5.0f);

	glVertex3f(1.0f, -1.0f, -5.0f);
	glVertex3f(-1.0f, -1.0f, -5.0f);
	glVertex3f(-0.75f, -0.25f, -5.0f);

	glVertex3f(1.0f, -1.0f, -5.0f);
	glVertex3f(-0.75f,-0.25f, -5.0f);
	glVertex3f(0.0f, 0.0f, -5.0f);

	glVertex3f(1.0f, -1.0f, -5.0f);
	glVertex3f(0.0f, 0.0f, -5.0f);
	glVertex3f(0.75f, -0.25f, -5.0f);
	////////
	/** 
	//I missed it up exactly in the 6th triangle (\0.0/) 
	//decagon Done
	glVertex3f(3.0f, -2.0f, -5.0f);
	glVertex3f(2.0f, -2.0f, -5.0f);
	glVertex3f(3.5f, -1.5f, -5.0f);

	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(2.0f, -2.0f, -5.0f);
	glVertex3f(1.5f, -1.5f, -5.0f);

	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(1.5f, -1.5f, -5.0f);
	glVertex3f(1.25f, -1.0f, -5.0f);

	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(1.25f, -1.0f, -5.0f);
	glVertex3f(1.5f, -0.5f, -5.0f);

	glVertex3f(3.5f, 1.5f, -5.0f);
	glVertex3f(1.5f, -0.5f, -5.0f);
	glVertex3f(2.0f, 0.0f, -5.0f);
	
	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(2.0f, 0.0f, -5.0f);
	glVertex3f(3.0f, 0.0f, -5.0f);
    
	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(-2.0f, 0.0f, -5.0f);
	glVertex3f(3.5f, 0.5f, -5.0f);
	
	glVertex3f(3.5f, -1.5f, -5.0f);
	glVertex3f(3.5f, -0.5f, -5.0f);
	glVertex3f(3.75f, -1.0f, -5.0f);
	**/
	


	
	glEnd(); //End triangle coordinates

	glutSwapBuffers(); //Send the 3D scene to the screen
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Set the window size

	//Create the window
	glutCreateWindow("Basic Shapes - videotutorialsrock.com");
	initRendering(); //Initialize rendering

	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}
