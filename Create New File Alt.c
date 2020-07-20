// Abhijith KP
// Roll No.3
// CS1 
// Question 22

#include<stdio.h>
#include<stdlib.h>
#define filename "file.txt"

int main()
{
	char data[100],c;
    FILE *fp=fopen(filename,"w");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nEnter Data : ");
        gets(data);
        fprintf(fp, "%s", data);
    }
    fclose(fp);
    fp=fopen(filename, "r");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nDATA IN FILE\n\n\n");
        while((c=fgetc(fp))!=EOF)
            printf("%c", c);
    }
	fclose(fp);
	fp=fopen("file.txt", "a");
    if(fp==NULL)
        printf("*!!ERROR OPENING FILE!!*");
    else
    {
        printf("\n\nEnter Data : ");
        gets(data);
        fprintf(fp,"%s", data);
    }
    fclose(fp);
}