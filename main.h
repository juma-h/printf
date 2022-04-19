#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>

=======
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
>>>>>>> 90f1f23260592c6b79e1e105e27f8514496ea063
int _putchar(char c);
int _printf(const char *format, ...);

#endif
