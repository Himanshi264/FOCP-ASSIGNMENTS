#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0,ld;
    long int arm=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int a=num;
    int b=a;
    while(num>0){
        ld=num%10;
        num=num/10;
        count++;
    }
    while(a>0){
        ld=a%10;
        a=a/10;
        arm+=pow(ld,count);
    }
    if(b==arm){
        printf("%d is an armstrong number",b);
    }
    else{
        printf("%d is not an armstrong number",b);
    }
    return 0;
}