// Abhijith KP
// Roll No.3
// CS1 
// Question 23

#include <stdio.h>
#include <stdlib.h>
#define filename "file.txt"

int main()
{
	FILE *fp=fopen(filename,"r");;
	char ch;
	int nl=1,nc=0,nw=0;
	if(fp==NULL)
  		printf("*!!ERROR OPENING FILE!!*");
	ch=getc(fp);
	while(ch!=EOF)
	{
		nc++;
		if (ch=='\n') 
			nl++;
		if(ch==' ')
			nw++;
		ch=getc(fp);
	}
	fclose(fp);

	printf("\n\nNumber of characters : %d \n\nNumber of words : %d \n\nNumber of lines : %d\n\n",nc,nw,nl);
	
	fp=fopen("output.txt","w");
	fprintf(fp,"Number of characters : %d \n\nNumber of words : %d \n\nNumber of lines : %d\n\n",nc,nw,nl);
	fclose(fp);
}
