#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bignums.h"


void fibonacci(char *n);

int main(int argc, char *argv[] )
{
	fibonacci( argv[1] );
	return 1;
}



void fibonacci(char *n)
{
	char *counter, *fibAct, *fibAnt, *temp;

	counter = malloc( sizeof(char)*strlen(n) +1);
	fibAct = malloc( sizeof(char) +1);
	fibAnt = malloc( sizeof(char) +1);
	
	fibAct[0] = '1';
	fibAnt[0] = '0';
	fibAct[1] = fibAnt[1] = '\0';
	counter[0] = '1';
	counter[1] = '\0';

	do
	{
		temp = fibAct;
		fibAct = longAddition(fibAnt, fibAct);
		fibAnt = temp;

		counter = increment(counter);
	}while( strcmp(counter, n) != 0 );
	
	printf("%s\n", fibAct);

	return;
}

