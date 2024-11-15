#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char word[]="program";
    int word_len=strlen(word);
    int max_tries=3;
    int tries=0;
    int guessed[word_len];
    for(int i=0;i<word_len;i++){
        guessed[i]=1;
    }
    srand(time(NULL));
    int idx1,idx2,idx3;
    idx1=rand()%(word_len);
    do{
        idx2=rand()%word_len;
    }while(idx1==idx2);
    do{
        idx3=rand()%word_len;
    }while((idx1==idx2) && (idx2==idx3));
    guessed[idx1]=0,guessed[idx2]=0,guessed[idx3]=0;
    char guess;
    int found=1;
    printf("\nWelcome to the game of Hangman.");
    printf("\nGuess the complete word in 3 chances and win the game\n");
    while(tries<max_tries){
        for(int i=0;i<word_len;i++){
            if(guessed[i]==1){
             printf("%c ",word[i]);
            }
            else{
                printf("_ ");
            }
        }
        printf("\nEnter your character : ");
        scanf("%c",&guess);
        getchar();
        tries++;
        guess=tolower(guess);
        if(word[idx1]==guess){
            guessed[idx1]=1;
            printf("\nYou guessed the character right");
        }
        else if(word[idx2]==guess){
            guessed[idx2]=1;
            printf("\nYou guessed the character right");
        }
        else if(word[idx3]==guess){
            guessed[idx3]=1;
            printf("\nYou guessed the character right\n");
        }
        else{
            printf("\nSorry ! Wrong character guessed\n");
        }
        printf("\nNumber of tries left are = %d\n",max_tries-tries);
    }
    if(tries==2){
            printf("\nAll tries have been exhausted");
    }
    for(int i=0;i<word_len;i++){
        if(guessed[i]==0){
            found=0;
            break;
    }
    if(found==1){
        printf("\nHooray! You guessed the complete word");
        printf("\nprogram");
        exit(0);
    }
    else{
        printf("\nSorry! You were not able to guess the word");
        printf("\nThe word was program");
    }
    }
    return 0;
}