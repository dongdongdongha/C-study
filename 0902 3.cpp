#include<stdio.h>

main(){
	int i, n, fact = 1;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		fact = fact * i;
	}
	printf("%d! = %d\n", n, fact);
}
