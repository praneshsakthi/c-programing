  int main()
{
char a[255],c;
int i,j,count=0,max=0;
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
    for (j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
        count++;
        }
    }
    if(count>max)
    {
        c=a[i];
        max=count;
    }
}
printf("%c",c);
return 0;
}
