/*
 * 백준 11052번
 * 문제이름 : 카드 구매하기
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include<iostream>
#include<algorithm>

int fish[10000] = { 0, };

int main(void) {
	int t;
	std::cin >> t;
	for (int i = 1; i <= t; i++) {
		std::cin >> fish[i];
	}

	int dp[10000] = { 0, };
	int result = 0;
	for (int i = 1; i <= t; i++) {
		result = 0;
		for (int j = 1; j <= i; j++) {
			result = std::max(result, fish[j] + dp[i - j]);
		}
		dp[i] = result;
	}
	std::cout << dp[t] << std::endl;

	return 0;
}