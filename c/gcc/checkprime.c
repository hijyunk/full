#include <stdio.h>

int checkprime(int x) {

	for (int i=2; i<=x; i++) {
		if (x%i == 0) {
			if (x!=i) {
				printf("%d is not a prime number\n", x);
                break;
			} else {
				printf("%d is a prime number\n", x);
			}
		}
	}
}