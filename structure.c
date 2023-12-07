// structure
#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main() {
    struct student s1;
    s1.roll=217;
    s1.cgpa=10.0;
  
    strcpy(s1.name,"Paras");
    printf("student name=%s\n",s1.name);
        
        printf("student roll no.=%d\n",s1.roll);
            
    printf("student cgpa is=%f\n",s1.cgpa);
    return 0;
}