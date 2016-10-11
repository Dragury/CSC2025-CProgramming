#include <stdio.h>
#include <stdlib.h>

void printTable(float exchangeRate){
	printf("UK POUNDS   EUROS\n");
	printf("     1.00  %6.2f\n", exchangeRate);
	for(int i = 10; i <= 100; i+=10){
		float cur = i;
		printf("   %6.2f  %6.2f\n",cur,cur * exchangeRate);
	}
}

int main(int argc, char * argv[]){
	if(argc < 2){
		printf("No exchange rate provided, please supply a rate using ./Exchange <exchange rate>\n");
		exit(1);
	}
	float exchangeRate = atof(argv[1]);
	printTable(exchangeRate);
	exit(0);
}
