Sure, here's the README without the code examples:

---

# Vector Implementation in C

## Overview

This C library provides a dynamic array implementation known as a vector. It allows for efficient storage and manipulation of elements, with automatic resizing as needed.

## Data Structure

The core data structure used in this implementation is a dynamic array, which grows or shrinks as elements are added or removed. It is represented by the following structure:

```c
typedef struct Vector {
    int* array;  // Pointer to the dynamically allocated array
    int size;    // Number of elements currently stored in the vector
    int cap;     // Maximum number of elements that can be stored without resizing
} Vector;
```

## Functions

1. **create_vector()**
   - Initializes an empty vector with default capacity.

2. **push_back(Vector* vec, int val)**
   - Appends an element to the end of the vector.

3. **insert(Vector* vec, int index, int val)**
   - Inserts an element at the specified index in the vector.

4. **erase(Vector* vec, int index)**
   - Removes the element at the specified index.

5. **delete_vector(Vector* vec)**
   - Frees the memory allocated for the vector.

6. **printVector(Vector* vec)**
   - Prints the elements of the vector.

---

Feel free to adjust this README according to your project's documentation needs!
