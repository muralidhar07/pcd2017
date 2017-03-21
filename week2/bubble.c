#include<stdio.h>

void bubblesort(long[],long);

int main()
{
   long array[100],n,c,d,swap;

   printf("enter number of elements/n");
   scanf("%ld",&n);

   printf("enter %ld intergers/n",n);

   for(c=0;c<n;c++)
     scanf("%ld",&array[c]);

   bubblesort(array,n);
   
   printf("sorted list in ascending order:\n");

   for (c=0;c<n;c++)
     printf("%ld/n",array[c]);
   return 0;
}
 void bubblesort(long list[],long n)
 {
  long c,d,t;

   for (c=0;c<(n-1);c++)
   {
    for(d=0;d<n-c-1;d++)
    {
     if(list[d]>list[d+1])
     {
     t=list[d];
     list[d]=list[d+1];
     list[d+1]=t;
     }
    } 
   }
  }
