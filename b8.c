#include <stdio.h>
void main()
{
  int N,i,sum=0;
  scanf("%d",&N);
  for(i=N;i>=1;i--)
  {
    sum+=i;
  }
  printf("%d",sum);
}
