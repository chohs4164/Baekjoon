#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char arr[5][16] = { {0} }; //�迭 ��ü 0���� �ʱ�ȭ
	
	for (int i = 0; i < 5; i++) { //���� �Է¹ޱ�
		scanf("%s", arr[i]);
	}
	for (int k = 0; k < 15;k++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][k] == NULL)
				continue;
			else
				printf("%c",arr[j][k]);
		}
	}
	return 0;
}