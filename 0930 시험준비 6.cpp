#include<stdio.h>

main(){
	int n, a;
	
	printf("4�ڸ� �� �Է� : ");
	scanf("%d", &n);
	
	do{
		a = n % 10;
		printf("%d", a);
		n = n / 10; 
	}while(n > 0);
} 
