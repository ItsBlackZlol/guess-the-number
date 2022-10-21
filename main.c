#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)

{	srand(time(NULL));
	int secretnumber = rand();
	secretnumber = secretnumber % 100 + 1;
	
	int inputednumber, guesses = 0;
	while (secretnumber != inputednumber) {
		guesses++;
		printf("Guess a random number between 1 - 100 > ");
		scanf("%d", &inputednumber);
		if (secretnumber > inputednumber)
			printf("Wrong, the secret number is bigger than %d.\n", inputednumber);
		else if (secretnumber < inputednumber)
			printf("Wrong, the secret number is smaller than %d.\n", inputednumber);
		else
			printf("Great job! you guessed the number! it took you %d guesses!", guesses);
	}

	return 0;
	}