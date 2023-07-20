#include "variadic_functions.h"
#include <stdio.h>
#include <sstdio.h>

/**
 * print_all - Prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);
	
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					print("%s%c", sep,va_
