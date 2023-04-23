#ifndef MAIN_H
#define MAIN_H

/*includng C Standard Lib Headers*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/* Including my own function prototypes*/
int my_printf(const char *format, ...);
int _printf(const char *format, ...);
int handle_int(int num);
int _putchar(char c);
int handle_string(char *s);
#endif
