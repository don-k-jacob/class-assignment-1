// Factorial of a number using recursion.
// name: Don Kora Jacob
// roll no: 23
    #include<stdio.h>
    int Factorial(int n1)
{
   if(n1>=1)
     {
         return n1*Factorial(n1-1);
    }else
    return 1;
} 
    void main()
    {
       int no;
       scanf("%d",&no);
       printf("\n\n The Factorial of the number is :%d",Factorial(no));
    }