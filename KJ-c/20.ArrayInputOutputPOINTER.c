#include<stdio.h>
void main(){
    int a[50],N,*ptr;
    ptr=a;
    printf("enter array size ");
    scanf("%d",&N);
printf("enter the array elements");

    for(int i=0;i<N;i++)
    {
        scanf("%d",(ptr+i));
    }

printf("The array elements are ");

    for(int i=0;i<N;i++)
    {
        printf("  %d  ",*(ptr+i));
    }


    
}