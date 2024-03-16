#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the order of first matrix(m,n) : ");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix(p,q) : ");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    int a[m][n], b[p][q], c[m][q];
    printf("Enter matrix A : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &(*(*(a + i) + j)));
        }
    }
    printf("Enter matrix B : ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &(*(*(b + i) + j)));
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int x = 0;
            c[i][j] = 0;
            while (x < n)
            {
                *(*(c + i) + j) += (*(*(a + i) + x)) * (*(*(b + x) + j));
                x++;
            }
        }
    }
    printf("Resultant matrix after multiplication : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", *(*(c + i) + j));
        }
        printf("\n");
    }
    return 0;
}