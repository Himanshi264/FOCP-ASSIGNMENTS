#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5],count=0;
    bool flag=false;
    printf("enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray is : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=1;i<4;i++){
        if((arr[i]>arr[i-1]) && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
            count++;
            flag=true;
        }
    }
    if(flag==true){
        printf("\ntotal no. of peak values are %d",count);
    }
    else{
        printf("\nthere is no peak value in the array");
    }
    return 0;
}