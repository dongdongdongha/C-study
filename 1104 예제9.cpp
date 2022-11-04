#include <stdio.h>

main(){
	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[] = "world!";
	
	printf("%s\n", str1);
	for(int i = 0; str2[i] != '\0'; i++)
		printf("%c", str2[i]);
	
	printf("\nstr1의 크기 : %d\n", sizeof(str1));
	printf("str2의 크기 : %d\n", sizeof(str2));
	str2[5] = '~';
	printf("%s\n", str2);
}
