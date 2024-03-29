#ifndef SEARCH
#define SEARCH
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/* mandatory tasks*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
