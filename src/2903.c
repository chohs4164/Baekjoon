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
	//�ʱ���� 4 ���� 9 ���� 25
	int N; //N�� ����Ƚ��
	scanf("%d", &N);
	int answer = pow(calculate(N), 2);
	printf("%d",answer);
}