```c
#include <stdio.h>

int main(void)
{
    printf("%d", 10 + 10);

    return 0;
}
```

関数名`printf`、`%d`と`15 + 37`が実引数。

`%d`は書式文字列。`d`はdecimalから来ている。

文は`;`で終わる。


## 演算

`%`で余りを求める。

```c
int main(void)
{
    printf("%d", 10 % 7);
    //=> 3
}
```

符号の反転。

```c
int main(void)
{
    int num = 10;
    int num2 = -5;

    printf("%d, %d", -num, -num2);
    //=> -10, 5
}
```

式の後ろに`;`を置いた分は、式文と呼ばれる。

```c
    a = b - 5;
```

## 型

double。printfで出力する時は`%f`を使用する。

```c
int main(void)
{
    double f1 = 10.0;
    
    printf("%f", f1 / 3);
    //=> 3.333333
}
```

`int`型の変数に小数点数を代入しても、小数部は切り捨てられる。

```c
int main(void)
{
    int d1 = 10.5;
    int d2 = 10.3 / 5.2;
    
    printf("%d, %d", d1, d2);
    //=> 10, 1
}
```

`%`は整数同士の演算でのみ使用できる。

```c
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
```











