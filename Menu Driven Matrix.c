// Abhijith KP
// Roll No.3
// CS1 
// Question 18


#include <stdio.h>
#include <stdlib.h>


void read(int a[50][50],int r,int c)
{
    int i,j;
    printf("Enter Elemets : \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}

void display(int a[50][50],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
    printf("%d",a[i][j]);
  printf("\n");
  }
}

void add(int a[50][50],int b[50][50],int r,int c)
{
 int i,j,sum[50][50];
 for(i=0;i<r;i++)
   for(j=0;j<c;j++)
    sum[i][j]=a[i][j]+b[i][j];
 printf("Result Matrix = \n");
 display(sum,r,c);
}

void transpose(int a[50][50],int r,int c)
{
 int i,j,transpose[50][50];
 for(i=0;i<r;i++)
   for(j=0;j<c;j++)
    transpose[j][i]=a[i][j];

 display(transpose,r,c);
}

void multiply(int a[50][50],int b[50][50],int r1,int c1,int c2)
{
 int product[50][50],i,j,k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }
 printf("Result Matrix =\n");
 display(product,r1,c2);
}

int main()
{ 
	system("clear");
	int a[50][50],b[50][50],r1,c1,r2,c2,choice;
  	printf("\nEnter the Size of the Matrix A : ");
  	scanf("%d %d",&r1,&c1);
  	printf("\n\nMatrix A\n");
  	read(a,r1,c1);
	system("clear");
  	printf("\nEnter the Size of the Matrix B :\n");
  	scanf("%d %d",&r2,&c2);
  	printf("\n\nMatrix B\n");
  	read(b,r2,c2);
  	system("clear");
  	while(1)
  	{
  		printf("  MENU\n*------*\n\n");
   		printf("1.Display Matrix  \n2.Add Matrix  \n3.Multiply Matrix  \n4.Transpose of Matrix \n5.Exit\n");
   		printf("______________________________\n\nEnter Choice : ");
   		scanf("%d",&choice);
   		switch(choice)
   		{
    		case 1: printf("\nMatrix A\n");    
  					printf("---------\n");
  					display(a,r1,c1);
  					printf("\n\nMatrix B\n");
  					printf("---------\n");  
  					display(b,r2,c2);
  					break;
    		case 2: if(r1==r2 && c1==c2)
    				{
    					printf("MATRIX SUM\n");
    					printf("-----------\n");
    				    add(a,b,r1,c1);
    				}
            		else
                		printf("INCOMPACTABLE MATRIX\n");
            		break;
   		 	case 3: if(c1==r2)
    				{
    					printf("MATRIX PRODUCT\n");
    					printf("---------------\n");
                		multiply(a,b,r1,c1,c2);
	    			}
    	        	else
						printf("INCOMPACTABLE MATRIX\n");
					break;
 		   	case 4: printf("TRANSPOSE OF A\n");
    				printf("---------------\n");
	    	    	transpose(a,r1,c1);
           			printf("TRANSPOSE OF B\n");
            		printf("---------------\n");
            		transpose(b,r2,c2);
					break;
    		case 5: exit(0);
    				break;
    		default:printf("\n WRONG INPUT\n\n");
   		} 
   	}
}