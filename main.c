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
