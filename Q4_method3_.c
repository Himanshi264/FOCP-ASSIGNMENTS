//using pass by reference(addresses/pointers)
#include<stdio.h>
void swap(float *x,float *y);
int main(){
    float a,b;
    printf("Enter values of a and b : ");
    scanf("%f%f",&a,&b);
    printf("\n");
    printf("\nValues before swaping : ");
    printf("\nValue of a : %f",a);
    printf("\nValue of b : %f",b);
    swap(&a,&b);
    printf("\n");
    printf("\nValues after swaping : ");
    printf("\nValue of a : %f",a);
    printf("\nValue of b : %f",b);
    return 0;
}
void swap(float *x,float *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}