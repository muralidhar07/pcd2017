#include<stdio.h>
int rotateright(int x,int n)
{
 n=n%32;
 int l=32-n;
 return x>>n|x<<l;
}
int main()
{
 int x,n;
 printf("enter the number.\n");
 scanf("%d",&x);
 printf("enter the number to shift\n");
 scanf("%d",&n);
 int a= rotateright(x,n);
 printf("%d",a);
 return 0;
}


