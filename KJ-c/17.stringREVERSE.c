#include<stdio.h>
#include<string.h>
void reverse(char[]);
void
main ()
{
  char word[10];
  printf ("Enter the string you want to reverse ");
  gets (word);
  reverse (word);

}


void
reverse (char word[])
{
  char new[10];
  for (int i = (strlen (word) - 1), j = 0; i >= 0; i--, j++)

    {
      new[j] = word[i];
    }
  printf (" The reversed string is ");
  puts (new);
}
