//swaping using arrays pass by reference
#include<stdio.h>
void swap(float arr[]);
int main(){
    float a,b;
    printf("Enter value of a and b : ");
    scanf("%f%f",&a,&b);
    float arr[2]={a,b};
    printf("\nValues before swaping : ");
    printf("\nValue of a : %f",arr[0]);
    printf("\nValue of b : %f",arr[1]);
    swap(arr);
    printf("\n");
    printf("\nValues after swaping : ");
    printf("\nValue of a : %f",arr[0]);
    printf("\nValue of b : %f",arr[1]);
    return 0;
}
void swap(float arr[]){
    float temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return ;
}