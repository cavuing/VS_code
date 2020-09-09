#include <stdio.h>
int main(void)
{
    int num = 0;
    double time, power_of_2;
    int limit;

    printf("Please input limit :\n");
    scanf("%d", &limit);
    for(time = 0, power_of_2 = 1, num = 1; num <= limit; num++, power_of_2*=2.0)
    {
        time += 1.0/power_of_2;
        printf("time = %f when num is %d\n", time, num);
    }
    return 0;
}