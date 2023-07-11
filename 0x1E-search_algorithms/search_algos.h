#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>

/*
 * Desc: Header file containing all function prototypes.
 *	 for the 0x1E-search_algorithms project.
 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int b_search(int *array, size_t l, size_t r, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_bin_search(int *array, size_t l, size_t r, int value);

#endif /* SEARCH_ALGOS_H*/
