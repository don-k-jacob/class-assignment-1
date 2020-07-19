  #include <stdio.h>
#include <stdlib.h>
void input(int a[][50],int m,int n)
{
 int i,j;
 printf("enter the elements row by row\n");
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
void display(int a[][50],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
    printf("%5d",a[i][j]);
  printf("\n");
  }
}
void add(int a[][50],int b[][50],int m,int n)
{
 int i,j,c[50][50];
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
 printf("Sum of matrix...\n");
 display(c,m,n);
}
void transpose(int a[][50],int m,int n)
{
 int i,j,c[50][50];
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    c[j][i]=a[i][j];

 display(c,n,m);
}
void multiply(int a[][50],int b[][50],int m1,int n1,int n2)
{
 int c[50][50],i,j,k;
// Multiply the two
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
 printf("Product of matrix...\n");
 display(c,m1,n2);
}
int main()
{ int a[50][50],b[50][50],m1,n1,m2,n2,op;
  
  printf("Enter the size of the matrix A row,column\n");
  scanf("%d%d",&m1,&n1);
  printf("Enter Matrix A\n");
  input(a,m1,n1);
  printf("Enter the size of the matrix B row column\n");
  scanf("%d%d",&m2,&n2);
  printf("Enter Matrix B\n");
  input(b,m2,n2);
  system("clear");
  printf("Matrix A..\n");  
  display(a,m1,n1);
  printf("Matrix B..\n");  
  display(b,m2,n2);
  while(1)
  {
  
   printf("1.add  2.multiply  3.transpose 4.exit \n");
   printf("Enter the option.....:");
   scanf("%d",&op);
   switch(op)
   {
    case 1: if(m1==m2 && n1==n2)
                   add(a,b,m1,n1);
                else
                   printf("Matrix cannot be added\n");
                 break;
    case 2: if(n1==m2)
                   multiply(a,b,m1,n1,n2);
               else
                   printf("cannot be multiplied\n");
                break;
    case 3: printf("Transpose of A..\n");
                transpose(a,m1,n1);
                printf("Transpose of B..\n");
                transpose(b,m2,n2);
                break;
                case 4: exit(1);
                break;

   } 
   }
}