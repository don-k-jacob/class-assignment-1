// Abhijith KP
// Roll No.3
// CS1 
// Question 14

#include<stdio.h>
#include<stdlib.h>

struct employee
{
	int id, Salary;
	char Name[100];
};

int main()
{
	int n,i;
	printf("Enter the number of employees=");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("\nEmployee No : %d \n",i+1);
		printf("Enter Employee id : ");
		scanf("%d",&e[i].id);
		printf("Enter Employee Name : ");
		scanf("%s", e[i].Name);
		printf("Enter Employee Salary : ");
		scanf("%d",&e[i].Salary);
		printf("\n\n");
	}
	system("clear");
	printf("\nThe Details Of Employees\n\n");
	printf("Employee ID\t Name\t\t Salary\n");
	for(i=0;i<n;i++)
		printf(" %d\t\t %s\t\t %d \n",e[i].id,e[i].Name,e[i].Salary);

}