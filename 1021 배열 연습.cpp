#include <stdio.h>

main(){
	int arr[5];
	
	arr[0] = 10;
	
	scanf("%d", &arr[1]);
	
	arr[2] = arr[0] + arr[1];
	arr[3] = arr[0] - arr[1];
	arr[4] = arr[0] * arr[2];
	
	for(int i = 0; i<=4; i++)
		printf("arr[%d] = %d\n", 0, arr[i]);
	
}
