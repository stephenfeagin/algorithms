# Selection Sort

The idea behind selection sort is to divide the array into an unsorted and a sorted portion, with
the sorted portion at the beginning. Iterate through the unsorted portion, and find the smallest
value. Swap that element with the first element in the unsorted portion. Increment the starting
index of the unsorted portion, and repeat until the entire array is sorted.

## Pseudocode

```
for i from 0 to n:
    min_value_index = i
    for j from i+1 to n:
        if array[j] < array[min_value_index]:
            min_value_index = j
    swap array[i], array[min_value_index]
```

## Example

- Original array: `5 2 1 3 6 4`
- The entire array is unsorted at this point
- The sorted portion has 0 elements, the unsorted portion has 6 elements
- The first index of the unsorted portion is 0
- We search through the unsorted part for the smallest value
    + At index 0, `5` is the smallest value
    + At index 1, `2 < 5` so 2 is the smallest value
    + At index 2, `1 < 2`, so 1 is the smallest value
    + At index 3, `1 < 3`, so 1 is still the smallest value
    + At index 4, `1 < 6`, so 1 is still the smallest value
    + At index 5, `1 < 4`, so 1 is still the smallest value
- We then swap that smallest value that we found with the element at the first index of the unsorted
portion (index 0, `5`)
- After one iteration, we now have `1 2 5 3 6 4`
- The sorted portion has 1 element, index 0, and the unsorted portion has 5 elements
- The first index of the unsorted portion is 1
- We repeat our search through the unsorted portion, and find that `2` is the smallest element
- We swap it with the element at index 1, which is `2`, so the array remains unchanged
- After two iterations, we have `1 2 5 3 6 4`
- The array hasn't changed, but the starting index of the unsorted portion is now 2
- Iteration 3: 3 is the smallest element, swaps with the element at index 2, we now have
`1 2 3 5 6 4`
- Iteration 4: 4 is the smallest element, swaps with the element at index 3, we now have
`1 2 3 4 6 5`
- Iteration 5: 5 is the smallest element, swaps with the element at index 4, we now have
`1 2 3 4 5 6`
- The length of the unsorted portion is now 1, containing only index 5, and so is sorted by
definition
- We are done

## Efficiency

- *O(n<sup>2</sup>)*
- *&Omega;(n<sup>2</sup>)*

## Implementation

- [C](selection.c)

## References

- [CS50x video](https://www.youtube.com/watch?v=3hH8kTHFw2A)