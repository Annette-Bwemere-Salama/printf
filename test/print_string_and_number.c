#include "main.h"

/**
 * print_rev_str - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 *
 * Return: The amount of characters printed
 */

int print_reverse_string(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);

	if (str == NULL)
		return (-1);

	ptr = rev_str(str);

	if (ptr == NULL)
		return (-1);

	for (len = 0; ptr[len] != '\0'; len++)
		put_character(ptr[len]);

	free(ptr);

	return (len);
}

/**
 * rotter - Converts string to rot13
 * @list: string to convert
 *
 * Return: converted string
 */
int rotter(va_list list)
{
	int i;
	int j;
	char *str;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == from[j])
			{
				put_character(to[j]);
				break;
			}
		}
		if (j == 53)
			put_character(str[i]);
	}
	return (i);
}

/**
 * print_digit_number - prints a number
 * @args: List of arguments
 *
 * Return: The number of digits printed
 */
int print_digit_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += put_character('-');
		num = n * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += put_character('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);

}

/**
 * print_uns_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 *
 * Return: The amount of digits printed
 */
int print_unsigned_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += put_character('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
