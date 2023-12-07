#include<stdio.h>
void accept(int a[10][10],int row ,int col){
printf("Enter the elements of the matrix...");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    scanf("%d",&a[i][j]);
    }
}
}
void display(int a[10][10],int row ,int col){
printf("The matrix is...\n");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
   printf( "%d\t",a[i][j]);

    }
printf("\n");
}
}
void countnzero(int a[10][10],int row , int col){
   int nzero=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]!=0){ 
             nzero=a[i][j];
                printf("%d",nzero)

                }

    }
} 
displaycount(a,row,col);
}
void displaycount(int a[10][10],int row ,int col){
printf("The mcount is...\n");
int nzero;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
   printf( "%d\t",nzero);

    }
printf("\n");
}
}





int main(){
    int a[10][10], row, col;int B[10][10];
    printf("Enter the row and col of matrix..");
    scanf("%d%d",&row,&col);
accept (a,row,col);
display(a,row,col);
countnzero(a,row,col);


return 0;
}