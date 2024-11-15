#include<stdio.h>
int main(){
    int size,a=0;
    printf("Enter number of elements for arrays : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements for array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nYour array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                a=1;
            }
        }
    }
    if(a==0){
        printf("-1");
    }
    return 0;
}
