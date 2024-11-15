#include<stdio.h>
int main(){
    int a,b,sub;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    if(a>b){
        sub=a+(~b+1);
        printf("Difference of %d and %d = %d",a,b,sub);
    }
    else{
        sub=b+(~a+1);
        printf("Difference of %d and %d = %d",b,a,sub);
    }
    return 0;
}