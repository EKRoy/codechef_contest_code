#include<stdio.h>
int main()
{
  char a[30],b[30];
  scanf("%s %s",a,b);
  int val=strcmp(a,b);
  if(val==0) printf("%s",a);
  else if(val>0) printf("%s",b);
  else printf("%s",a);
    return 0;
}