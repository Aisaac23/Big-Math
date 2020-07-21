#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bignums.h"

void infinteCounter(unsigned long long stopAtDigits);


void palindromeQuest(char *number);

int main(int argc, char *argv[] )
{
	infinteCounter( atoi( argv[1] ) );
	return 1;
}

void infinteCounter(unsigned long long stopAtDigits)
{
	char *counter;

	counter = malloc( sizeof(char)*stopAtDigits );
	counter[0] = '0';
	counter[1] = '\0';
	
	do
	{
		printf("%s", counter);
		counter = increment(counter);
		system("clear");
		getchar();
		
	}while( strlen(counter) != stopAtDigits);
	

}
