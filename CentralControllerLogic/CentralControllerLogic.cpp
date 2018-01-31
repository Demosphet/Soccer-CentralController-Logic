// CentralControllerLogic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

//Intialsing the dimensions of the soccer pitch
int xStart = 0;
int xEnd = 1000;
int yStart = 0;
int yEnd = 1000;

//Class to create player objects
class Players {
public:
	//Intialising the x & y dimensions for the players to determine their direction of travel
	int xPrevious;
	int xNow;
	int yPrevious;
	int yNow;
	bool ballHold;

	//Function to move the players on the soccer pitch
	void move() {
		//Gyroscope and movement logic
		//Triggered by gyroscope
	}

	//Function to kick the ball
	void kick() {
		//Button and kick logic
		//Triggered by button
	}
};

//Class to create ball object
class Ball {
public:
	//Intialising the x & y dimensions for the ball
	int x;
	int y;

	//Function to move the ball on the soccer pitch
	void move() {
		//Ball movement logic
	}
};

int main() {
	//Creating the player objects
	Players p1;
	Players p2;
	Players p3;
	Players p4;
	Players p5;
	Players p6;
	Players p7;
	Players p8;
	Players p9;
	Players p10;
	Players p11;
	Players p12;
	Players p13;
	Players p14;
	//Creating the ball object
	Ball b;

	//Infinite while loop to represent the loop for Arduinos
	while (1) {
		for (int i = 0; i < 15; i++) {
			//Get gyroscope values
				//Include NRF code here
			//Get button value
				//Inclyde NRF code here
			//Update player location
				//P1.move(up,down,left,right)
				//...
				//P14.move(up,down,left,right)
		}
	}

    return 0;
}

