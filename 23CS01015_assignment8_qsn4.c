#include <stdio.h>
void func(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum += *(arr + i);
    }
    int num = sum - (n * (n + 1) / 2);
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n + 1; j++)
        {
            if (*(arr + j) == i)
            {
                flag++;
            }
            else if (*(arr + j) > n)
            {
                printf("Invalid input\n");
                return;
            }
        }
        if (flag != 1 && flag != 2)
        {
            printf("Invalid input\n");
            return;
        }
    }
    printf("The number repeating twice is: %d\n", num);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", arr + i);
    }
    func(arr, n);
    return 0;
}
