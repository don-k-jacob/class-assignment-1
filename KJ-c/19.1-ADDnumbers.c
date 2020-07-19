

#include<stdio.h>
void main ()
{
  int *sum, *p1, *p2,a,b;
  printf ("enter value of a ");
  scanf ("%d", &a);
  printf ("enter value of b ");
  scanf ("%d", &b);
  p1=&a;
  p2=&b;
  sum=*p1+*p2;
  printf("the sum is %d ",sum);

}