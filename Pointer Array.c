// Abhijith KP
// Roll No.3
// CS1 
// Question 20


#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int *p=a;    
    printf("\n\n Enter Array Size : ");
    scanf("%d", &n);
    printf("\n\n Enter Elements : ");
    for (i=0;i<n;i++)
        scanf("%d", (p+i)); 
    printf("\n\n Array Elements : ");
    for (i=0;i<n;i++)
        printf("%d\t", *(p+i));
    printf("\n");
  }