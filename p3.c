#include <stdio.h>
void main()
{
  int i,n;
  scanf("%d",&n);
  while (n)  {
    i=n%10;
    n=n/10;
   printf("%d",i);
  }
}
