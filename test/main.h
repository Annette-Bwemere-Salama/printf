#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct printer_convert - a structure for specifiers and functions in the project
*
* @spec: A variable for the specifier
* @func: A variable for a function
*/
typedef struct printer_converter
{
	char *spec;
	int (*func)(va_list);
} conv_type;

/** The prototypes */

int print(const char *format, conv_type conv_list[], va_list arg_list);

int _printf(const char *format, ...);

int print_unsigned_number(unsigned int n);

int print_percentage(__attribute__((unused))va_list list);

int hexadecimal_checker(int num, char x);

int print_bin(va_list list);

int print_octal_number(va_list list);

int print_hexadecimal_lower(va_list list);

int print_hexadecimal_upper(va_list list);

int put_character(char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *rev_str(char *s);

void write_str(char *str);

unsigned int number_len(unsigned int num, int base);

int print_reverse_string(va_list arg);

int rotter(va_list list);

int print_digit_number(va_list args);

int print_integer(va_list list);

int print_unsigned(va_list list);

int print_string(va_list list);

int print_character(va_list list);

int print_string_non_printable(va_list arg_list);

#endif
