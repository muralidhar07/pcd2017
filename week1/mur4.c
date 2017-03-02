#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d,rpart,ipart,r1,r2;
   //input the co-efficients of a,b and c.
printf("\nenter three non-zero coefficients(a,b and c)of the quadratic equation:");
 scanf("%f%f%f", &a,&b,&c);
 //compute the discriminant.
 d=(b*b)-(4*a*c);
 printf("\nThe discriminant is:%f\n",d);
 //compute real  and equal roots.
 if(d==0)
 {
  r1=r2=-b/(2.0*a);
 printf("\nroots are real and equal:\nr1=%f\nr2=%f\n\n",r1,r2);
 }
 //compute real and distinct roots.
 else if (d>0)
 {
   r1=(-b-(sqrt(d)))/(2.0*a);
   r2=(-b+(sqrt(d)))/(2.0*a);
  printf("\nroots are real and distinct:\nr1=%f\nr2=%f\n\n",r1,r2);
   }
//compute imaginary roots.
  else
  {
  rpart=-b/(2.0*a);
  ipart=sqrt((-d))/(2.0*a);
 printf("\nRoots are imaginary:\nr1=%f+i*%f\nr2=%f-i*%f\n\n",rpart,ipart,rpart,ipart);
  }
  return 0;
}
