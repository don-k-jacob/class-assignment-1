#include <stdio.h>
struct Employee
{
int emp_id;
char emp_name[30];
int salary;
}emp[150];
int main()
{ int n,i;

  printf("Enter the number of employees\n "); 
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  
    printf("Employee id-");
    scanf("%d",&emp[i].emp_id);
    getchar();
    printf("Employee name-");
    scanf("%s",emp[i].emp_name);
    printf("Employee salary:");
    scanf("%d",&emp[i].salary);
 }


  printf("Employee id,Employee name,Employee salary\n");
   for(i=0;i<n;i++)
       printf("%d %s %d\n",emp[i].emp_id,emp[i].emp_name,emp[i].salary);
} 