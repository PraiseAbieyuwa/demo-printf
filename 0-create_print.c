#include "main.h"

/**
 * conversion - checks if the format specifier is character or string
 * @max:place holder
 * @format:first argument
 * @ptr:pointer
 * Return:return rt
 */
void conversion(const char *format, int *max, va_list ptr)
{
	if (format[*max + 1] == 'c')
	{
		_putchar(va_arg(ptr, int));
		*max += 2;
	}
	else if (format[*max + 1] == 's')
	{
		char *str = va_arg(ptr, char *);
		int a = 0;

		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
		*max += 2;
	}
	else if (format[*max + 1] == '%')
	{
		_putchar('%');
		*max += 2;
	}
	else
	{
		_putchar(format[*max]);
		(*max)++;
	}
}


/**
 * _printf - functions that prints input given
 * @format:first argument
 * Return:return result
 */
int _printf(const char *format, ...)
{
	if (format)
	{
		va_list ptr;

		va_start(ptr, format);

		int rt = 0, i = 0;

		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				conversion(format, &i, ptr);
			}
			else
			{
				_putchar(format[i]);
				i++;
			}
		}

		va_end(ptr);
		return (rt);
	}
	return (0);
}
