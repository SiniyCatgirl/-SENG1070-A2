#pragma once
/*
Programer Name: Trent
Date created:31/01/2025
last updated:9/02/2025
discription:
Handle file input/output operations.
*/
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <new.h>
#include <string.h>

int write(const char* data, int* lineNum);

int close(FILE*);
