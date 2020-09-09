/*
input: temperature prepared to trans
variable: Celsius, Fahrenheit, Kelvin
*/
#include <stdio.h>

int Temperature(double tem);
int main(void)
{
    double F_tem = 0.0;
    int flag = 0;

    printf("====Please input a Fahrenheit temperature.====\n");
    flag = scanf("%lf", &F_tem);
    while(flag == 1)
    {
        Temperature(F_tem);
        printf("====Please input another Fahrenheit temperature.====\n");
        flag = scanf("%lf", &F_tem);
    }

    return 0;
}

int Temperature(double tem)
{
    const double C1 = 5.0;
    const double C2 = 9.0;
    const double C3 = 32.0;
    const double K = 273.16;

    double C_tem = 0.0, K_tem = 0.0;
    C_tem = C1/C2*(tem - C3);
    K_tem = tem + K;
    printf("====the %.2f℉ = %.2f℃ = %.2fK ====\n", tem, C_tem, K_tem);
    return 0;
}