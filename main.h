#ifndef PRINT_F
#define PRINT_F
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - struct to match functions and specifiers
 * @valid: pointer for specifiers
 * @f:function to convert specifier
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int rot13(va_list args);
int reverse(va_list args);
int unsign(va_list args);
int HEX(va_list args);
int hex(va_list args);
int pointer(va_list args);
int octal(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int decimalToBinary(va_list args);
int (*get_functions(char x))(va_list args);
int alt_x(unsigned long int n);
int _printf(const char *format, ...);
int _putchar(char c);
#endif


