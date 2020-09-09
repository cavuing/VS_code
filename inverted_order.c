#include <stdio.h>

/*
int main(void)
{
    char str[256] = {0};
    int i, j;
    printf("Please input something\n");
    for(i = 0; i < 255; i++)
    {
        scanf("%c", &str[i]);
        if(str[i] == '\n')
            break;
    }
    printf("%s\n", str);
    printf("the i is %d\n", i);

    for(j = i; j > 0; j--)
        printf("%c",str[j-1]);
    printf("\n");
    return 0;
}
*/
/*
int main(void)
{
    char str[256] = {0};
    int i = 0, j = 0;

    printf("Please input strings.\n");
    do
    {
        scanf("%c", &str[i]);
        i++; 
    }while(str[i-1] != '\n');

    for(j = i-1; j > 0; j--)
        printf("%c", str[j-1]);
    printf("\n");

    return 0;
}
*/

int main(void)
{
    char str[256] = {0};
    int i = 0, j =0;

    printf("Please input strings.\n");
    scanf("%c", &str[0]);

    while(str[i++] != '\n')
    {
        printf("the i = %d\n", i);
        scanf("%c", &str[i]);
    }
    printf("the string is ----%s\n", str);
    printf("====the i now is %d\n", i);

    for(j = i-1; j>0; j--) //因为while判断条件里面写的是i++，判断完后自动加1，因此此时的i已经比真实存放的字符数大1
        printf("%c", str[j-1]); //因为数组从0开始，因此最后一位比数组放的数量小1
    printf("\n");

    return 0;
}