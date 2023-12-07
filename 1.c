#include<stdio.h>
 struct student
{
	int roll_no;
	char name[20];
	int marks;

};
 int main(){
	 struct student s[10];
	 int n;
	 printf("Enter the no. of students..\n");
	 scanf("%d",&n);
	 accept(s,n);
	 
 	return 0;
 }


 void accept(struct student s[10],int n){
	 int i;
	 printf("Enter the student details..\n");
	 for(i=0;i<n;i++){
		 printf("Enter roll_no...\n");
		 scanf("%d",&s[i].roll_no);
		 printf("Enter student name....\n");
		 scanf("%s",s[i].name);
		 printf("student marks..\n");
		 scanf("%d",&s[i].marks);


	 }display(s,n);
 }

 void display(struct student s[10],int n){
 	 int i;
 	 printf(" The student details are..\n");
 	 for(i=0;i<n;i++){
 		 printf("Roll_n..%d\n",s[i].roll_no);

 		 printf("student name...%s\n",s[i].name);

 		 printf("student marks..%d\n",s[i].marks);

 	 }
  }