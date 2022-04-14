#include <stdio.h>

int main(void)
{
    int b=3;
    int arr[]={6,7,8,9,10};

    int *ptr=arr;
    printf("*ptr sis %d\n", *ptr);
    *(ptr++)+=123;
    printf("*ptr is %d, *(++ptr) is %d\n", *ptr, *(++ptr));
    return 0;
}