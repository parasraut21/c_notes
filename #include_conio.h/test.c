#include <stdio.h>
#include<stdlib.h>

int main() {

int a=3 ;
int b=2 ;
int c=a+b;
printf("The result of a+b is..%d",c);
getchar(); // It will hold the screen untill we press enter

/* system("cls") --> It will clear the console
 getchar() -->Print the data*/
 
 
 system("cls");
 c=a-b;
 printf("\nThe result of a-b is..%d",c);
 getchar(); 
 
 return 0;
}