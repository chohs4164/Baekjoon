#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size = 1; //��� Ƚ��
	int a = 1;;//����
	int b = 1; //�и�
	int flag = 0; //Ȧ¦�� ��������
	int X;
	int count = 0;
	scanf("%d", &X); //�� ��° �м��� ���� ������

	while (count < X) {
		if (flag == 1) { //¦�� �迭�϶�
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
		else { //Ȧ�� �迭�϶�
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