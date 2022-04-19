#ifndef MAIN_H
#define MAIN_H

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
