/*
 * 백준 1789번
 * 문제이름 : 수들의 합
 * 알고리즘 분류 : 구현
 */

#include <cstdio>
#include <string.h>

int main(void) {
	long long s;
	scanf("%lld", &s);

	int n = 1;

	while (1) {
		s -= n;
		if (s < 0) {
			printf("%d\n", n - 1);
			break;
		}
		n++;
	}

	return 0;
}
