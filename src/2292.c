#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int N; //�ּ� �� ���� ���� ���������� �˰� ���� ��
		scanf("%d", &N);
		for (int i = 1;; i++) { //�������� ��� ���鼭
			if (3 * pow(i, 2) - 3 * i + 1 == N) { //N�� �� �� ���̸�
				//2,8,20,38,62,...
				printf("%d\n", i); //an ���
				break;
			}//�� ���̿� ������
			if (3 * pow(i, 2) - 3 * i + 1 < N && N <= 3 * pow(i, 2) + 3 * i + 1) {
				printf("%d\n", i + 1);
				break;
			}
		}
}