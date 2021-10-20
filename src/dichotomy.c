/**
 * @file dichotomy.c
 * @author Julien PEYROL (peyrol.jul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */

int find_by_dichotomy(int array[], int size_t, int value)
{
    int low = 0;
    int high = size_t - 1;
    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (value > array[middle])
        {
            low = middle + 1;
        }
        else if (value < array[middle])
        {
            high = middle - 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}