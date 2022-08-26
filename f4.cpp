#include<stdio.h>

main(){
	int even = 0, odd = 0;
	
	for(int i = 1; i <= 100; i++){
		if(i % 2 == 0)
			even += i;
		else
			odd += i;
	}
	printf("Â¦¼öÇÕ = %d, È¦¼öÇÕ = %d\n", even, odd);
}
