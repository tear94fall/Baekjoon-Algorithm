/*
 * 백준 2579번
 * 문제이름 : 계단 오르기
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include<iostream>
#include<algorithm>
int *stair;
long long *sum;

int main(void) {
	int t;
	std::cin >> t;
	stair = new int[t + 1];
	sum = new long long[t + 1];

	for (int i = 1; i <= t; i++) {
		std::cin >> stair[i];
	}

	sum[1] = stair[1];
	sum[2] = stair[2] + stair[1];
	for (int i = 3; i <= t; i++) {
		sum[i] = stair[i] + std::max(sum[i - 2], (sum[i - 3] + stair[i - 1]));
		if (sum[i] < stair[i] + sum[i - 2])
			sum[i] = stair[i] + sum[i - 2];
		if (sum[i] < stair[i] + sum[i - 3] + stair[i - 1])
			sum[i] = stair[i] + sum[i - 3] + stair[i - 1];
	}
	std::cout << sum[t] << std::endl;
	return 0;
}