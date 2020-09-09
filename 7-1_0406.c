#include <stdio.h>
#include <ctype.h>

#define STOP '#'

int main(void)
{
    int n_space = 0, n_line_break = 0, n_chars_other = 0;
    char ch;

    printf("Please input strings to test:\n");
    while((ch = getchar()) != STOP)
    {
        if(ch == '\n')
            n_line_break++;
        else if(isspace(ch))
            n_space++;
        else
            n_chars_other++;
    }
    printf("The n_space is %d, the n_line_break is %d, the n_chars_other is %d\n", n_space, n_line_break, n_chars_other);

    return 0;
}