// code to calculate persentage of student from marks in sci , math , sans
#include <stdio.h>
int calcpersentage(int science,int math,int sanskrit);

int main() {
    int sci=98;
    int math=87;
    int sanskrit=67;
    printf("Persentage is..%d",calcpersentage (sci,math,sanskrit));
    

    return 0;
}
int calcpersentage(int science ,int math,int sanskrit){
    return ((science+math+sanskrit)/3);
}
