/*
 * ���� 2839��
 * �����̸� : ���� ���
 * �˰��� �з� : ����
 */

#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	int cnt = 0;
	if (n % 5 == 0) {
		cnt = n / 5;
		std::cout << cnt << std::endl;
		return 0;
	}
	else {
		while (n >= 0) {
			n -= 3;
			cnt++;
			if (n % 5 == 0) {
				cnt = cnt + (n / 5);
				std::cout << cnt << std::endl;
				return 0;
			}
		}
	}

	std::cout << -1 << std::endl;

	return 0;
}