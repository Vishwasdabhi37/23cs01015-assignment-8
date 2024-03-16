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
        for (int i = 0; i < rows; i++)
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                printf("%d ", *(*(mat + i) + j));
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
    int n;
    printf("Enter how many times you want to rotate the matrix : ");
    scanf("%d", &n);
    func(rows, cols, n, mat);
    return 0;
}