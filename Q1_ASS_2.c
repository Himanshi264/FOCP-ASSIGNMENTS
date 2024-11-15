#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("original array : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\nupdated array : ");
    for(int i=0;i<5;i++){
        arr[i]=arr[i]+5;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}