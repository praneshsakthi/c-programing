#include<stdio.h>
#include<string.h>
int main()
{
    char p[20],q[20];
    int i,j,c=0,l=0,m=0,g=0,v=0;
    scanf("%s %s",&p,&q);
    g=strlen(q);
    for(i=0;p[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;p[i]!='\0';i++)
    {
        for(j=i;q[j]!='\0';j++)
        {
          if(p[i]==q[j])
          c++;
          break;
        }
    }
    if(g>l)
    v=g;
    else
    v=l;
    m=v-c;
    if(m==1)
    printf("yes");
    else
    printf("no");
}
