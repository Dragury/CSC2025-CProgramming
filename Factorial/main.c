#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(){
	printf("factorial of 7 is:%d\n", factorial(7));	
	printf("rfactorial of 7 is:%d\n", rfactorial(7));
	exit(0);
}

int factorial(int value){
	if(value <= 0){
		return 0;
	}
	int total = value;
	for(int i = value-1; i > 1; i--){
		total = total * i;
	}
	return total;
}

int rfactorial(int value){
	if(value == 1){
		return 1;
	}else if(value <= 0){
		return 0;
	}else{
		return rfactorial(value-1) * value;
	}
}
