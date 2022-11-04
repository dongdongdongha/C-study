#include <stdio.h>

main(){
	int h[] = {150, 178, 175, 180, 177, 167, 189}, i, num;
	int h_min = h[0];
	
	for(i = 0; i < 7; i++){
		if(h_min >= h[i]){
			h_min = h[i];
			num = i+1;
		}
	}
	printf("키가 가장 작은 학생\n번호 : %d\n키 : %dcm\n", num, h_min);
	
}
