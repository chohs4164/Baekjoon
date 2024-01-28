#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size = 1; //출력 횟수
	int a = 1;;//분자
	int b = 1; //분모
	int flag = 0; //홀짝을 나누어줄
	int X;
	int count = 0;
	scanf("%d", &X); //몇 번째 분수를 보고 싶은가

	while (count < X) {
		if (flag == 1) { //짝수 계열일때
			a = 1;
			b = size;
			for (int i = 0; i < size; i++) {
				count++;
				if (count == X) {
					printf("%d/%d\n", a, b);
					break;
				}
				a++;
				b--;
			}
			flag = 0;
			size++;
		}
		else { //홀수 계열일때
			a = size;
			b = 1;
			for (int i = 0; i < size; i++) {
				count++;
				if (count == X) {
					printf("%d/%d\n", a, b);
					break;
				}
				a--;
				b++;
			}
			flag = 1;
			size++;
		}
	}
		
	// 1/1 ! 1/2 2/1 ! 3/1 2/2 3/1 ! 
	return 0;
}