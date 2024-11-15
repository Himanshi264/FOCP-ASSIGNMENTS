#include <stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*(i);
    }
    return fact;
}
int icj(int i,int j){
    int value=factorial(i)/(factorial(j)*factorial(i-j));
    return value;
}
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i=0;i<rows;i++) {
        for (int space=0;space<(rows-i-1);space++) {
            printf(" ");
        }
        int value; 
        for (int j=0;j<=i;j++) { 
            value=factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d ",icj(i,j));
        }
        printf("\n"); 
    }
    return 0;
}