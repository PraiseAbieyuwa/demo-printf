#include "main.h"
/**
 * get_functions - links all the forMat specifier
 * @x: variAble to a chara
 * Return: success
 */
int (*get_functions(char x))(va_list)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		/*{"b", decimalToBinary},*/
		/*{"o", octal},*/
		/*{"p", pointer},*/
		/*{"x", hex},*/
		/*{"X", HEX},*/
		/*{"u", unsign},*/
		/*{"r", reverse},*/
		/*{"R", rot13},*/
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
