#include <stdio.h>
void main()
{
  int i,a,b;
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;i++)
  {
    if(i%2==1)
    {
      printf("%d",i);
    }
  }
}
