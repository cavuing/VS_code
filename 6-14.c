#include <stdio.h>

int main(void)
{
    double first[8] = {0};
    double second[8] = {0};
    int i = 0, j = 0, k = 0, l = 0;

    printf("Please input 8 double numbers.\n");
    for(i = 0; i < 8; i++)
        scanf("%lf", &first[i]);
        
    second[0] = first[0];
    for(j = 1; j < 8; j++)
    {
        second[j] = first[j];
        second[j] += second[j-1];
    }

    for(k = 0; k < 8; k++)
        printf("%3.1lf ", first[k]);
    printf("\n");
    for(l = 0; l < 8; l++)
        printf("%3.1lf ", second[l]);
    
    return 0;
}