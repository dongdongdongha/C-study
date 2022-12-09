#include<stdio.h>

int sum_all(int start, int end){
	int i, output = 0;
	for(i = start; i <= end; i++){
		output += i;
	} 
	return output;
}

int main(void){
	printf("25 to 50 = %d\n", sum_all(25, 50));
	printf("1 to 100 = %d\n", sum_all(1, 100));
	
	return 0;
}
