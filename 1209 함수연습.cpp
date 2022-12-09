#include <stdio.h>

int add(int x, int y);//함수 선언 -> 함수 원형 

int f(int n){
	int sum = 0;
	
	for(int i = 1; i <= 10; i++){
		sum += i;
	}
	
	return sum;
}

void massage(void){
	printf("서울로봇고등학교\n");
}

int main(void){
	
	printf("합 = %d\n", f(10));
	
	return 0; 
}

int add(int x, int y){
	int temp;
	
	temp = x + y;
	
	return temp;
}
