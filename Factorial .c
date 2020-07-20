// Abhijith KP
// Roll No.3
// CS1 
// Question 16


#include <stdio.h>

int rfact(int n)
{
    if(n!=1&&n!=0)
    {
        return n*rfact(n-1);
    }
    return 1;
}

int nrfact(int n)
{
	int fact=1;
	for (int i=1; i<=n; i++)
		fact*=i;
	return fact;
}

int main()
{
    int n,factorial,c;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Choose \n\t1)Factorial using recursive fn. \n\t2)Factorial using non recursive fn.\n\n\t Choice : ");
    scanf("%d",&c);
    switch(c)
    {
    	case 1 :factorial=rfact(n);
    			break;
    	case 2 :factorial=nrfact(n);
    			break;
    	default:printf("\n---WRONG INPUT---\n\n");
    }
    printf("\n\nThe factorial of the number %d is: %d \n\n",n,factorial );
}

