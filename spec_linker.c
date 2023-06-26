#include "main.h"

/**
 * get_handler - function to get the appropriate handler
 * @specifier:format specifier
 * Return:return necessary handles
 */
specifier_handler get_handler(char specifier)
{
	switch (specifier)
	{
		case 'c':
			return (&handle_char);
		case 's':
			return (&handle_string);
		case '%':
			return (0);
		case 'd':
		case 'i':
			return (0);
		case 'b':
			return (0);
		case 'u':
			return (0);
		/**
		 * case 'o':
			return (&handle_octal);
		*case 'x':
			return (&handle_hex);
		*case 'X':
			return (&handle_hex);
		*case 'R':
			return (&handle_rot13);
		*case 'r':
			return (&handle_reverse);
		*case 'p':
			return (&handle_pointer);
		*/
		default:
			return (NULL);

	}
}
