#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5],count=0;
    bool flag=false;
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
        if(arr[i]==99){
            printf("student %d has scored 99\n",i+1);
            count++;
            flag=true;
        }
    }
    if(flag==true){
        printf("%d students have scored 99 marks",count);
    }
    else{
        printf("no student has scored 99 marks");
    }
    return 0;
}