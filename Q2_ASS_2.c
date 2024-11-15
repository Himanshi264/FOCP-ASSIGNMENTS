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
        switch(arr[i]){
            case 75 ... 100:
            printf("grade of student %d is A\n",i+1);
            break;
            case 60 ... 74:
            printf("grade of student %d is B\n",i+1);
            break;
            case 40 ... 59:
            printf("grade of student %d is C\n",i+1);
            break;
            default:
            printf("grade of student %d is D\n",i+1);
            break;
        }
    }
    return 0;
}