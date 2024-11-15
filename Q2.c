#include<stdio.h>
int main(){
    int a,b,ans=0,hcf=1;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    int min=a;
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    if(a>0 && b>0){
        for(int i=2;i<=min;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
                ans=1;
            }
        }
        if(ans==1){
        printf("HCF of %d and %d = %d",a,b,hcf);
        }
        else{
            printf("HCF of %d and %d = 1",a,b);
        }
    }
    else{
        printf("Invalid input for HCF");
    }
    return 0;
}