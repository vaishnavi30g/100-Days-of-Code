//Guess a number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // Intialize random number generator
    srand(time(0));

    // Generate random number between 1and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // Print the random number 
   // printf("Random Number: %d\n", randomNumber);

   do
   {
    printf("Guess the number between 1 and 100\n");
    scanf("%d",&guessed);
    if(guessed>randomNumber){
        printf("Guess lower number pls!\n"); }
    else if(guessed<randomNumber){
        printf("guess higher number pls!\n");}
    else{printf("Congrats!\n");
	}
    no_of_guesses++;
     }
     while(guessed!=randomNumber);
    printf("You guess the number in %d guesses",no_of_guesses);
    return 0;
}









// Snake,Water ,gun
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int player,computer = rand() % 3;
    /*
    0-->snake
    1-->water
    2-->gun
    */
  printf("Choose 0 for snake , 1 for water and 2 for gun\n");
  scanf("%d",&player);
  printf("%d\n",computer);

  if(player == 0 && computer == 1){
    printf("You win\n");
  }
  else if(player == 0 && computer == 2){
    printf("You loose\n");
  }
  else if(player == 0 && computer == 0){
    printf("Its a draw\n");
  }
  else if(player == 1 && computer == 1){
    printf("Its a draw\n");
  }
  else if(player == 1 && computer == 0){
    printf("You loose\n");
  }
  else if(player == 1 && computer == 2){
    printf("You win\n");
  }
  else if(player == 2 && computer == 0){
    printf("You win\n");
  }
  else if(player == 2 && computer == 1){
    printf("You loose\n");
  }
  else if(player == 2 && computer == 2){
    printf("Its a draw\n");
  }
  return 0;
}
