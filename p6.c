#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100],b[100];
	scanf("%s %s",a,b);
	int l1,l2,i,j,c,d,e,f,y,z,t=0;
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l1;j++)
		{
			c=a[i];
			d=a[j];
			e=b[i];
			f=b[j];
			y=c-d;
			z=e-f;
			if(y==z)
			{
				t=1;
			}
			else
			{
				t=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(t==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
