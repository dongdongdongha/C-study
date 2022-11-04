#include <stdio.h>

main(){
	int h[] = {150, 178, 175, 180, 177, 167, 189}, i, num;
	int h_max = h[0];
	
	for(i = 0; i < 7; i++){
		if(h_max <= h[i]){
			h_max = h[i];
			num = i+1;
		}
	}
	printf("키가 가장 큰 학생\n번호 : %d\n키 : %dcm\n", num, h_max);
	
}
