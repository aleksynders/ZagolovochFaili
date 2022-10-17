#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

char* Soedinenie(char* a, char* b);
int ConvertToInt(char* s);
char* ConvertToString(int n);

int Summa(int a, int b)
{
	return a + b;
}

int Raznost(int a, int b)
{
	return a - b;
}

int Proizved(int a, int b)
{
	return a * b;
}

float Chastnoe(int a, int b)
{
	return (float)a / (float)b;
}