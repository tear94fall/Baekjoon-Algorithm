/*
 * 백준 11727번
 * 문제이름 : 2 x n 타일링 2
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>

int main() {
	int t;
	std::cin >> t;

	long long dp[1001] = { 1,3, };

	for (int i = 2; i < t; i++) {
		dp[i] = (dp[i - 1] % 10007) + ((dp[i - 2] * 2) % 10007);
	}
	std::cout << dp[t - 1] % 10007 << std::endl;
	return 0;
}