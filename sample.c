#include <stdio.h> // printf, scanf 헤더 포함
#pragma warning(disable: 4996) // scanf 보안 경고 무시

int a, b, c; // 전역 변수 선언
int product(int x, int y); // 함수 원형 선언

void main()
{
	printf("C 언어 학습 시작\n");
	printf("1~100 사이의 정수를 입력해주세요 : "); // 안내 메시지 출력
	scanf("%d", &a); // 첫 번째 정수 입력
	printf("1~100 사이의 정수를 입력해주세요 : "); // 안내 메시지 출력
	scanf("%d", &b); // 두 번째 정수 입력
	c = product(a, b); // product 함수 호출하여 결과 저장
	printf("%d와 %d의 곱은 % d입니다.\n", a, b, c);
	// printf("두 수의 곱은 %d 입니다.\n", c); // 결과 출력
}

/* 두 정수의 곱을 계산하는 함수 */
int product(int x, int y)
{
	return x * y; // 두 정수의 곱 반환
}