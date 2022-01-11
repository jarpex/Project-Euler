#include <stdio.h>

int main() {
	int result = 0;
	int a = 1;
	int b = 2;
	int buffer = 0;
	while (a < 4000000) {
		if (a % 2 == 0) {
			result += a;
		}
		buffer = a + b;
		a = b;
		b = buffer;
	}
	printf("The result is %d.\n", result);
	return 0;
}