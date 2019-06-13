/*
 * 백준 14501번
 * 문제이름 : 퇴사
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include <iostream>

int t[16];
int p[16];
int dp[16];

int main(void) {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> t[i] >> p[i];
	}

	for (int i = 0; i < n; i++) {
		int next1 = i + t[i];
		int next2 = i + 1;

		if (next1 <= n) {
			dp[next1] = std::max(dp[i] + p[i], dp[next1]);
		}

		if (next2 <= n) {
			dp[next2] = std::max(dp[i], dp[next2]);
		}
	}

	int max = 0;

	for (int i = 0; i <= n; i++) {
		if (max < dp[i]) {
			max = dp[i];
		}
	}

	std::cout << max << std::endl;

	return 0;
}