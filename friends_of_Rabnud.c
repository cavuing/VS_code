#include <stdio.h>
#define DUNBAR 150

int main(void)
{
    unsigned int week = 0, friends_num = 0;
    printf("week   friends_num\n");
    for(week = 0, friends_num = 5; friends_num<DUNBAR; week++, friends_num = 2*(friends_num-week))
    {
        printf("%3d %6d\n", week, friends_num);
    } 

    return 0;
}