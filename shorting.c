#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, temp, arr[10];
    printf("Enter any 10 number:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Index [%d] :", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("******After Shorting******\n");
    for (i = 0; i < 10; i++)
    {
        printf("Index [%d] :%d \n", i, arr[i]);
    }
    getch();
    return (0);
}
