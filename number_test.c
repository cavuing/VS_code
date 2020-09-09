#include <stdio.h>

int main(void)
{
    int start, end;
    printf("====Please input an integer value.====\n");
    scanf("%d", &start);
    end = start + 10;
    while(start++ <= end)
        printf("%d ",start-1);
    printf("\n========================\n");

    return 0;
}