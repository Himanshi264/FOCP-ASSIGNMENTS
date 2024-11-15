#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int user_choice(void){
    int playerChoice;
    printf("\n\nEnter your choice 0/1/2 : ");
    scanf("%d",&playerChoice);
    return playerChoice;
}
char* display_user_choice(int p1Choice){
    if(p1Choice==0){
        return "Rock";
    }
    else if(p1Choice==1){
        return "Paper";
    }
    else if(p1Choice==2){
        return "Scissors";
    }
    else{
        printf("\n\nYou entered invalid choice, enter valid choice 0/1/2 ");
        user_choice();
        return "";
    }
}
int comp_choice(void){
    srand(time(NULL));
    int rand_num=rand()%101;
    return rand_num;
}
char* display_comp_choice(int compChoice){
    if(compChoice>=0 && compChoice<33){
        return "Rock";
    }
    else if(compChoice>=33 && compChoice<66){
        return "Paper";
    }
    else{
        return "Scissors";
    }
}
// 0 for rock , 1 for paper, 2 for scissors 
void greater_choice(char userStr[],char compStr[]){
    if ((strcmp(userStr, "Rock") == 0 && strcmp(compStr, "Scissors") == 0) || 
        (strcmp(userStr, "Scissors") == 0 && strcmp(compStr, "Paper") == 0) || 
        (strcmp(userStr, "Paper") == 0 && strcmp(compStr, "Rock") == 0)) {
        printf("\n\nHooray! You won!\n");
        }
    else if(strcmp(userStr,compStr)==0){
        printf("\n\nIt's a draw\n");
    }
    else{
        printf("\n\nBetter Luck next time ! Computer won\n");
    }
}
int main(){
    printf("\nWelcome to the game of ROCK, PAPER AND SCISSORS \n");
    printf("\nRules for the game are :");
    printf("\nRock VS Paper --> Paper wins");
    printf("\nRock VS Scissors --> Rock wins");
    printf("\nScissors VS Paper --> Scissors wins");
    printf("\n\nPress 0 if your choice is Rock ");
    printf("\nPress 1 if your choice is Paper ");
    printf("\nPress 2 if your choice is Scissors ");
    int p1Choice=user_choice();
    char* userStr=display_user_choice(p1Choice);
    int compChoice=comp_choice();
    char* compStr=display_comp_choice(compChoice);
    printf("\nYou chose : %s",userStr);
    printf("\nComputer chose : %s",compStr);
    greater_choice(userStr,compStr);
    return 0;
}