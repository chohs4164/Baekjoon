#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//첫번째 숫자가 두번째 숫자의 약수이면 factor
	//첫번째 숫자가 두번째 숫자의 배수이면 multiple
	//둘 다 아니면 neither
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) //0으로 나눌려고 한다면
			break;

		if (b % a == 0 && a != b) //a가 b의 약수
			printf("factor\n");
		else if (a % b == 0 && a != b) //a가 b의 배수
			printf("multiple\n");
		else
			printf("neither\n");
	}
	return 0;
}