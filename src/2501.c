#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K,cnt=0; //N:������� ���ϰ����ϴ� ��,K:1,2,3...��°
	scanf("%d %d", &N, &K);
	//N�� ����� �� K��°�� ���� ��
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) { //�������� 0�̸�
			cnt++; //����� ������ �ݿ�
			if (cnt == K) //K��° ����̸�
				printf("%d\n", i); //�� ���� ���
		}
	}
	if (cnt < K)
		printf("0\n");
}