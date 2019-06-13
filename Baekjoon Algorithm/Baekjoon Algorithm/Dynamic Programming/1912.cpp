/*
 * 백준 1912번
 * 문제이름 : 연속합
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include <iostream>
#include <algorithm>

long long arr[100001];
long long dp[100001];

int main(void) {
	int t;
	long long sum;
	std::cin >> t;
	for (int i = 0; i < t; i++)
		std::cin >> arr[i];

	dp[0] = arr[0];
	sum = dp[0];
	for (int i = 1; i < t; i++) {
		if (dp[i - 1] + arr[i] > arr[i])
			dp[i] = dp[i - 1] + arr[i];
		else
			dp[i] = arr[i];

		if (sum <= dp[i])
			sum = dp[i];
	}

	std::cout << sum << std::endl;

	return 0;
}