#include<stdio.h>
int main(){
    int arr[5],sum=0;
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
        sum=sum+arr[i];
    }
    printf("sum of marks of all the students is %d",sum);
    return 0;
}