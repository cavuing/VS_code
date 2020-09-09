#include <stdio.h>

/*
int main(void)
{
    int num;
    printf("    n    n cubed\n");
    for(num = 1; num < 7; num++)
    {
        printf("%5d %5d\n", num, num*num*num);
    }
    return 0;
}
*/

int main(void)
{
    char ch;

    for(ch = 'A'; ch <= 'Z'; ch++)
        printf("The ASCII value for %c is %d.\n", ch, ch);

    return 0;
}