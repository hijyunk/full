#include <stdio.h>
#include "libcheckeod.h"

void main() {
	int x;

	while (1) {

		printf("Input Number (0:Exit) : ");
		scanf("%d", &x);

		if (x == 0) {
			printf("Exit\n");
			break;
		}
		else {
			checkeod(x);
		}

	}

}

