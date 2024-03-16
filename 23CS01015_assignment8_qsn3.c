#include <stdio.h>
void func(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
    func(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}