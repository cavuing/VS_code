#include <stdio.h>

int main(void)
{
    const int ROW = 6;
    const int CHA = 6;
    int row = 0;
    char cha;
    for(row = 0; row < ROW; row++)
    {
        for(cha = ('A'+row); cha < ('A'+CHA); cha++)
            printf("%c", cha);
        printf("\n");
    }
    return 0;
}