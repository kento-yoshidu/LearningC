#include <stdio.h>

int main(void)
{
    int a, b, c;

    puts("入力してください。");
    printf("整数a : ");  scanf("%d", &a);
    printf("整数b : ");  scanf("%d", &b);
    printf("整数c : ");  scanf("%d", &c);

    int sum = a + b + c;
    double ave = (double)sum / 3;

    printf("合計 : %5d \n", sum);
    printf("平均 : %5.1f \n", ave);
}
