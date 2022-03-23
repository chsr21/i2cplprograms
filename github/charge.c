#include<stdio.h>
int main()
{
  char name[20];
  float units,charge,Total;
  printf("Enter name");
  gets(name);
  printf("Enter no.of units:");
  scanf("%f",&units);
  if(units>=1 && units<=200)
  {
    charge=units*0.8;
  }
  else if(units>200 && units<=300)
      {
        charge=(200*0.8)+(units-200)*0.9;
      }
      else if(units>300)
       {
         charge=(200*0.8)+(100*0.9)+(units-300)*1;
       }
       Total=charge+100;
       if(Total>400)
       {
        Total=Total+(Total*0.15);
       }
       printf("Electicity bill\n");
       printf(" User name %s",name);
       printf("No.of units=%2f",units);
       printf("charge=%2f",Total);
       return 0;
}

