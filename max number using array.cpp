#include <stdio.h>
#include <conio.h>
int main()
{
    int ary[5], i, max;
    printf("Surya chawla\n");
    printf("enter the five element of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (max < ary[i]);
        max = ary[i];
    }
    printf("maximum value is %d", max);
    return 0;
}
