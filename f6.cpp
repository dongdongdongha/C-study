#include<stdio.h>

main(){
	int count = 0, sum = 0;
	
	for(int i = 3; i<= 50; i += 3){
		printf("%4d", i);
		sum += i;
		++count;
		if(count % 5 == 0)
			printf("\n");
	}
	printf("\nsum = %d\n", sum);
}
