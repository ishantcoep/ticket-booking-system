#include<stdio.h>
void main() {
	int i, j;
	int b = 65;
	int a[20][5];
	
	for(i = 0; i < 5; i++) {
		for(j = 1; j <= 20; j++){
			printf("%c%d    ", b, j);
		}
		b = b + 1;
		printf("\t\t\t\n");
	}
}
