#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,r1,r2,d;
  printf("Enter the coefficients of the quadratic equation:");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
  {
    printf("The given equation is a linear equation, roots cannot be determined");
  } 
  
       d=b*b-4*a*c;
       if(d==0)
       {
         printf(" the equation has real and equal roots");
         r1=r2=-b/2*a;
         printf(" r1=r2=%f\n",r1);
       }
       else if(d>0)
         {
           printf("the equation has real and distinct roots");
           r1=(-b+sqrt(d))/(2*a);
           r2=(-b-sqrt(d))/(2*a);
           printf("%f%f",r1,r2);
         }
         else if(d<0)
            {
              printf("the equation has imaginary roots");
              float real=(-b)/(2.0*a);
              float img=(sqrt(d))/(2.0*a);
              printf(" r1=%f+i%f",real,img);
              printf(" r2=%f-i%f",real,img);
            } 
      
}
