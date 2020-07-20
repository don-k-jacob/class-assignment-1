// Abhijith KP
// Roll No.3
// CS1 
// Question 22

#include<stdio.h>
#include<stdlib.h>
#define filename "file.txt"


void write()
{
	system("clear");
	char data[100];
    FILE *fp=fopen(filename,"w");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nEnter Data : ");
        gets(data);
        fprintf(fp, "%s", data);
        fclose(fp);
    }

}

void display()
{
	system("clear");
	char c;
	FILE *fp=fopen(filename, "r");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nDATA IN FILE\n\n\n");
        while((c=fgetc(fp))!=EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
    }
}

void add_data()
{
	system("clear");
	char data[100];
	FILE *fp=fopen("file.txt", "a");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nEnter Data : ");
        gets(data);
        fprintf(fp, " %s", data);
        fclose(fp);
    }

}



int main()
{
	while(1)
	{
		system("clear");
		int ch;
		char x;
		printf("\n\nFILE OPERATIONS\n");
		printf("1. WRITE \n2. DISPLAY \n3. ADD DATA \n4. EXIT\n\n");; 
		printf("___________________________\n\n");
		scanf("%d",&ch);
		system("clear"); 
		switch(ch)
		{
			case 1 : write();
				     break;	
			case 2 : display();
					 break;
			case 3 : add_data();
					 break;
			case 4 : exit(0); 
					 break;
			default: printf("\n\n *!!WRONG INPUT!!*\n\n");
		}
	}
}



