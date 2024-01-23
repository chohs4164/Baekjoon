#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char N[10]; //10억은 10자리
	int B;
	int answer=0;
	int a = 0; //지수
	scanf("%s %d", N,&B); //B:2~36진법
	//10진법으로 변환
	for (int i = strlen(N)-1;i>=0; i--) {
		//숫자인 경우
		if (N[i] >= '0' && N[i] <= '9') {
			answer += (N[i] - '0')*pow(B, a);
			a++;
		}
		//알파벳인 경우
		if (N[i] >= 'A' && N[i] <= 'Z') {
			//A~Z는 10~36이므로 10을 더해준다.
			answer += (N[i] - 'A'+10)*pow(B, a);
			a++;
		}
	}
	printf("%d", answer);
	return 0;
}