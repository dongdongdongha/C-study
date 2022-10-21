#include <stdio.h>

main(){
	int n, i, jumsu, max = 0, min = 100;
	
	printf("학생 수를 입력하세요");
	scanf("%d", &n);
	printf("점수를 입력하세요(0 ~ 100)");
	
	for(i = 1; i <= n; i++){
		scanf("%d", &jumsu);
		if(jumsu > max) max = jumsu;
		if(jumsu < min) min = jumsu;
	}
	printf("최고점 : %d, 최저점 : %d", max, min);
}
