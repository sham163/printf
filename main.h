#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#define BUFFER_SIZE 1024

/**
 * struct sp - Struct sp
 *
 * @sp: The specifier
 * @f: The function associated
 */
typedef struct sp
{
char *sp;
int (*f)(va_list);
} spt;

int print_s(va_list ss);
int print_c(va_list ss);
int print_mod(va_list ss);
int print_id(va_list ss);
int print_b(va_list ss);
int print_hex(va_list ss);
int print_poin(va_list ss);
int print_re(va_list ss);
int print_ro13(va_list ss);
int print_u(va_list ss);
int print_o(va_list ss);
char ro13_char(char c);

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int (*get_sp(char *s))(va_list ss);
#endif
