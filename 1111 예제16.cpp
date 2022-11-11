#include<stdio.h>

main(){
	int a[2][3] = {{100, 90, 80}, {70, 60, 50}};
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%4d", a[i][j]);
		}printf("\n");
	}
}
