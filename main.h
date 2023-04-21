#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct printer
{
	char *symbol;
	int (*print)(va_list args);

} prints;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_int(va_list args);
int print_unsigned_int(va_list args);
int print_dec_binary(va_list args);
int print_string(va_list args);
int print_rev_string(va_list args);
int print_rot13_string(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_octal(va_list args);

#endif

