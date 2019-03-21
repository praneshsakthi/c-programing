#include <stdio.h>
#include<string.h>
void main()
{
  char a[100],b;
  int i,l=0;
  gets(a);
  l=strlen(a)-1;
  for(i=l;i>=0;i--)
  {
  printf("%c",a[i]);
}}
