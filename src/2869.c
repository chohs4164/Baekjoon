#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    //V-B-1:�Ҽ��� ���ϸ� ������ ���� -1
    //A-B+1:�Ϸ翡 �ö󰡴� ���̿� �������� �ð��� ���� +1(�������� ������ ��쿡 ����� �Ϸ縦 �����ش�(�ø�))
    int days = (V - B - 1) / (A - B) + 1;

    printf("%d", days);

    return 0;
}
