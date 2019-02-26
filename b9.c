#include <stdio.h>
void main()
{
  int i,K,N,sum=0;
  scanf("%d%d",&N,&K);
  if(N>=K){
    for(i=1;i<=K;i++)
    {
      sum+=i;
    }
    printf("%d",sum);
  }
}  
