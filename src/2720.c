#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, C, Quarter, Dime, Nickel, Penny;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &C); //°Å½º¸§µ·
		
		Quarter = C / 25;
		C %= 25;

		Dime = C / 10;
		C %= 10;

		Nickel = C / 5;
		C %= 5;

		Penny = C / 1;

		printf("%d %d %d %d\n", (int)Quarter, (int)Dime, Nickel, Penny);
	}
	return 0;
}