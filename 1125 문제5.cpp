#include<stdio.h>

int main(){
	int  i, j, cnt = 1, arr[4][5];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			arr[i][j] = cnt++;
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}
