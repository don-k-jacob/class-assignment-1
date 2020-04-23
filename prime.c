//check a number is a prime number or not using recursion
// name: Don Kora Jacob
// roll no: 23
    #include<stdio.h>
    int i;
    int Prime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         Prime(n1);
      }
}
    void main()
    {
       int no;
       scanf("%d",&no);
    i = no/2;
    int primeNo = Prime(no);

   if(primeNo==1)
        printf(" The given number %d is a prime number. \n",no);
   else
      printf(" \nThe given number %d is not a prime number. \n",no);
    }