#include<stdio.h>

int main(){
	int  i, j;
	char mark[5][5] = {'\0'};
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i == j || i + j == 4) mark[i][j] = 'X';
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%2c", mark[i][j]);
		}
		printf("\n");
	}
}
