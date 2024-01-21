#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int paper[100][100] = { {0} };
	int x[100] = { 0 };
	int y[100] = { 0 };
	int N; //색종이의 갯수
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x[i], &y[i]);
		for (int j = 100 - y[i]; j > 90 - y[i]; j--) {
			for (int k = x[i]; k < x[i] + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}
	int size = 0;
	for (int a = 0; a < 100; a++) {
		for (int b = 0; b < 100; b++) {
			if (paper[a][b] == 1)
				size++;
		}
	}
	printf("%d", size);
}