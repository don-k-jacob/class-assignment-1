// Abhijith KP
// Roll No.3
// CS1
// Quiestion 21

#include <stdio.h>

int arraysum(int *ptr,int n)
{
	int sum=0;
 	for (int i=0;i<n;i++)
        sum=sum+ *(ptr + i);
 	return sum;
}

int main()
{
	int n, arr[500],sum;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
    sum=arraysum(arr,n);
    printf("\nArray elements sum = %d \n\n",sum);
}
