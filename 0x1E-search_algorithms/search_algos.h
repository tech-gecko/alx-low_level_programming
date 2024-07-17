#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_function(int *array, size_t size);
void binary_helper(int *array, size_t size, int value, int *left);

#endif
