#include<stdio.h>
char arr[9]={'1','2','3','4','5','6','7','8','9'};
void showboard(void);
int checkForWin(void);
int main(){
    int player=1;
    int choice,i;
    char mark;
    do{
        showboard();
        player=(player%2)?1:2;
        printf("Enter your choice : ");
        scanf("%d",&choice);
        mark=(player==1)?'X':'0';
        if(choice==1 && arr[0]=='1'){
            arr[0]=mark;
        }
        else if(choice==2 && arr[1]=='2'){
            arr[1]=mark;
        }
        else if(choice==3 && arr[2]=='3'){
            arr[2]=mark;
        }
        else if(choice==4 && arr[3]=='4'){
            arr[3]=mark;
        }
        else if(choice==5 && arr[4]=='5'){
            arr[4]=mark;
        }
        else if(choice==6 && arr[5]=='6'){
            arr[5]=mark;
        }
        else if(choice==7 && arr[6]=='7'){
            arr[6]=mark;
        }
        else if(choice==8 && arr[7]=='8'){
            arr[7]=mark;
        }
        else if(choice==9 && arr[8]=='9'){
            arr[8]=mark;
        }
        else{
            printf("Inavlid choice");
            player--;
        }
        i=checkForWin();
        player++;
    }while(i==-1);
    showboard();
    if(i==1){
        printf("Player %d won\n",player);
    }
    else{
        printf("Game is draw");
    }
    return 0;
}
void showboard(void){
    printf("\tTIC TAC TOE\n");
    printf("\t|\t|\n");
    printf("\t|\t|\n");
    printf("   %c    |   %c   |   %c  \n",arr[0],arr[1],arr[2]);
    printf("--------|-------|--------");
    printf("\t|\t|\n");
    printf("   %c    |   %c   |   %c  \n",arr[3],arr[4],arr[5]);
    printf("\t|\t|\n");
    printf("--------|-------|--------");
    printf("\t|\t|\n");
    printf("   %c    |   %c   |   %c  \n",arr[6],arr[7],arr[8]);
    printf("\t|\t|\n");
}
int checkForWin(void){
    if(arr[0]==arr[1] && arr[2]==arr[1] ){
        return 1;
    }
    else if(arr[3]==arr[4] && arr[4]==arr[5] ){
        return 1;
    }
    else if(arr[6]==arr[7] && arr[7]==arr[8] ){
        return 1;
    }
    else if(arr[0]==arr[3] && arr[3]==arr[6]){
        return 1;
    }
    else if(arr[1]==arr[4] && arr[4]==arr[7]){
        return 1;
    }
    else if(arr[2]==arr[5] && arr[5]==arr[8]){
        return 1;
    }
    if(arr[0]==arr[4] && arr[4]==arr[8]){
        return 1;
    }
    else if(arr[2]==arr[4] && arr[4]==arr[6]){
        return 1;
    }
    else if(arr[0]!='1' && arr[1]!='2' && arr[2]!='3' && arr[3]!='4' && arr[4]!='5' && arr[5]!='6' && arr[6]!='7' && arr[7]!='8' && arr[8]!='9'){
        return 0;
    }
    else {
        return -1;
    }
}