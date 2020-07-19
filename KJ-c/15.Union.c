#include<stdio.h>
#include<string.h>
#define C_SIZE 20
union address{
    char name[C_SIZE];
    char houseName[C_SIZE];
     char cityName[C_SIZE];
    char state[C_SIZE];
     char pincode[C_SIZE];
};
void main(){
    union address user1;
 printf("Enter the name ");
 gets(user1.name);
  printf("Enter the house name ");
 gets(user1.houseName);
  printf("Enter the city name ");
 gets(user1.cityName);
  printf("Enter the state ");
 gets(user1.state);
  printf("Enter the pincode ");
 gets(user1.pincode);
 printf("the complete details are \n");
  printf("the name is ");
 puts(user1.name);
  printf("the house name is ");
 puts(user1.houseName);
  printf("the city name is ");
 puts(user1.cityName);
  printf("the state is ");
 puts(user1.state);
  printf("the pincode id ");
 puts(user1.pincode);
}