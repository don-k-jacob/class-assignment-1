#include<stdio.h>
int factorial (int);
int recurfact (int);
void
main ()
{
  int n;
  printf ("enter a number ");
  scanf ("%d", &n);

  printf ("the factorial without using recursion is ");
  printf ("%d", factorial (n));
  printf("\n");
  printf ("the factorial using recursion is ");
  printf ("%d", recurfact (n));

}

int
factorial (int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
    {
      fact = fact * i;
    }
  return (fact);
}

int
recurfact (int n)
{
  if (n == 0)
    return 1;
  else
    return (n * recurfact (n - 1));

}
