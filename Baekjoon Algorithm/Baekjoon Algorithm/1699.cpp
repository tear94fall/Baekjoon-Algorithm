/*
 * 백준 1699번
 * 문제이름 : 제곱수들의 합
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
int dp[100001];

int main(void) {
	int num;
	std::cin >> num;

	for (int i = 0; i < num + 1; i++) {
		dp[i] = i;
		for (int j = 0; j*j < i + 1; j++) {
			if (dp[i - j * j] + 1 < dp[i]) {
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	std::cout << dp[num] << std::endl;

	return 0;
}