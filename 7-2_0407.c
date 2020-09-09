#include <stdio.h>
#define STOP '#'
#define EACH_LINE_CHARS 8

int main(void)
{
    char ch;
    int count = 0;
    printf("Please input strings to translate and print.\n");
    while((ch = getchar()) != STOP)
    {
        count++;
        if(count%EACH_LINE_CHARS != 0)
            printf(" %c(%d) ", ch, ch);
        else
            printf(" %c(%d)\n", ch, ch);        
    }
    return 0;
}