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

#endif /* SEARCH_ALGOS_H*/
