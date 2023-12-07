// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10][10];
    int row ,col;
  printf("Enter rows and col of your matrix...\n");
  scanf("%d %d",&row,&col);
accept(a,row,col);

    return 0;
}
void accept(int a[10][10],int row,int col){
    printf("Enter the elements of matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    display(a,row,col);
}
void display(int a[10][10],int row,int col){
    printf("The matrix is....\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",a[i][j]);
        }
   printf("\n");
    }
}