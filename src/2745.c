#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char N[10]; //10���� 10�ڸ�
	int B;
	int answer=0;
	int a = 0; //����
	scanf("%s %d", N,&B); //B:2~36����
	//10�������� ��ȯ
	for (int i = strlen(N)-1;i>=0; i--) {
		//������ ���
		if (N[i] >= '0' && N[i] <= '9') {
			answer += (N[i] - '0')*pow(B, a);
			a++;
		}
		//���ĺ��� ���
		if (N[i] >= 'A' && N[i] <= 'Z') {
			//A~Z�� 10~36�̹Ƿ� 10�� �����ش�.
			answer += (N[i] - 'A'+10)*pow(B, a);
			a++;
		}
	}
	printf("%d", answer);
	return 0;
}