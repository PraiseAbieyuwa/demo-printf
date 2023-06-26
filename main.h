#ifndef PRINT_F
#define PRINT_F

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <unistd.h>

typedef int (*specifier_handler)(va_list args, int *count);

int handle_pointer(va_list args, int *count);
int handle_reverse(va_list args, int *count);
int handle_rot13(va_list args, int *count);
int _printf(const char *format, ...);
int _putchar(char c);
int handle_char(va_list args, int *count);
int handle_string(va_list args, int *count);
int handle_percent(va_list args, int *count);
int handle_integer(va_list args);
void print_binary(unsigned int num);
int handle_binary(va_list args);
int handle_hex(va_list args, int *count);
int handle_octal(va_list args, int *count);
int handle_unsigned(va_list args, int *count);
specifier_handler get_handler(char specifier);


#endif
