/*
 * 백준 2156번
 * 문제이름 : 포도주 시식
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include<iostream>
#include<algorithm>

int main(void) {

	int grape[10001];
	int sum[10001];
	int t;
	std::cin >> t;

	for (int i = 1; i <= t; i++)
		std::cin >> grape[i];

	sum[1] = grape[1];
	sum[2] = grape[1] + grape[2];

	for (int i = 3; i <= t; i++) {
		sum[i] = sum[i - 1];								// o o x
		if (sum[i] < grape[i] + sum[i - 2])
			sum[i] = grape[i] + sum[i - 2];				// o x o
		if (sum[i] < grape[i] + sum[i - 3] + grape[i - 1])
			sum[i] = grape[i] + sum[i - 3] + grape[i - 1];			// x o o
	}

	std::cout << sum[t] << std::endl;

	return 0;
}