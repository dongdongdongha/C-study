#include<stdio.h>

int main(){
	int  i, sum = 0, num[10] = {29,24,56,42,35,41,64,79,51,14};
	
	for(i = 0; i < 9; i += 2)
		sum += num[i];
	printf("%d", sum);
}
