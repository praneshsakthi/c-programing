#include <stdio.h>
int main()
{
  int i,K,N,sum=0,c[100];
  scanf("%d%d",&N,&K);
  for(i=1;i<=N;i++)
  {
    scanf("%d",&c[i]);
  }
    for(i=1;i<=K;i++)
    {
      sum+=c[i];
    }
    printf("%d",sum);
    return 0;
}
