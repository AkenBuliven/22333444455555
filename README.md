# 22333444455555

#include <stdio.h>
int main(){
int a, b;
scanf("%d%d", &a,&b);

for (int i = a; i <= b; i++) 
{
  for (int n = 0; n < (i - a + 1); n++)
  printf("%4d ", i);
}

return 0;
}

Вывести все числа из промежутка 
[
A
;
B
]
,
(
B
>
A
)
[A;B],(B>A). При этом число 
A
A должно выводиться 
1
1 раз, число 
A
+
1
A+1 -- два раза, 
A
+
2
A+2 -- три раза и т.д.
