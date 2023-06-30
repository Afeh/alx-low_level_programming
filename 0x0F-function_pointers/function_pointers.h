#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));

#endif
