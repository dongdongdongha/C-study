#include<stdio.h>

int main(){
	int n, i, a[10] = {65, 45, 73, 5, 82, 25, 3, 34, 12, 20};
	
	printf("검색할 데이터 : ");
	scanf("%d", &n); 
	
	for(i = 0; i < 10; i++){
		if(n == a[i]){
			printf("%d는 a[%d]에 있습니다.\n", n, i);
			break;
		}
	}
	if(i > 9)
		printf("%d은(는) 찾을 수 없습니다.\n", n);
	
}
