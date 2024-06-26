#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* prototypes for Tasks */
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int l, int r);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
