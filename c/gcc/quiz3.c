#include <stdio.h>
#include "libcheckprime.h"

void main() {
	
	while (1) {
        int x;
		printf("\nInput integer (0:Exit) => ");
		scanf("%d", &x);

		if (x == 0) {
			printf("Exit\n");
			break;
		}
		else {
			checkprime(x);
		}
	}
}

