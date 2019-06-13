/*
 * 백준 11722번
 * 문제이름 : 가장 긴 감소하는 부분 수열
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>

int arr[1000];
int dp[1000];

int main(void) {
	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> arr[i];
		dp[i] = 1;
	}

	int max = 1;

	for (int i = 1; i < t; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				if (dp[i] <= dp[j]) {
					dp[i] += 1;
				}
			}
		}
		if (max <= dp[i]) {
			max = dp[i];
		}
	}

	std::cout << max << std::endl;
	return 0;
}