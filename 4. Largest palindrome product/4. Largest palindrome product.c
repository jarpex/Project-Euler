#include <stdio.h>

int digits(int num) {
	int res = 1;
	while (num > 9) {
		num /= 10;
		res++;
	}
	return res;
}

int palindrome(int num) {
	char array[6];
	int dig = digits(num);
	for (int i = dig - 1; i >= 0; --i) {
		array[i] = (num % 10) + '0';
		num /= 10;
	}
	
	for (int i = 0; i < dig / 2; ++i) {
		if (array[i] != array[dig - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int result = 0;
	int max_result = 0;
	for (int a = 999; a > 0; --a) {
		for (int b = 999; b > 0; --b) {
			result = a * b;
			if (palindrome(result)) {
				if (result > max_result) {
					max_result = result;
				}
			}
		}
	}
	printf("The result is %d.\n", max_result);
	return 0;
}