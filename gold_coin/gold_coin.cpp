#include "stdafx.h"


int main()
{
	int days, coins = 0, paid =1, count = 0;
	scanf_s("%d", &days);

	for (int i = 1; i <= days; i++) {

		coins += paid;
		count++;

		if (count == paid) {
			paid++;
			count = 0;
		}
	}

	printf("%d", coins);

    return 0;
}

