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
void logMessage(const char* Level, int* Message) {
	FILE* output = NULL;
	fopen_s(&output, "program.log", "a");
	if (output == NULL) {
		printf("Error Opening the log file");
	}

	/*char* current_day, * current_time;
	system("date +%F");
	system("date +%T");
	printf("%c", current_day);*/

	closeLogger(output);
}


/// <summary>
/// closes the file that was opened
/// </summary>
/// <param name="file">file</param>
/// <returns>int</returns>
void closeLogger(FILE* file) {

	if (fclose(file) == 0) {
		printf("file closed sucsessfully\n");
	}
	else {
		printf("Error closing File\n");
	}
}
