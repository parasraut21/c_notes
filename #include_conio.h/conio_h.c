#include <stdio.h>
/*#include<conio.h> --> not a standard lib for mingw or other compiler
Instead of that use #include<stdlib.h>

system("cls") --> for clearing console
getchar() --> For printing data*/
#include<stdlib.h>

int main() {
 //clrscr(); //present in conio.h
 //Instead of that use
 system("cls");    //clr --> for mac
 printf("Before entering keyboard");
 //getch(); -->present in conio.h
 getchar();
 
/* clrcr --> It will clear the console
 getchar() -->Print the data*/
 
 //clrcr();
 system("cls");
 printf("After Clearing first input");
//getch();
 getchar();
 
 return 0;
}