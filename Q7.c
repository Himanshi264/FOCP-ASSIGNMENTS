#include<stdio.h>
int main(){
    int decimal,rem,binary,dec=0,ld,wt=1;
    int ch;
    while(1){
        printf("\nPress 1 to convert decimal number to binary number");
        printf("\nPress 2 to convert binary number to decimal number");
        printf("\nPress 3 to exit");
        printf("\nEnter your choice 1/2/3 : ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter a decimal number : ");
            scanf("%d",&decimal);
            int a=decimal;
            if(decimal==0){
                printf("Binary of 0 = 0");
            }
            else if(decimal>0){
                int arr[32],i=0;
                while(decimal>0){
                    rem=decimal%2;
                    decimal=decimal/2;
                    arr[i]=rem;
                    i++;
                }
                printf("Binary of %d = ",a);
                for(int b=i-1;b>=0;b--){
                    printf("%d",arr[b]);
                }
                printf("\n");
            }
            else{
                printf("Invalid input to covert to binary");
                printf("\n");
            }
        }
        else if(ch==2){
            printf("Enter a binary number : ");
            scanf("%d",&binary);
            int b=binary;
            if(binary==0){
                printf("Decimal of 0 = 0");
            }
            else if(binary>0){
                while(binary>0){
                    ld=binary%10;
                    dec+=ld*wt;
                    binary=binary/10;
                    wt=wt*2;
                }
                printf("Decimal of %d = %d",b,dec);
                printf("\n");
            }
            else{
                printf("Invalid input to convert to decimal");
                printf("\n");
            }
        }
        else if(ch==3){
            printf("\nProgram terminated !!");
            return 0;
        }
        else{
            printf("Inavlid choice, re-enter your choice out of 1/2/3");
            printf("\n");
        }
    }
}