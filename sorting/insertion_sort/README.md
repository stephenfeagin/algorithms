# Insertion Sort

The idea behind insertion sort is to build the sorted array in place, shifting elements out of the
way as necessary.

## Pseudocode

```
for i from 1 to n:
    array[0:i - 1] is sorted
    key = array[i]
    j = i - 1  // last element in sorted portion
    while j >= 0  and array[j] > key:
        array[j + 1] = array[j]
        j = j - 1
    array[j + 1] = key
```

## Example

- `array = [5 2 4 6 1 3]`
- First iteration: `i = 1`
    + `array[0:i - 1]` is sorted (`[5]`)
    + `key = array[i] = array[1] = 2`
    + `j = i - 1 --> j = 0`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[1] = 5`
        * `j = j - 1 --> j = -1`
    + Loop condition: `j >= 0 and array[j] > key --> FALSE`
    + `array[j + 1] = key --> array[0] = 2`
- `array = [2 5 4 6 1 3]`
- Next iteration: `i = 2`
    + `array[0:i - 1]` is sorted (`[2 5]`)
    + `key = array[i] --> key = array[2] --> key = 4`
    + `j = i - 1 --> j = 1`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[2] = 5`
        * `j = j - 1 --> j = 0`
    + Loop condition: `j >= 0 and array[j] > key --> FALSE`
    + `array[j + 1] = key --> array[1] = 4`
- `array = [2 4 5 6 1 3]`
- Next iteration, `i = 3`
    + `array[0:i - 1]` is sorted (`[2 4 5]`)
    + `key = array[i] --> key = 6`
    + `j = i - 1 --> j = 2`
    + Loop condition: `j >= 0 and array[j] > key --> FALSE`
    + `array[j + 1] = key --> array[3] = 6`
- `array = [2 4 5 6 1 3]`
- Next iteration, `i = 4`
    + `array[0:i - 1]` is sorted (`[2 4 5 6]`)
    + `key = array[i] --> key = 1`
    + `j = i - 1 --> j = 3`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[4] = 6`
        * `j = j - 1 --> j = 2`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[3] = 5`
        * `j = j - 1 --> j = 1`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[2] = 4`
        * `j = j - 1 --> j = 0`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[1] = 2`
        * `j = j - 1 --> j = -1`
    + Loop condition: `j >= 0 and array[j] > key --> FALSE`
    + `array[j + 1] = key --> array[0] = 1`
- `array = [1 2 4 5 6 3]`
- Next iteration, `i = 5`
    + `array[0:i - 1]` is sorted (`[1 2 4 5 6]`)
    + `key = array[i] --> key = 3`
    + `j = i - 1 --> j = 4`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[5] = 6`
        * `j = j - 1 --> j = 3`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[4] = 5`
        * `j = j - 1 --> j = 2`
    + Loop condition: `j >= 0 and array[j] > key --> TRUE`
        * `array[j + 1] = array[j] --> array[3] = 4`
        * `j = j - 1 --> j = 1`
    + Loop condition: `j >= 0 and array[j] > key --> FALSE`
    + `array[j + 1] = key --> array[2] = 3`
- `array = [1 2 3 4 5 6]`

## Efficiency

- **Worst-case scenario**
    + Array is reverse sorted
    + *O(n<sup>2</sup>)*
- **Best-case scenario**
    + Array is already perfectly sorted
    + *&Omega;(n)*

## Implementation

- [C](insertion.c)

## References

- [CS50x video](https://www.youtube.com/watch?v=O0VbBkUvriI)
- Cormen et al, pp 16-20
