# Matrix Inversion in C
This project implements matrix inversion using elementary row operations in C.
The program takes matrix elements as command-line arguments and computes the inverse using Gaussian elimination.
## Concepts Used

- Gaussian Elimination
- Row Reduction
- Dynamic Memory Handling
- Command Line Arguments (argc, argv)
- Double Precision Arithmetic
- ## Algorithm Overview

1. Read matrix elements from command-line arguments.
2. Construct augmented matrix [A | I].
3. Perform row operations to convert A into identity matrix.
4. Extract inverse from transformed augmented matrix.
5. ## Compilation

gcc matrix.c -o matrix
(to compile this you need to have cs50 library installed.)
## Execution

./matrix 1 2 3 1 0 0 3 4 5 0 1 0 4 3 5 0 0 1
