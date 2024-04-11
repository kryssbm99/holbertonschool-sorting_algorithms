# Sorting Algorithms & Big O

## Overview

This repository contains implementations of various sorting algorithms in C, along with discussions on their time complexities represented by Big O notation. Understanding sorting algorithms and their efficiency is crucial in computer science and software development.

## Contents

- [Sorting Algorithms](#sorting-algorithms)
- [Big O Notation](#big-o-notation)
- [How to Use](#how-to-use)
- [Authors](#authors)
## Sorting Algorithms

The following sorting algorithms are implemented in this repository:

1. **Bubble Sort**: A simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
2. **Insertion Sort**: A comparison-based algorithm that builds the final sorted array one item at a time by repeatedly picking the next item and inserting it into the sorted portion of the array.
3. **Selection Sort**: A comparison-based algorithm that divides the input array into two parts: a sorted sublist and an unsorted sublist. It repeatedly selects the smallest (or largest, depending on sorting order) element from the unsorted sublist and swaps it with the first element of the unsorted sublist.
4. **Quick Sort**: A comparison-based algorithm that divides the input array into smaller subarrays, according to a chosen pivot element, and recursively sorts the subarrays.

## Big O Notation

Big O notation is used to describe the worst-case time complexity of algorithms. Here's a summary of the time complexities for the implemented sorting algorithms:

- **Bubble Sort**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Insertion Sort**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Selection Sort**:
  - Best Case: O(n^2)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Quick Sort**:
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n^2) (when the pivot is consistently the smallest or largest element)

## How to Use

To use the provided sorting algorithms, follow these steps:

1. Clone the repository to your local machine.
2. Compile the C files using a C compiler.
3. Run the compiled executable to see the sorting algorithms in action.

## Authors
This project was elaborated by:
- [Kryss Babilonia](https://github.com/kryssbm99)
- [Abdiel Rodriguez](https://github.com/Abdieljrg)

