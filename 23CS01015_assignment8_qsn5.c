#include <stdio.h>
void func(int rows, int cols, int n, int (*mat)[cols])
{
    if (n % 4 == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", *(*(mat + i) + j));
            }
            printf("\n");
        }
    }
    else if (n % 4 == 3)
    {
        for (int i = cols - 1; i >= 0; i--)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", *(*(mat + j) + i));
            }
            printf("\n");
        }
    }
    else if (n % 4 == 2)
    {
        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                printf("%d ", *(*(mat + i) + j));
            }
            printf("\n");
        }
    }
    else if (n % 4 == 1)
    {
        for (int i = 0; i < cols; i++)
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                printf("%d ", *(*(mat + j) + i));
            }
            printf("\n");
        }
    }
}
void funcodd(int rows, int cols, int n, int (*mat)[cols], int (*mat2)[rows])
{
    if (n == 3)
    {
        for (int i = cols - 1; i >= 0; i--)
        {
            for (int j = 0; j < rows; j++)
            {
                *(*(mat2 + cols - 1 - i) + j) = *(*(mat + j) + i);
            }
        }
    }
    else if (n == 1)
    {
        for (int i = 0; i < cols; i++)
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                *(*(mat2 + i) + rows - 1 - j) = *(*(mat + j) + i);
            }
        }
    }
}
void funceven(int rows, int cols, int n, int (*mat)[cols], int (*mat2)[cols])
{
    if (n == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                *(*(mat2 + i) + j) = *(*(mat + i) + j);
            }
        }
    }
    else if (n == 2)
    {
        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                *(*(mat2 + rows - 1 - i) + cols - 1 - j) = *(*(mat + i) + j);
            }
        }
    }
}
int main()
{
    int rows, cols;
    printf("Enter rows and cols of the matrix : ");
    scanf("%d", &rows);
    scanf("%d", &cols);
    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &*(*(mat + i) + j));
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
    int n;
    printf("Enter how many times you want to rotate the matrix : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {

        int mat2[rows][cols];
        funceven(rows, cols, n % 4, mat, mat2);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", *(*(mat2 + i) + j));
            }
            printf("\n");
        }
    }
    else
    {
        int mat2[cols][rows];
        funcodd(rows, cols, n % 4, mat, mat2);
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", *(*(mat2 + i) + j));
            }
            printf("\n");
        }
    }
    return 0;
}
