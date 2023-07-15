#ifndef search_algos_h
#define search_algos_h


#include <stdlib.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always EXIT_SUCESS
 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /** SEARCH_ALGOS.H */


