#include <stdio.h>

main(){
	for(int i = 1; i <= 9; i++){
		for(int j = 2; j <= 5; j++){
			printf("%2d *%2d = %2d\t", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1; i <= 9; i++){
		for(int j = 6; j <= 9; j++){
			printf("%2d *%2d = %2d\t", j, i, i*j);
		}
		printf("\n");
	}
}
