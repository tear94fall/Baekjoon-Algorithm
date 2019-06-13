/* 
 * 백준 1463번
 * 문제이름 : 1로 만들기
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include<iostream>
using namespace std;

int *dp;

int main(void) {
	int n, temp;
	std::cin >> n;
	dp = new int[n + 1];
	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) {
			temp = dp[i / 2] + 1;
			if (dp[i] > temp) {
				dp[i] = dp[i / 2] + 1;
			}
		}
		if (i % 3 == 0) {
			temp = dp[i / 3] + 1;
			if (dp[i] > temp) {
				dp[i] = dp[i / 3] + 1;
			}
		}
	}

	std::cout << dp[n] << std::endl;

	return 0;
}