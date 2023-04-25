#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct converter - defines a structure for specifiers and functions
*
* @spec: The specifier
* @func: The function associated
*/
typedef struct converter
{
	char *spec;
	int (*func)(va_list);
} conv_type;

int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_str(char *s);
void write_str(char *str);
unsigned int num_len(unsigned int num, int base);
int print_reverse_string(va_list arg);
int rotter(va_list list);
int print_digit_number(va_list args);
int print_unsigned_number(unsigned int n);
int print_percentage(__attribute__((unused))va_list list);
int hexadecimal_checker(int num, char x);
int print_bin(va_list list);
int print_octal_number(va_list list);
int print_hexadecimal_lower(va_list list);
int print_hexadecimal_upper(va_list list);
int print_integer(va_list list);
int print_unsigned(va_list list);
int print_string(va_list list);
int print_character(va_list list);
int print(const char *format, conv_type conv_list[], va_list arg_list);
int _printf(const char *format, ...);

#endif
