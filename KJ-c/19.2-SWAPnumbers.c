#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int a,b;
    printf("enter the value of a ");
    scanf("%d",&a);
     printf("enter the value of b ");
    scanf("%d",&b);
    swap(&a,&b);
}

void swap(int *a,int *b)
{
   int t=*a;
    *a=*b;
    *b=t;
printf("the new value of a is %d \n ",*a);
  printf("the new value of b is %d ",*b);  
}