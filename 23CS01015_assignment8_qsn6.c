#include <stdio.h>
#include <string.h>
int main()
{
    int size1;
    printf("Enter the length of the first string : ");
    scanf("%d", &size1);
    getchar();
    char arr1[size1 + 1];
    printf("Enter the first string: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%c", (arr1 + i));
    }
    getchar();
    arr1[size1] = '\0';
    int size2;
    printf("Enter the length of the second string : ");
    scanf("%d", &size2);
    getchar();
    char arr2[size2 + 1];
    printf("Enter the second string: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%c", (arr2 + i));
    }
    getchar();
    arr2[size2] = '\0';
    char arr3[size1 + size2 + 1];
    for (int i = 0; i < size1; i++)
    {
        *(arr3 + i) = *(arr1 + i);
    }
    for (int i = 0; i < size2; i++)
    {
        *(arr3 + size1 + i - 1) = *(arr2 + i);
    }
    printf("str1 + str2 = ");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%c", *(arr3 + i));
    }
    return 0;
}