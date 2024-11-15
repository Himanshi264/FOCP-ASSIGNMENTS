#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray of marks of students is : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("%d is even\n",arr[i]);
        }
        else{
            printf("%d is odd\n",arr[i]);
        }
    }
    return 0;
}
