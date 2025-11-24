#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = rand() % 6 + 1;
	int b = rand() % 6 + 1;
	
	printf("Dau cu zaru %d %d", a, b);
	
	if(a == 6 && b == 5) {
		printf(" n-am nevoie de servici");
	} else if(a == 6 && b == 6) {
		printf(" ca mine nu se mai naste");
	}

	printf("\n");

	return 0;
}
