#include <stdio.h>
void func(int *p, int size)
{
    int temp = *(p + size - 1);
    for (int i = size - 1; i > 0; i--)
    {
        *(p + i) = *(p + (i - 1));
    }
    *p = temp;
}
int main()
{
    int arr[3];
    int x, y, z, *p = arr, size = 3;
    printf("Enter the values of x,y and z : ");
    scanf("%d %d %d", &x, &y, &z);
    *(arr) = x;
    *(arr + 1) = y;
    *(arr + 2) = z;
    func(p, size);
    printf("x=%d ,y=%d ,z=%d\n", *(arr), *(arr + 1), *(arr + 2));
    return 0;
}