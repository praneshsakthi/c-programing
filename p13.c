#include<stdio.h>
int main()
{
    int a,b=0,c,d;
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;
        d=c*c;
        b+=d;
        a=a/10;
    }printf("%d",b);
}
