#include <stdio.h>

main(){
	int num[3];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	
	for(int i = 0; i<=2; i++)
		printf("num[%d] = %d\n", i, num[i]);
	
}
