#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5],num;
    bool flag=true;
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
            flag=true;
            num=i+1;
            break;
        }
        else{
            flag=false;
        }
    }
    if(flag==true){
        printf("student %d has scored first 99",num);
    }
    else{
        printf("no student has scored 99 marks");
    }
    return 0;
}
