# Selection Sort

The idea behind selection sort is to divide the array into an unsorted and a sorted portion, with
the sorted portion at the beginning. Iterate through the unsorted portion, and find the smallest
value. Swap that element with the first element in the unsorted portion. Increment the starting
index of the unsorted portion, and repeat until the entire array is sorted.

## Pseudocode

```
for i from 0 to n:
    min_value_index = first index of the unsorted portion
    for j from min_value_index + 1 to n:
        if array[j] < array[min_value_index]:
            min_value_index = j
    swap array[i], array[min_value_index]
```

## Efficiency

- *O(n<sup>2</sup>)*
- *&Omega;(n<sup>2</sup>)*

## Implementation

- [C](selection.c)