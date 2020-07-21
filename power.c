#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bignums.h"


char *power(char *n, char *m);

int main(int argc, char *argv[] )
{
	printf("result: %s\n", power( argv[1] , argv[2]) );
	return 1;
}



char *power(char *n, char *m)
{
	char *result, *counter;
	counter = malloc( sizeof(char)*strlen(n) +1);
	counter[0] = '0';
	counter[1] = '\0';
	
	result = n;
	if( strcmp(m, "0") == 0 )
		return counter;
	if( strcmp(m, "1") == 0 )
		return n;
	counter[0] = '1';
	do
	{
		result = longMultiplication(result, n);
		counter = increment(counter);
	}while(strcmp(counter, m) != 0);

	return result;
}

