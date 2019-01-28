#include <stdio.h>
void main()
{
  char c;
  scanf("%c",&c);
  if(c>=65&&c<=90||c>=97&&c<=122)
  {
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
      printf("vowel");
    }
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
      printf("vowel");
    }
       else{
      printf("consonant");
    }
  }
  else
  {
    printf("invalid");
  }
}
