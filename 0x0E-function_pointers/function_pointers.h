#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
int _putchar(char);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
