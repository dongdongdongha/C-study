#include <stdio.h>

int add(int x, int y);//�Լ� ���� -> �Լ� ���� 

int f(int n){
	int sum = 0;
	
	for(int i = 1; i <= 10; i++){
		sum += i;
	}
	
	return sum;
}

void massage(void){
	printf("����κ�����б�\n");
}

int main(void){
	
	printf("�� = %d\n", f(10));
	
	return 0; 
}

int add(int x, int y){
	int temp;
	
	temp = x + y;
	
	return temp;
}
