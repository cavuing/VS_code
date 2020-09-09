#include <stdio.h>
/* test 1
int main(void)
{
    int ultra = 0, super = 0;

    while(super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }

    return 0;
}
*/
//n++: 先使用再递增
//++n: 先递增再使用
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; //后缀递增
    pre_b = ++b;  //前缀递增

    printf("a a_post b pre_b\n");
    printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);

    return 0;
}