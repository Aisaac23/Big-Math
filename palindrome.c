#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bignums.h"

int isPalindrome(char *word);
char *getReversed(char *word);

void palindromeQuest(char *number);

int main(int argc, char *argv[] )
{
	palindromeQuest( argv[1] );
	return 1;
}

void palindromeQuest(char *number)
{
	char *reversed, *resultSum;
	unsigned long long digits = 0;
	int len;
	
	len = strlen(number);
	resultSum = malloc( sizeof(char)*len );
	strcpy(resultSum, number);
	resultSum[len] = '\0';
	
	do
	{
		reversed = getReversed(resultSum);
		resultSum = longAddition(resultSum, reversed);
		system("clear");
		if(digits < 2000000000000)
			continue;
		else
			digits++;
		
	}while( isPalindrome(resultSum) != 0);
	

}


int isPalindrome(char *word)
{
	char *reversed;
	unsigned long long length, index;
	int boolean;
	
	length = strlen( word );
	printf("%llu\n", length );
	reversed = malloc( sizeof(char)*length +1);
	index = 0;
	reversed[length] = '\0';

	do
	{
		length--;
		reversed[index] = word[length];
		index++;

	}while( length>0 );
	
	boolean = strcmp(word, reversed) != 0 ? -1 : 0;

	free(reversed);

	return boolean;
}

char *getReversed(char *word)
{
	char *reversed;
	unsigned long long length, index;
	
	length = strlen( word );
	reversed = malloc( sizeof(char)*length +1);
	index = 0;
	reversed[length] = '\0';

	do
	{
		length--;
		reversed[index] = word[length];
		index++;

	}while( length>0 );
	
	return reversed;
}
