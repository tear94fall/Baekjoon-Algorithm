/*
 * 백준 2839번
 * 문제이름 : 설탕 배달
 * 알고리즘 분류 : 구현
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