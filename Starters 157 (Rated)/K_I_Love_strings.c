#include<stdio.h>
#include<string.h>
int main()
{
  int n; scanf("%d",&n);
  for(int i=0;i<n;i++){
    char a[55],b[55];
    scanf("%s %s",a,b);
    // printf("%s",a);
    int l=strlen(a);
    int r=strlen(b);
    // printf("%d %d",l,r);
    for(int j=0;j<l+r;j++){
        if(j<l){
            printf("%c",a[j]);
        }
        if(j<r) printf("%c",b[j]);
    }
    printf("\n");
  }
    return 0;
}