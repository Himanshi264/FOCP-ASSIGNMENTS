#include<stdio.h>
void rev(int arr[],int si,int ei){
    int temp;
    for(int i=si,j=ei;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
int main(){
    int size,k=1;
    printf("Enter number of elements for array : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nArray after cyclically rotating clockwise by one time : ");
    rev(arr,0,size-1);
    rev(arr,0,k-1);
    rev(arr,k,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}