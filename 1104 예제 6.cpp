#include <stdio.h>

main(){
	int score[5], i, max = 0;
	
	for(i = 0; i < 5; i++){
		printf("%d번 학생의 프로그래밍 성적을 입력 : ", i+1);
		scanf("%d", &score[i]);
	}for(i = 0; i < 5; i++){
		if(max < score[i])
			max = score[i];
	}
	printf("최고 점수 : %d \n", max);
	
}
