/*
 * ���� 1789��
 * �����̸� : ������ ��
 * �˰��� �з� : ����
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
