#include<stdio.h>
void main()
{
	char n[10],b[100];
	int i;
	scanf("%s",n);
	for(i=0;n[i]!='\0';i++)
	{
 		if(n[i]=='X')
 			b[i]='A';
 		else if(n[i]=='Y')
 			b[i]='B';
 		else if(n[i]=='Z')
 			 b[i]='C';
 	    else if(n[i]=='x')
 			b[i]='a';
 	    else if(n[i]=='y')
 			b[i]='b';
 		else if(n[i]=='z')
 			 b[i]='c';
 		else
		b[i]=n[i]+3;
	}
	printf("%s",b);
}
