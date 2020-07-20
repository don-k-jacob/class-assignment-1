// Abhijith KP
// Roll No.3
// CS1 
// Question 19


#include <stdio.h>

void sum(int *p, int *q)
{
    int sum = *p + *q;
    printf("Sum = %d\n\n", sum);
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{
    int a, b, *p, *q, choice;
    printf("Enter two integers =>\n  a = ");
    scanf("%d", &a);
    printf("\n  b = ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    printf("\n\n1.Get Sum\n2.Swap Elements\n\nEnter Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: sum(p,q);
                break;
        case 2: swap(p,q);
                printf("\n\n AFTER SWAPPING \n a = %d\n b = %d\n\n", a, b);
                break;
        default:printf("WRONG INPUT\n\n\n");
    }
    
}































// int main()
// {
//     int x, y;
//     printf("Enter Value of x ");
//     scanf("%d", &x);
//     printf("\nEnter Value of y ");
//     scanf("%d", &y);
//     swap(&x, &y);
//     printf("\nAfter Swapping: x = %d, y = %d", x, y);
//     return 0;
// } 
