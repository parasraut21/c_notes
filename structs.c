#include<stdio.h>
int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    int arr[n];

 for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    printf("%d ",arr[i]);
  }
    countodd(arr,n);
    return 0;
}
void countodd(int arr[10],int n)
{
    int count=0;
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
           arr[i]=count;
            count++; 
        }
    }
    printf("total odd no. is..%d\n",count);
     printf("total odd no. is..%d\n",arr);
}

