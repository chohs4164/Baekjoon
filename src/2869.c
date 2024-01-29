#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    //V-B-1:소숫점 이하를 버리기 위해 -1
    //A-B+1:하루에 올라가는 높이와 내려가는 시간의 차이 +1(나머지가 생겼을 경우에 대비해 하루를 더해준다(올림))
    int days = (V - B - 1) / (A - B) + 1;

    printf("%d", days);

    return 0;
}
