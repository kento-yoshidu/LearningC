変数のアドレスを取得。

```c
#include <stdio.h>

int main(void)
{
  int i;
  printf("%p\n", &i);
  return 0;
}
/* 0061FF1C */
```

```c
#include <stdio.h>

int main(void)
{
  int i, j, k;

  printf("i(%p)\n", &i);
  printf("j(%p)\n", &j);
  printf("k(%p)\n", &k);
  return 0;
}

/*
i(0061FF1C)
j(0061FF18)
k(0061FF14)
*/
```

## 配列のアドレス


