#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int calculate(int n) {
	if (n == 0) //a1=2;
		return 2;
	else
		return 2 * calculate(n - 1) - 1;
}
int main() {
	//초기상태 4 다음 9 다음 25
	int N; //N은 시행횟수
	scanf("%d", &N);
	int answer = pow(calculate(N), 2);
	printf("%d",answer);
}