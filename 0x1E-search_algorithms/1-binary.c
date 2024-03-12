#include "search_algos.h"

/**
 * binary_search - Function to search index of a value using binary search algo
 * @array: input array
 * @size: size of array
 * @value: value to search its index
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t i, mid;

    if (array == NULL)
    {
        return (-1);
    }

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}