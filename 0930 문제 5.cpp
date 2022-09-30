#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand() % 100 +1;
	
	do{
	printf("1부터 100까지의 숫자를 맞춰보세요 ");
	scanf("%d", &guess);
	cnt++;
	
		if(guess > answer)
			printf("down\n");
		else if(guess < answer)
			printf("up\n");
	}while(answer != guess);
	printf("정답 : %d, 시도횟수 : %d", answer, cnt);
} 
