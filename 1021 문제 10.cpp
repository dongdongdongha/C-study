#include <stdio.h>

main(){
	int n, i, jumsu, max = 0, min = 100;
	
	printf("�л� ���� �Է��ϼ���");
	scanf("%d", &n);
	printf("������ �Է��ϼ���(0 ~ 100)");
	
	for(i = 1; i <= n; i++){
		scanf("%d", &jumsu);
		if(jumsu > max) max = jumsu;
		if(jumsu < min) min = jumsu;
	}
	printf("�ְ��� : %d, ������ : %d", max, min);
}
