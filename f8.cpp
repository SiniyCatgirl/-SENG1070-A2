/*
* FILE : f4.cpp
* PROJECT : PROG1345 - Focoused 4
* PROGRAMMER : Trent Beitz
* FIRST VERSION : 21-11-23
* DESCRIPTION :
* gives practice with C-style strings, files, command line arguments, and structs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//Constants
const int kArrayLength = 21;

int main(int argc, char *argv[]) {

	//the struct, it containds all the data from the comandline
	struct MyData
	{
		int howMany;
		char theText[kArrayLength];
		char directoryPath[kArrayLength];
		char filename[kArrayLength];
	};

	//checks to see if the user put the corect amount of 
	if (argc != 5) {
		if (argc > 5) {
			printf("ERROR MORE THEN THE ACCSEPTIBEL AMOUNT OF ARGUMENTS INPUTED\nPLEASE INPUT LESS COMMAND-LINE ARGUMENTS");
			return -1;
		}
		else {
			printf("ERROR LESS THEN THE ACCSEPTIBEL AMOUNT OF ARGUMENTS INPUTED\nPLEASE INPUT MORE COMMAND-LINE ARGUMENTS");
			return -1;
		}
	}

	struct MyData myArgs = { 0, "", "", "" };
	strcpy(myArgs.theText, argv[2]);
	strcpy(myArgs.directoryPath, argv[3]);
	strcpy(myArgs.filename, argv[4]);
	myArgs.howMany = atoi(argv[1]);
	
}