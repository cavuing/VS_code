#include <stdio.h>
#define SPACE ' '

int main(void)
{
    char ch;

    printf("Please input some strings.\n");
    while((ch = getchar()) != '\n')   //多多学习这种写法哦
    {
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch+1);
    }
    putchar(ch);

    return 0;
}