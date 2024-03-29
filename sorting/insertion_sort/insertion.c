/**
 * Insertion Sort
 * https://github.com/stephenfeagin/algorithms
 * 
 * insertion.c takes an array of integers from stdin and prints the output of sorting its elements
 * 
 * Example usage:
 * $ make insertion
 * $ ./insertion 5 6 2 1 4 3
 * 1 2 3 4 5 6
 */

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int n, int arr[]);

int main(int argc, char *argv[])
{
    int n = argc - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    insertion_sort(n, arr);
}

void insertion_sort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
