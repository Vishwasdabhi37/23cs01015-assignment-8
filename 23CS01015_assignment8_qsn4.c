#include <stdio.h>
void func(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum += *(arr + i);
    }
    printf("%d is repeating more than once.\n", sum - (n * (n + 1) / 2));
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