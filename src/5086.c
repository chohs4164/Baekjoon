#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//ù��° ���ڰ� �ι�° ������ ����̸� factor
	//ù��° ���ڰ� �ι�° ������ ����̸� multiple
	//�� �� �ƴϸ� neither
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) //0���� �������� �Ѵٸ�
			break;

		if (b % a == 0 && a != b) //a�� b�� ���
			printf("factor\n");
		else if (a % b == 0 && a != b) //a�� b�� ���
			printf("multiple\n");
		else
			printf("neither\n");
	}
	return 0;
}