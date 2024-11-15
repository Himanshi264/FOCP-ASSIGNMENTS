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
    printf("\nenter the position of the element to be deleted : ");
    scanf("%d",&pos);
    printf("\narray after deleting the element %d : ",arr[pos-1] );
    for(int i=pos;i<size;i++){
        arr[i-1]=arr[i];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}