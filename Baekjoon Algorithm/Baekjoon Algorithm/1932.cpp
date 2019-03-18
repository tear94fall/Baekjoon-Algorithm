/*
 * 백준 1932번
 * 문제이름 :  정수 삼각형
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <algorithm>

int arr[501][501];
int dp[501][501];

int main(void) {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < i + 1; j++) {
			std::cin >> arr[i][j];
		}
	}

	dp[0][0] = arr[0][0];
	dp[1][0] = dp[0][0] + arr[1][0];
	dp[1][1] = dp[0][0] + arr[1][1];

	for (int i = 2; i < t; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0)
				dp[i][0] = arr[i][0] + dp[i - 1][0];
			else if (j == i)
				dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
			else
				dp[i][j] = arr[i][j] + std::max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}

	int max = dp[t - 1][0];
	for (int i = 1; i < t; i++) {
		if (dp[t - 1][i] >= max) {
			max = dp[t - 1][i];
		}
	}std::cout << max << std::endl;

	return 0;
}