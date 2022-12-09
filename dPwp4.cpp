#include<stdio.h>
int square(int x){
	return x*x;
}

int main(void){
	int n;
	printf("Á¤¼ö : ");
	scanf("%d", &n);
	
	printf("square = %d\n", square(n));
	
	return 0;
}
