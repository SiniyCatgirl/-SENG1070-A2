/*
Programer Name: Trent
Date created:31/01/2025
last updated:27/02/2025
discription:
Handle file input/output operations.
*/
#include "logger.h"


/// <summary>
/// takes the level of the activity and the messge to log, as well as where the log took place
/// </summary>
/// <param name="Level">contains the Level (info, warning, error) for the log</param>
/// <param name="Message">contains the the content of the log message</param>
/// <param name="Function">were the log incedent happened</param>
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
/// <param name="file">the pointer to where the file is stored</param>
void closeLogger(FILE* file) {

	if (fclose(file) == 0) {
		printf("file closed sucsessfully\n");
	}
	else {
		printf("Error closing File\n");
	}
}
