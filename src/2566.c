#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int matrix[10][10];
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			scanf("%d", &matrix[i][j]);
			if (matrix[i][j] >= 100 && matrix[i][j] < 0)
				return 0;
		}
	}
	int Max = matrix[1][1];
	int row_index=1;
	int col_index=1;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (Max < matrix[i][j]) {
				Max = matrix[i][j];
				row_index = j; //�迭�� �ε����� 0���� �����ϹǷ�
				col_index = i;
			}
			if (Max == matrix[i][j]) //�ִ��� ������
				continue;
		}
	}
	printf("%d\n%d %d", Max, col_index, row_index);
	return 0;
}
