#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;  //number to be test
    unsigned long div;  //可能的约数
    bool isPrime;       //素数标记
    printf("Please input an interger number.\n");
    printf("Enter q to quit.\n");

    while(scanf("%lu", &num) == 1)
    {
        for(div = 2, isPrime = true; (div*div) <= num; div++)
        {
            if(num%div == 0)
            {
                if(div*div == num)
                    printf("%lu is divisible by %lu.\n", num, div);
                else
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
                isPrime = false;
            }
        }

        if(isPrime)
            printf("%lu is Prime.\n", num);
        printf("Please input another interger.\n");
        printf("Enter q to quit.\n");
    }
    return 0;
}