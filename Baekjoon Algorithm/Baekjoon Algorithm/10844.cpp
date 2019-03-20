/*
 * 백준 10844번
 * 문제이름 : 쉬운계단수
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include<iostream>

int dp[100][11] = { 0,1,1,1,1,1,1,1,1,1 };

int main(void) {
	int t;
	std::cin >> t;

	for (int i = 1; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][1];
			if (j == 9)
				dp[i][j] = dp[i - 1][8];
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}

	int ans = 0;
	for (int i = 0; i < 10; i++)
		ans = (ans + dp[t - 1][i]) % 1000000000;

	std::cout << ans << std::endl;

	return 0;
}