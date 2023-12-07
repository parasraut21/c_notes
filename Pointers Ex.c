// Pointers
#include <stdio.h>

int main() {
  //ex.1
  int *ptr;
  int x;
  ptr =&x;
  *ptr=0;
  printf("x is %d\n",x);
  printf("*ptr is %d\n",*ptr); 
//ex.2
*ptr+=5;//*ptr=*ptr+5
        //x=x+5
        //x=0+5=5
printf("x is %d\n",x);
printf("*ptr is %d\n",*ptr);
//ex.3
(*ptr)++;//*ptr=*ptr+1
         //x=x+1
         //x=5+1=6
printf("x is %d\n",x);
printf("*ptr is %d\n",*ptr);     
         
        
    return 0;
}
/*// Pointers
#include <stdio.h>

int main() {
float value=100.00;
float *ptr=&value;
float **pptr=&ptr;
printf("value is..%f",**(pptr));
        
    return 0;
}*/