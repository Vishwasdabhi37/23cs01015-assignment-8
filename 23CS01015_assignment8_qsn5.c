// #include <stdio.h>
// void func(int m, int n, int p, int q, int (*a)[n], int (*b)[q], int (*c)[q])
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             int x = 0;
//             c[i][j] = 0;
//             while (x < n)
//             {
//                 *(*(c + i) + j) += (*(*(a + i) + x)) * (*(*(b + x) + j));
//                 x++;
//             }
//         }
//     }
// }
// int main()
// {
//     int m, n, p, q;
//     printf("Enter the order of first matrix(m,n) : ");
//     scanf("%d%d", &m, &n);
//     printf("Enter the order of second matrix(p,q) : ");
//     scanf("%d%d", &p, &q);
//     if (n != p)
//     {
//         printf("Matrix multiplication is not possible\n");
//         return 0;
//     }
//     int a[m][n], b[p][q], c[m][q];
//     printf("Enter matrix A : ");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &(*(*(a + i) + j)));
//         }
//     }
//     printf("Enter matrix B : ");
//     for (int i = 0; i < p; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             scanf("%d", &(*(*(b + i) + j)));
//         }
//     }
//     func(m, n, p, q, a, b, c);
//     printf("Resultant matrix after multiplication : \n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             printf("%d ", *(*(c + i) + j));
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

void take_mat(int col, int mat[][col], int row){
    printf("Enter matrix: \n"); 
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}


void rotate(int col, int mat[][col], int row, int rot){
    int n = rot%4;
    switch(n){
        case 0:
            break;
        case 1:
            for (int j=0; j<col; j++){
                for(int i=row-1; i>=0; i--)
                {
                    printf("%d ", *(*(mat +i)+j));    
                }
                printf("\n");
            }
            break;
        case 2:
            for(int i=row-1; i>=0; i--){
                for (int j=col-1; j>=0; j--){
                    printf("%d ", *(*(mat +i)+j));
                }
                printf("\n");
            }
            break;  
        case 3:
            for (int j=col-1; j>=0; j--){
                for(int i=0; i<row; i++){
                    printf("%d ", *(*(mat +i)+j));
                }
                printf("\n");
            }
            break;
    }
}

int main(){
    int row, col, rot;
    printf("Enter dimensions for matrix: ");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    take_mat(col, mat, row);
    printf("No. of rotations: ");
    scanf("%d", &rot);
    rotate(col, mat, row, rot);
    return 0;
}
