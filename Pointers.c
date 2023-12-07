// Pointers
#include <stdio.h>

int main() {
   int age = 22;
   int *ptr=&age;
   int _age=*ptr;
   printf("%d",_age);

    return 0;
}
//pointers in function
/*#include <stdio.h>
void sq(int n);
void _sq(int *n);
int main() {
    int number=4;
    sq(8);
    printf("Number was..%d\n",number);
    _sq(&number);
    printf("Number was..%d\n",number);
    return 0;
}
//call by value
void sq(int n){
    n=n*n;
    printf("square is..%d\n",n);
    
}
void _sq(int *n){
    *n=(*n)*(*n);//4*4
    printf("square is..%d\n",*n);
    
}