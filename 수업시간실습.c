#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long decimalFormBinary(int);

int main() {

	int n;

	srand((unsigned)time(NULL));

	n = rand() % 11 + 1;

	printf("Binary of %d using decimalFormBinary() : %lld", n, decimalFormBinary(n));


	return 0;
}

// 마지막 자리가 0이면 붙지 않음 거꾸로 출력

long long decimalFormBinary(int n) {
	// n = 8 -> 1000
	long long result = 0;
	//while (n != 0) {
	//	result *= 10;
	//	result += n % 2; // result = 0
	//	n /= 2;
	//}
	int count = 0;

	while (n != 0) {
		if (n % 2 == 0) {
			result++;
		}

		result *= 10;
		result += n % 2;
		n /= 2;
		if (n % 2 == 0) {
			result--;
		}

	}
	if (n % 2 == 1) result++; // 2의거듭제곱이면 2^n인만큼 1 빼고 자릿수 하나 나누기
	else result /= 10;

	return result;

}
