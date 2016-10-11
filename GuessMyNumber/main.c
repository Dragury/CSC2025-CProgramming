#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int number = (int)(rand()%100);
	for(int i = 0; i < 7; i++){
		printf("Guess my number that is between 1 and 100 inclusive: ");
		int guess;
		scanf("%d", &guess);
		if(guess == number){
			printf("Congratulations! that's right!\n");
			exit(0);
		} else if( guess < number ){
			printf("Too low! \n");
		} else {
			printf("Too high! \n");
		}
	}
	printf("You're out of guesses, too bad!\n");
	exit(0);
}
