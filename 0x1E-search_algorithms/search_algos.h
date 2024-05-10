#ifndef ALGO_H
#define ALGO_H
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_current_array(int *array, int start, int end);
int jump_search(int *array, size_t size, int value);
#endif
