#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, B;
	scanf("%d %d",&N,&B); //숫자와 진법 받기
	char answer[100];
	int i = 0;
	while (N != 0) { //몫이 0일때까지 나누어주기
		int a = N % B; //나머지
		if (a >= 0 && a <= 9) //0~9
			answer[i++] = (char)(a+'0');
		if (a >= 10 && a <= 35) //A~Z
			answer[i++] = (char)(a-10+'A');
		N /= B;
	}
	for (int k =i-1; k >= 0; k--) {
		printf("%c", answer[k]);
	}
	return 0;
}