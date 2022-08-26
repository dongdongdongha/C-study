#include<stdio.h>

main(){
	int sum = 0;
	
	for(int i = 1; i <= 10; i++){
		sum += i;
	}
	printf("1~10까지의 합 : %d", sum);
}
