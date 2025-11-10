#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {

	char str[] = "0123456789**0123456789!!";
	int len = strlen(str);

	char* data = (char*)malloc(len * sizeof(int));

	if (data == NULL) {
		printf("메모리 할당 실패\n");
		return;
	}

	char* data;

	for (int i = 0; i < len; i++) {

	}

	printf("%s%s", str, data);


	return 0;
}


/*
메모리 할당 + 예외처리
새로운 문자열 만들어서 메모리를 순회하며 기존 문자열과 교차되게 저장
기존+뒤집힌 문자열 붙여서 출력
*/