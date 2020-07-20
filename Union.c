// Abhijith KP
// Roll No.3
// CS1 
// Question 15

#include <stdio.h>

#define C_SIZE 50

union Address
{
    char name[C_SIZE];
    char hname[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
}person;

int main()
{  
    printf("\n\nEnter Name : ");
    scanf("%s",person.name);
    printf("Enter House name : ");
    scanf("%s",person.hname);
    printf("Enter City Name : ");
    scanf("%s",person.cityname);
    printf("Enter State Name : ");
    scanf("%s",person.state);
    printf("Enter Pin : ");
    scanf("%s",person.pin);
    printf("\n\n Name         : %s \n", person.name);
    printf(" House Name   : %s \n", person.hname);
    printf(" City Name    : %s \n", person.cityname);
    printf(" State name   : %s \n", person.state);
    printf(" Pin          : %s \n\n\n", person.pin);
 }
