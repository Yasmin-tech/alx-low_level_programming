#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {

    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 0, advanced_binary(array, size, 0));
    printf("Found %d at index: %d\n\n", 1, advanced_binary(array, size, 1));
    printf("Found %d at index: %d\n\n", 2, advanced_binary(array, size, 2));
    printf("Found %d at index: %d\n\n", 3, advanced_binary(array, size, 3));
    printf("Found %d at index: %d\n\n", 4, advanced_binary(array, size, 4));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n\n", 6, advanced_binary(array, size, 6));
    printf("Found %d at index: %d\n\n", 7, advanced_binary(array, size, 7));
    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 9, advanced_binary(array, size, 9));
    printf("Found %d at index: %d\n", 88, advanced_binary(array, size, 88));
    return (EXIT_SUCCESS);
}
