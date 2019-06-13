/*
 * 백준 2163번
 * 문제이름 : 초콜릿 자르기
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>

int main(void) {
	int n, m;
	std::cin >> n >> m;
	n *= m;
	--n;
	std::cout << n << std::endl;

	return 0;
}