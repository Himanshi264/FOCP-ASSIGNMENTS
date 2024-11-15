#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    printf("\nArray of marks of students is : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("maximum score is %d\n",max);
    printf("minimum score is %d",min);
    return 0;
}