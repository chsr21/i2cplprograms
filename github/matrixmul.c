//program to illustrate matrix multiplication

#include<stdio.h>
int main()
{
   int m,n,p,q,i,j,k;
   printf("Enter the size of Mtrix A:");
   scanf("%d%d",&m,&n);
   printf("Enter the size of Matrix B :");
   scanf("%d%d",&p,&q);
   if(n!=p)
   {
       printf("Matrix Multiplication not possible\n");
       return 1;
   }
   int a[m][n], b[p][q], c[m][q];
   printf("Enter data into Matrix A:");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Matrix A- \n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   printf("Enter data into Matrix B :");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
       scanf("%d",&b[i][j]);
     }
   }
   printf("Matrix B-\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
       printf("%d ",b[i][j]);
     }
     printf("\n");
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<q;j++)
       {
          c[i][j]=0;
          for(k=0;k<n;k++)
          {
             c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
          }
        }
   }
   printf("The Product matrix is- \n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<q;j++)
     {
        printf("%d ",c[i][j]);
     }
     printf("\n");
   }
   return 0;
}
