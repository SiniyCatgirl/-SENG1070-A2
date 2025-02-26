/*
Programer Name: Trent
Date created:31/01/2025
last updated:9/02/2025
discription:
Handle file input/output operations.
*/
#include "Logger.h"

/// <summary>
/// 
/// </summary>
/// <param name="data"></param>
/// <param name="lineNum"></param>
/// <returns>int</returns>
void logMessage(const char* Level, const char* Message, const char* Function) {
	struct tm curentTime;
	__time64_t long_time;
	char timebuf[26];
	errno_t err;

	FILE* log = NULL;
	fopen_s(&log, "program.log", "a");
	if (log == NULL) {
		printf("Error Opening the log file");
	}
	/*time_t now = time(NULL);
	printf("\n%d\n",now);*/
	_time64(&long_time);
	// Convert to local time.
	err = _localtime64_s(&curentTime, &long_time);
	err = asctime_s(timebuf, 26, &curentTime);

	//date to file
	//mabe figure out how to fill blank spaces with 0
	fprintf(log, "[%d-%2d-%2d  %2d:%2d:%2d]  ", (curentTime.tm_year + 1900), (curentTime.tm_mon + 1), (curentTime.tm_mday), (curentTime.tm_hour), (curentTime.tm_min), (curentTime.tm_sec));//convert all to numbers, and in 24 hour tme
	fprintf(log, "[%s] %s %s\n", Level, Message, Function);//prints the contence for the log


	closeLogger(log);
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
