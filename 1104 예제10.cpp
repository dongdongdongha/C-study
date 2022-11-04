#include <stdio.h>

main(){
	char str[] = "Good Time";
	
	for(int i = 0; i < sizeof(str); i++){
		printf("str[%d] = %c\n", i, str[i]);
	}
	
}
