#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=(5-i+1);j++){
            if(j%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        for(int j=(2*i-1);j>=1;j--){
            printf(" ");
        }
        for(int j=(5-i+1);j>=1;j--){
            if((i+j)%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
