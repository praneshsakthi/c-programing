#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int l,i,c;
	scanf("%d %s",&c,a);
	l=strlen(a);
	for(i=c-1;i>=0;i--)
	{
		if(a[i]!='a' && a[i]!='e' && a[i]!='U' &&a[i]!='i' &&a[i]!='o' &&a[i]!='u' &&a[i]!='A' &&a[i]!='E' &&a[i]!='I' &&a[i]!='O' )
		printf("%c",a[i]);
	}
	
	return 0;
}
