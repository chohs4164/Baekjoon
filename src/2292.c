#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int N; //최소 몇 개의 방을 지나가는지 알고 싶은 방
		scanf("%d", &N);
		for (int i = 1;; i++) { //무한으로 계속 돌면서
			if (3 * pow(i, 2) - 3 * i + 1 == N) { //N이 딱 그 값이면
				//2,8,20,38,62,...
				printf("%d\n", i); //an 출력
				break;
			}//그 사이에 있으면
			if (3 * pow(i, 2) - 3 * i + 1 < N && N <= 3 * pow(i, 2) + 3 * i + 1) {
				printf("%d\n", i + 1);
				break;
			}
		}
}