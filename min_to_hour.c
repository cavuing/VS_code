#include <stdio.h>
#define MIN_EACH_HOUR 60

int main(void)
{
    int min = 0, hour = 0;
    printf("====Please input a min value.====\n");
    scanf("%d", &min);
    while(min > 0)
    {
        hour = min/MIN_EACH_HOUR;
        min = min%MIN_EACH_HOUR;
        printf("====the value = %d hour, %d min====\n", hour, min);
        printf("====Please input another min value.====\n");
        scanf("%d", &min);
    }
    printf("====Done!====\n");

    return 0;
}