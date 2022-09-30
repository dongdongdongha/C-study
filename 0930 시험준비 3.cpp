#include<stdio.h>

main(){
	int i = 1, sum = 0;
	
	while(i <= 10){
		if(i % 5 != 0)
			sum += i;
		i++;
	}
	printf("sum = %d", sum); 
} 
