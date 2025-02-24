/*
Programer Name: Trent
Date created:31/01/2025
last updated:9/02/2025
discription:
Handle file input/output operations.
*/
#include "Loging.h"

/// <summary>
/// 
/// </summary>
/// <param name="data"></param>
/// <param name="lineNum"></param>
/// <returns>int</returns>
int write(const char* data, int* lineNum) {
	FILE* output = NULL;
	fopen_s(&output, "program.log", "a");
	if (output == NULL) {
		printf("Error Opening the File");
		return -1;
	}

	

	close(output);
	return 0;
}


/// <summary>
/// closes the file that was opened
/// </summary>
/// <param name="file">file</param>
/// <returns>int</returns>
int close(FILE* file) {

	if (fclose(file) == 0) {
		printf("file closed sucsessfully\n");
		return 0;
	}
	else {
		printf("Error closing File\n");
		return -1;
	}
}
