#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K,cnt=0; //N:약수들을 구하고자하는 수,K:1,2,3...번째
	scanf("%d %d", &N, &K);
	//N의 약수들 중 K번째로 작은 수
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) { //나머지가 0이면
			cnt++; //약수의 순서에 반영
			if (cnt == K) //K번째 약수이면
				printf("%d\n", i); //그 수를 출력
		}
	}
	if (cnt < K)
		printf("0\n");
}