#include<stdio.h>

main(){
	int i, result = 1;
	
	for(i = 1;;i++){
		if(i%2 != 0)
			result = result * i; 
		if(i > 5) break; 
	} 
	printf("result = %d", result);
}
