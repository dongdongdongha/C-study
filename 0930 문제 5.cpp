#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand() % 100 +1;
	
	do{
	printf("1���� 100������ ���ڸ� ���纸���� ");
	scanf("%d", &guess);
	cnt++;
	
		if(guess > answer)
			printf("down\n");
		else if(guess < answer)
			printf("up\n");
	}while(answer != guess);
	printf("���� : %d, �õ�Ƚ�� : %d", answer, cnt);
} 
