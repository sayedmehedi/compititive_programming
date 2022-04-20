#include<stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[200],b[200];
    gets(a);
    gets(b);
    n=strcmpi(a,b);

   if(n==0) printf("0\n");
   if(n>=1) printf("1\n");
   if(n<0) printf("-1\n");


    return 0;
}





