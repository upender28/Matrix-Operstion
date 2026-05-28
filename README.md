Matrix Operations Program in C

Project Title :  
Matrix Operations using Functions and 2D Arrays

Aim

To implement matrix operations such as :

(Matrix Addition)
(Matrix Multiplication)
(Matrix Transpose)

using functions and 2D arrays in C language.

Description :
This program allows the user to enter two matrices and perform different matrix operations. The program uses separate functions for each operation to make the code modular and easy to understand.

Operations Performed
1. Matrix Addition

Adds two matrices of the same order.

2. Matrix Multiplication

Multiplies two matrices if :
(Number of columns in first matrix = Number of rows in second matrix)

3. Matrix Transpose

Converts rows into columns.

Functions Used

Function	Purpose

addMatrix()	Adds two matrices

multiplyMatrix()	Multiplies two matrices

transposeMatrix()	Finds transpose of matrix

displayMatrix()	Displays matrix

Sample Input
Enter rows and columns of first matrix: 2 2
Enter elements of first matrix:
1 2
3 4

Enter rows and columns of second matrix: 2 2
Enter elements of second matrix:
5 6
7 8

Sample Output
Matrix Addition Result:
6 8
10 12

Matrix Multiplication Result:
19 22
43 50

Transpose of First Matrix:
1 3
2 4

Algorithm
Start the program
Read first matrix
Read second matrix
Perform matrix addition
Perform matrix multiplication
Find transpose of first matrix
Display results
Stop the program


Compilation Command :

gcc matrix.c -o matrix


Execution Command :

./matrix


Conclusion :

This program successfully demonstrates matrix addition, multiplication, and transpose operations using functions and 2D arrays in C language.
