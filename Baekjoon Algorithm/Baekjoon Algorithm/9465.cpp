/*
 * 백준 9465번
 * 문제이름 : 스티커
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <algorithm>

int arr[2][100000] = {};
int dp[2][100000] = {};

int main(void) {
	int t;
	int n;

	std::cin >> t;

	for (int q = 0; q < t; q++) {
		std::cin >> n;
		for (int x = 0; x < 2; x++) {
			for (int y = 0; y < n; y++) {
				std::cin >> arr[x][y];
			}
		}

		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		dp[0][1] = dp[1][0] + arr[0][1];
		dp[1][1] = dp[0][0] + arr[1][1];

		for (int i = 0; i < 2; i++) {
			for (int j = 2; j < n; j++) {
				if (i == 0) {
					dp[0][j] = arr[0][j] + std::max(dp[1][j - 1], dp[1][j - 2]);
					dp[1][j] = arr[1][j] + std::max(dp[0][j - 1], dp[0][j - 2]);
				}
			}
		}

		std::cout << std::max(dp[0][n - 1], dp[1][n - 1]) << std::endl;
	}
	return 0;
}