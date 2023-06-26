#include "main.h"
/**
 * _printf - function that connects all
 * @format:second Argument
 * Return: return
 */

int _printf(const char *format, ...)
{
	int count = 0;
	specifier_handler handler;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			handler = get_handler(*format);

			if (handler != NULL)
			{
				/* Pass the arguments and count to the handler function*/
				count += handler(args, &count);
			}
			else
			{
				/* Invalid specifier, print as is*/
				putchar('%');
				putchar(*format);
				count += 2;
			}
		}
		else
		{
			/* Regular character, print it as is*/
			_putchar(*format);
			count++;
		}

		format++; /* Move to the next character in the format string*/
	}
	va_end(args);

	return (count);
}
