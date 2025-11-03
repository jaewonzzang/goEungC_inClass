#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// 1이 나올 때까지 각 행에 자체적으로 랜덤 데이터 저장 
void makeData(int**, int); // 입력 받은 행의 수 만큼 각 행의 데이터 생성
void printData(int**, int); // 지정한 정수들 한 줄에 5개씩 출력하는 함수 구현

int main() {
	
	srand(time(NULL));
	int** data;
	int n; // 총 행의 개수 
	printf("Enter row number: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		makeData(data[i], n) // 데이터 생성
	}
	

	return 0;
}

void makeData(int** data, int n) {
	int* p;
	data = (int**)malloc(2*sizeof(int*));
	if (data == NULL) {
		printf("Failed\n");
		return;
	}
	int i = 0;
	p = (int*)calloc(1, sizeof(int));
	if (p = NULL) {
		printf("allocate failed\n");
		return;
	}
	while (1) {
		int* tmp;
		int rnum = (int)rand() % 30 + 1;
		if (rnum != 1) { // 다음 수를 위해 1만큼 더 할당
			tmp = (int*)realloc(p, sizeof(int));
			if (tmp != NULL) p = tmp;
			else {
				printf("not reallocated\n");
				return;
			}
			p[i++] = rnum;
		}
	}
	while (i<)

}