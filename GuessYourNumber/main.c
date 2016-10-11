#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int upper = 100;
	int lower = 1;
	printf("Please pick a number and remember it, I'm going to try and guess it.\n");
	for(int i = 0; i < 7; i++){
		printf("Is your number %d? [yes/higher/lower]: ", (upper+lower)/2);
		char response[7];
		scanf("%s", response);
		for(int j = 0; j < 7; j++){
			response[j] = tolower(response[j]);
		}
		if(strcmp(response, "yes") == 0){
			printf("I guessed it!\n");
			exit(0);
		} else if(strcmp(response, "higher") == 0){
			printf("ok....\n");
			lower = (upper+lower)/2 + 1;
		} else if(strcmp(response, "lower") == 0){
			printf("ok....\n");
			upper = (upper+lower)/2 -1;
		} else {
			printf("I don't know what you mean. I'm gonna go...\n");
			exit(1);
		}
	}
	printf("I mean, it's mathematically impossible for me to have not guessed it so you must be lying...\n learn to play fair.\n");
}	
