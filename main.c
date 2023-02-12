#include <stdio.h>

int main(void)
{
    double x, y;

    printf("x : ");
    scanf("%lf", &x);
    printf("y : ");
    scanf("%lf", &y);

    printf("%f \n", x + y);
    printf("%f \n", x / y);
    printf("%f \n", x % y);
}
