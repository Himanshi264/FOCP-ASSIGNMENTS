#include<stdio.h>
int main(){
    int size,num,pos;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nenter the element to be inserted : ");
    scanf("%d",&num);
    printf("\nenter the position of the element : ");
    scanf("%d",&pos);
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    size++;
    printf("\nupdated array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}