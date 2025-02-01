#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	int random,guess;
	int no_of_guess=0;
	srand(time(NULL));
	printf("Welcome to the world of Guessing Number\n");
	random=rand()%100+1;
	do{
		printf("\nPlease enter your guessing number between(1 to 100)\n");
		scanf("%d",&guess);
		no_of_guess++;
		if(guess < random){
			printf("Guess a larger number.\n");
			
		}
		else if(guess > random){
			printf("Guess a smaller number.\n");
			
			
		}else{
			printf("congratulations !!! You have suucessfully guessed the number in %d attempts\n",no_of_guess);
			
		}
	
		
	}
		while(guess != random);
	printf("Bye Bye");
	printf("Create by '@Pritam'");
		
}