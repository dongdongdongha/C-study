#include<stdio.h>

main(){
	int a[4][2], tot;
	double avg;
	
	for(int i = 0; i < 4; i++){
		printf("%d번 학생의 수학, C언어 점수 입력 : ", i);
		for(int j = 0; j < 2; j++){
			scanf("%d", &a[i][j]);
		}
	}for(int i = 0; i < 4; i++){
		tot = 0;
		for(int j = 0; j < 2; j++){
			tot += a[i][j];
		}
		avg = tot/2.0;
		printf("%d번 학생의  ", i+1);
		printf("총점 : %3d, 평균 : %.2f\n", tot, avg);
	}
}
