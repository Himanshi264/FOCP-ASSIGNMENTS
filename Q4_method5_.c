// swaping using bitwise XOR operators 
#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter values of a and b : ");
    scanf("%d %d",&a,&b);
    printf("\nOriginal value of a = %d and b = %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nValues after swaping -->  a = %d and b = %d",a,b);
    return 0;
}