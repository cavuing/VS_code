#include <stdio.h>
#define ROW 6
#define CHA 6

int main(void)
{
    int i = 0, j = 0;
    char ch;

    for(i = 0; i < ROW; i++)
    {
        j += i;
        for(ch = ('A' + j); ch <=(j + 'A' + i); ch++)
            printf("%c",ch);
        printf("\n");
    }

    return 0;
}