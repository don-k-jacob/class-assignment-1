// count the digits of a given number using recursion
// name: Don Kora Jacob
// roll no: 23

    #include<stdio.h>
     
        
    int Digits(int n1)
{
    static int ctr=0;

     if(n1!=0)
     {
          ctr++;
         Digits(n1/10);
    }

    return ctr;
}

     
    void main()
    {
       int no;
       scanf("%d",&no);
       printf("\n\n The number of digits in the number is :%d",Digits(no));
    }
 
    