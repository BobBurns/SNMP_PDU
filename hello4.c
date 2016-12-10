#include <stdio.h>

int main() {
	printf("hello world!\n");
	printf("goodbye world!\n");

	int i;
	for (i=0; i< 10; i++) {
		printf("this is line %d \n", i);
	}

	printf("okay, now we have 4, one from master, one from ops_mac\n");


	return 0;
}

