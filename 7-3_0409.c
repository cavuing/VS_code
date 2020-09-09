#include <stdio.h>
#define STOP 0

int main(void)
{
    int number = 0;
    int n_odd = 0, count_odd = 0;
    int n_even = 0, count_even = 0;
    double ave_odd = 0, ave_even = 0;

    printf("Please input some integers, 0 means STOP.\n");

    do
    {
        scanf("%d", &number);
        if(number == STOP)
            break;
        if(number%2 == 0)
         {
             n_even++;
             count_even += number;
         }
        else
        {
            n_odd++;
            count_odd += number;
        }
    }
    while(number != STOP);

    if(n_odd != 0)
        ave_odd = (double)count_odd/(double)n_odd;
    else
       ave_odd = 0.00;     
    if(n_even != 0)
        ave_even = (double)count_even/(double)n_even;
    else
        ave_even = 0;

    printf("The n_even is %d, the count_even is %d, the ave_even is %.2lf;\n", n_even, count_even, ave_even);
    printf("The n_odd is %d, the count_odd is %d, the ave_odd is %.2lf.\n", n_odd, count_odd, ave_odd);
}