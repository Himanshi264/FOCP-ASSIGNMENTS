#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5],count=0;
    bool flag=true;
    printf("enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray is : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(arr[i]==1){
            printf("1 is neither prime nor composite\n");
        }
        else if(arr[i]==2){
            printf("2 is prime\n");
            count++;
        }
        else if(arr[i]>2){
            for(int j=2;j<arr[i];j++){
                if(arr[i]%j==0){
                    flag=false;
                    break;
                }
                else{
                    flag=true;
                }
            }
            if(flag==true){
                count++;
                printf("%d is prime\n",arr[i]);
            }
        }
    }
    if(flag==true){
        printf("\nnumber of prime numbers are %d",count);
    }
    else{
        printf("\nno prime number in array");
    }
    return 0;
}