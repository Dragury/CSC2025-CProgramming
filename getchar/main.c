#include <stdlib.h>
#include <stdio.h>
#define LENGTH 10

int main(){
	char input[LENGTH];
	for(int i = 0; i < LENGTH; i++){
		input[i] = getchar();
		if(input[i] == '\n' || input[i] == ' '){
			i--;
		}
	}
	printf("\n\n");
	for(int i = 0; i < LENGTH; i++){
		printf("%c", input[i]);
	}
	printf("\n");
	exit(0);
}
