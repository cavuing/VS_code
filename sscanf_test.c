#include <stdio.h>
#include <string.h>

int main(void)
{
    char str_val[64]={0}, val[16]={0};
    int intVal=0;

    strncpy(str_val, "Today is Monday, 21, 3, 2022", sizeof(str_val));
    sscanf(str_val, "Today is %s[^,], %*s %*s %*s", val);

    printf("The str_val is %s, val is %s\n", str_val, val);

    return 0;
}