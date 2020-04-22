// FibonacciSeries
// name: Don Kora Jacob
// roll no: 23

    #include<stdio.h>
     
    int FibonacciSeries(int);
     
    void main()
    {
       int lim, i = 1, m;
       scanf("%d",&lim);
       printf("Fibonacci Series\n");
     
       for (m=1;m<=lim;m++)
       {
          printf("%d\n", FibonacciSeries(i));
          i++; 
       }
    }
     
    int FibonacciSeries(int n)
    {
       if (n == 0)
          return 0;
       else if (n == 1)
          return 1;
       else
          return (FibonacciSeries(n-1) + FibonacciSeries(n-2));
    } 
    