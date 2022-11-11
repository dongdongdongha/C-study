#include<stdio.h>

main(){
	int a[][3] = {10,20,30,40,50,60};
	
	printf("%d\n%d\n", a[0][1], a[1][2]);
	printf("%d %d %d\n%d %d %d", a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2]); 
}
