ある変数のアドレスを知るには、`%p`指定子を使用する。この時、変数名の前にアドレス演算子`&`をつける。

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

複数の変数のアドレスを出力する。変数は`int`型（4バイト）であるため、4番ずれの連番が割り当てられていることがわかる。

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

配列の場合は先頭に`&`をつける必要はない。ただし、つけてもOK。配列名が**配列の最初の要素のアドレス**を表しているため。


```c
#include <stdio.h>

int main(void)
{
  int array[10];
  
  printf("%p\n", array);
  printf("%p", &array);

  return 0;
}
/*
0061FEF8
0061FEF8
*/
```

ただし、配列の個々の要素のアドレスは`&`をつけてアクセスする。

```c
#include <stdio.h>

int main(void)
{
  int array[10];
  
  printf("%p\n", array);
  printf("%p\n", &array[0]);
  printf("%p\n", &array[1]);
  printf("%p\n", &array[2]);

  return 0;
}
/*
0061FEF8
0061FEF8
0061FEFC
0061FF00
*/
```



