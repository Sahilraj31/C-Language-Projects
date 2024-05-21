#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number;
srand(time(0));	
number=rand()%100+1;
//printf("the random number is %d\n",number);
int guess,nguess=1;
do{
	printf("guess the number btw 1 to 100\n");
	scanf("%d",&guess);
	if(guess>number){
		printf("lower number please\n");
	}
	else if(guess<number){
		printf("higher number please\n");
	}
	else{
		printf("you guessed it in %d attempts\n",nguess);
	}
	nguess++;
}while(guess!=number);
return 0;
}
