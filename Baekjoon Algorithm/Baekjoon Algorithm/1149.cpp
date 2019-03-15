/*
 * 백준 1149번
 * 문제이름 : RGB거리
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <algorithm>

int arr[3001][3];
int dp[3001][3];

int main(void) {
	int t = 3;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin >> arr[i][j];
		}
	}

	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];

	for (int i = 1; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			dp[i][0] = arr[i][0] + std::min(dp[i - 1][1], dp[i - 1][2]);
			dp[i][1] = arr[i][1] + std::min(dp[i - 1][0], dp[i - 1][2]);
			dp[i][2] = arr[i][2] + std::min(dp[i - 1][0], dp[i - 1][1]);
		}
	}


	std::cout << std::min(dp[t - 1][0], std::min(dp[t - 1][1], dp[t - 1][2])) << std::endl;

	return 0;
}