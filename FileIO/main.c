#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Please enter an integer number(1-2147483647): ");
	char input[10];
	scanf("%s", input);
	FILE * fp = fopen("FileIO.txt","w");
	int max = atoi(input);
	for(int i = 1; i <= max; i++){
		fprintf(fp, "%d\n", i);
	}
	fclose(fp);
	exit(0);
}
