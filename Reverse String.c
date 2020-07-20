// Abhijith KP
// Roll No.3
// CS1 
// Question 17

#include<stdio.h>

void rev(char r[])
{
	char c;
	int l;
	for (l=0;r[l]!='\0';l++);
	for (int i=0;i<l/2;i++)
  	{
  		c=r[i];
  		r[i]=r[l-1-i];
  		r[l-1-i]=c;
  	}
}

int main()
{
	char a[100];
	printf("\n Enter String : ");
	scanf("%s",a);
	rev(a);
	printf("\n\n Reverse String : %s\n\n",a);
}

 

