/*
Programer Name: Trent
Date created:24/02/2025
last updated:25/02/2025
discription:

*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "test_harness.h"

int fileRead();

int main() {
	char menueChoice[20];	
	int mChoice = 0;
	int isExit = 1;
	int result = 0;
	void(*tFA)() = &test_add;
	void(*tFS)() = &test_subtract;
	void(*tFM)() = &test_multiply;
	void(*tFD)() = &test_divide;
	int(*tFAll)() = &testAll;
	int(*fR)() = &fileRead;
	//menue
	do {
		printf("\nPlease make your selection\nRun individual test (1)\nRun all tests (2)\nView Log file (3)\nExit (4)\n");
		fgets(menueChoice, sizeof(menueChoice), stdin);
		mChoice = atoi(menueChoice);

		//individual tests
		if (mChoice == 1) {
			printf("what test would you like to run\nadd (1)\nsubtract (2)\nmultiply (3)\ndivide (4)\n");
			fgets(menueChoice, sizeof(menueChoice), stdin);
			mChoice = atoi(menueChoice);
			if (mChoice == 1) {
				tFA();
				printf("test compleated and saved to Log file\n");

			}
			else if (mChoice == 2) {
				tFS();
				printf("test compleated and saved to Log file\n");
			}
			else if (mChoice == 3) {
				tFM();
				printf("test compleated and saved to Log file\n");
			}
			else if (mChoice == 4) {
				tFD();
				printf("test compleated and saved to Log file\n");
			}
			else {
				printf("that was not a avalible test, please use the bracketted number to make your selection\n");
			}
		}

		//all tests
		else if (mChoice == 2) {
			printf("running tests\n");
			tFAll();
			printf("all tests compleated and saved to Log file\n");
		}

		//print log file
		else if (mChoice == 3) {
			result = fR();
		}

		else if (mChoice == 4) {
			isExit = 0;
		}
		else {
			printf("That was not a valid option\nPlease use the bracketed numbers to make your selection\n");
		}


	} while (isExit == 1);
}


int fileRead() {
	char line[100] = "\0";
	FILE* log = NULL;
	fopen_s(&log, "program.log", "r");
	if (log == NULL) {
		printf("Error Opening the file\n");
		//exit the file, make a return code
		return -1;
	}
	while (fgets(line, sizeof(line), log)) {
		printf("%s", line);
	}

	if (fclose(log) == 0) {
		printf("file closed sucsessfully\n");
		return 0;
	}
	else {
		printf("Error closing File\n");
		return -2;
	}
}