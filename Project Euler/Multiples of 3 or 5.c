#include <stdio.h>

int main() {
	int result = 0;
	for (int i = 1; i < 1000; ++i) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			result += i;
		}
	}
	printf("The result is %d.\n", result);
	return 0;
}