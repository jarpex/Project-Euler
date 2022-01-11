#include <stdio.h>

int prime(long long number) {
	if (number == 0 || number == 1) {
		return 0;
	}
	else {
		for (int i = 2; i <= number / 2; ++i) {
			if (number % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {
	long long result = 0;
	long long max = 600851475143;
	long long max_1 = max + 1;
	for (long long i = 2; i < max_1; i++) {
		if (max % i == 0) {
			if (prime(max / i)) {
				result = max / i;
				break;
			}
		}
	}
	printf("The result is %lld.\n", result);	
	return 0;
}