#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the values of x and y coordinates : ");
    scanf("%f%f",&x,&y);
    printf("Your point is (%f,%f)\n",x,y);
    if(x==0 && y==0){
        printf("Point (0,0) is origin");
    }
    else if(x==0 && y>0){
        printf("The coordinate point (0,%f) lies on y-axis",y);
    }
    else if(x>0 && y==0){
        printf("The coordinate point (%f,0) lies on x-axis",x);
    }
    else if(x>0 && y>0){
        printf("The coordinate point (%f,%f) lies in the First quadrant",x,y);
    }
    else if(x<0 && y>0){
        printf("The coordinate point (%f,%f) lies in the Second quadrant",x,y);
    }
    else if(x<0 && y<0){
        printf("The coordinate point (%f,%f) lies in the Third quadrant",x,y);
    }
    else if(x>0 && y<0){
        printf("The coordinate point (%f,%f) lies in the Fourth quadrant",x,y);
    }
    return 0;
}