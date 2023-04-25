#include <stdarg.h>
#include "main.h"

/**
 * print - The function to parse and print out all arg int the standar output.
 * @format: A string containing all specifiers.
 * @conv_list: A list of converter functions ( specifiers ).
 * @arg_list: A list containing all the argumentents passed to the program.
 *
 * Return: A total count of the characters printed.
 */

int print(const char *format, conv_type conv_list[], va_list arg_list)
{
	int i, j, nb_chars, chars;
	chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; conv_list[j].spec != NULL; j++)
			{
				if (format[i + 1] == conv_list[j].spec[0])
				{
					nb_chars = conv_list[j].func(arg_list);
					if (nb_chars == -1)
						return (-1);
					chars += nb_chars;
					break;
				}
			}
			if (conv_list[j].spec == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				chars += 2;
				}
				else
				return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
	}
	return (chars);
}

/**
 * _printf - The function to be executed for printing
 * @format: The argument in String format that contains the caracters to print and conversion specifiers
 *
 * Return: The length of the string to print
 */

int _printf(const char *format, ...)
{
	int caracter_count;
	conv_type conv_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reverse_string},
		{"R", rot13},
		{"u", print_uns},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	caracter_count = print(format, conv_list, arg_list);

	va_end(arg_list);

	return (caracter_cout);
	return 0;
}
