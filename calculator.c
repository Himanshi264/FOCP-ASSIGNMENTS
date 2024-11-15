#include<stdio.h>
#include<math.h>
float sum(float a,float b);
float diff(float a,float b);
float mul(float a,float b);
float div(float a,float b);
int main(){
    while(1){
        int ch;
        printf("\nPress 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Logrithmic value\n");
        printf("Press 6 for Square root\n");
        printf("Press 7 to exit the program\n");
        printf("\nEnter your choice 1/2/3/4/5/6/7 : ");
        scanf("%d",&ch);
        if(ch>=1 && ch<=4){
            float a,b;
            printf("Enter two numbers : ");
            scanf("%f%f",&a,&b);
            if(ch==1){
                printf("Sum of %f and %f = %f\n",a,b,sum(a,b));
            }
            else if (ch==2){
                printf("Diffrence of %f and %f = %f\n",a,b,diff(a,b));
            }
            else if(ch==3){
                printf("Multiplication of %f and %f = %f\n",a,b,mul(a,b));
            }
            else if(ch==4){
                if(b!=0){
                    printf("%f divided by %f = %f\n",a,b,div(a,b));
                }
                else{
                    printf("Division by zero is not allowed");
                }
            }
        }
        else if(ch==5 || ch==6){
            float a;
            printf("Enter a number : ");
            scanf("%f",&a);
            if(ch==5){
                if(a>0){
                    printf("Log of %f to the base e = %lf",a,log(a));
                }
                else{
                    printf("Log is only defined for positive numbers");
                }
            }
            else if(ch==6){
                if(a>0){
                    printf("Square root of %f = %lf",a,sqrt(a));
                }
                else{
                    printf("Square root is only possible for positive numbers");
                }
            }
        }
        else if(ch==7){
            printf("\nProgram terminated");
                return 0;
        }
        else{
            printf("\nInvalid choice entered, re-enter your choice");
        }
    }
}
float sum(float a,float b){
    float s=a+b;
    return s;
}
float diff(float a,float b){
    float d;
    if(a>=b){
        d=a-b;
    }
    else{
        d=b-a;
    }
    return d;
}
float mul(float a,float b){
    float m=a*b;
    return m;
}
float div(float a,float b){
    float di=a/b;
    return di;
}