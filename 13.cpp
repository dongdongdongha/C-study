#include<stdio.h>

main(){
	int sum = 0, i = 1;
	
	do{
		
		sum += i;
		i += 2;
	}while(i <= 50);
	
	printf("1부터 50까지의 홀수 합 : %d", sum);
}
