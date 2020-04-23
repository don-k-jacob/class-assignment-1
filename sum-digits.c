// sum of digits of a number using recursion
// name: Don Kora Jacob
// roll no: 23
    #include<stdio.h>
    int Digits(int n1)
{
    static int sum=0;
     if(n1!=0)
     {
         sum+=n1%10;
         Digits(n1/10);
    }

    return sum;
} 
    void main()
    {
       int no;
       scanf("%d",&no);
       printf("\n\n The number of digits in the number is :%d",Digits(no));
    }