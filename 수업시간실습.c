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

// ������ �ڸ��� 0�̸� ���� ���� �Ųٷ� ���

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
	if (n % 2 == 1) result++; // 2�ǰŵ������̸� 2^n�θ�ŭ 1 ���� �ڸ��� �ϳ� ������
	else result /= 10;

	return result;

}
