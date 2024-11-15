//using extra variable
#include<stdio.h>
int main(){
    float a,b,temp;
    printf("\nEnter values of a and b : ");
    scanf("%f%f",&a,&b);
    printf("\nValues before swaping : ");
    printf("\nValue of a = %f",a);
    printf("\nValue of b = %f",b);
    printf("\n");
    printf("\nValues after swaping : ");
    temp=a;
    a=b;
    b=temp;
    printf("\nValue of a = %f",a);
    printf("\nValue of b = %f",b);
    return 0;
}