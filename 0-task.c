#include "main.h"
/**
 * handle_char - Handle a single character
 * @args: argument list
 * @count: character length
 * Return: 1 // since it's justa single character and that's the lenghtof a
 * single character
 */

int handle_char(va_list args, int *count)
{
	int i = va_arg(args, int);

	_putchar(i);
	(*count)++;
	return (1);
}

/**
 * handle_string - Handle strings specifier
 * @args: argument list
 * @count: character length
 * Return: length of string read
 */

int handle_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		(*count)++;
		len++;
	}
	return (len);
}

/**
 * handle_percent - Handle percent specifier
 * @count: character length to be returned
 * @args:second para
 * Return: length of string read
 */

int handle_percent(va_list args, int *count)
{
	_putchar('%');
	(*count)++;
	return (1);
}

/**
 * power - function that handles power
 * @base:base num
 * @exponent:expon num
 * Return:results
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}
	return (result);
}
/**
 * handle_integer - Handle integer specifier
 * @args: argument list
 * Return: length of string read
 */
int handle_integer(va_list args)
{
	int num = va_arg(args, int); /*Get the integer argument*/
	int digits = 0;
	int temp = num;
	int i = 0;

	/*Handle negative numbers*/
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		temp = num;
		digits++;
	}

	/*Calculate the number of digits*/
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	/* Print the digits in correct order, skipping the leading zero if present*/
	for (i = digits - 1; i >= 0; i--)
	{
		int digit = num / power(10, i) % 10;

		if (digit != 0 || (digit == 0 && i == 0))
		{
			_putchar('0' + digit);
		}
	}

	return (digits);
}
