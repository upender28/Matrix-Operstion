#include <stdio.h>

void addMatrix(int a[10][10], int b[10][10], int result[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[i][j];
            }
        }
    }
}

void transposeMatrix(int a[10][10], int transpose[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10], result[10][10], transpose[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(r1 == r2 && c1 == c2)
    {
        addMatrix(a, b, result, r1, c1);

        printf("\nMatrix Addition Result:\n");
        displayMatrix(result, r1, c1);
    }
    else
    {
        printf("\nMatrix addition not possible.\n");
    }

    if(c1 == r2)
    {
        multiplyMatrix(a, b, result, r1, c1, c2);

        printf("\nMatrix Multiplication Result:\n");
        displayMatrix(result, r1, c2);
    }
    else
    {
        printf("\nMatrix multiplication not possible.\n");
    }

    transposeMatrix(a, transpose, r1, c1);

    printf("\nTranspose of First Matrix:\n");
    displayMatrix(transpose, c1, r1);

    return 0;
}