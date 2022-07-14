# scanf関数

`%d`で数値として受け取れる。`%lf`なら実数。

```c
#include <stdio.h>

int main(void)
{
  int data;
  scanf("%d", &data);
  printf("%d\n", data);
  return 0;
}
```

## 複数受け取れる

```c
#include <stdio.h>

int main(void)
{
  int data1, data2;
  scanf("%d%d", &data1, &data2);
  printf("%d\n%d\n", data1, data2);
  return 0;
}
```




