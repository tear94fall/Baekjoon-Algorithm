/*
 * ���� 2193��
 * �����̸� :  ��ģ��
 * �˰��� �з� : ���̳��� ���α׷���
 */


#include<iostream>

long long dp[100] = {};

int main(void) {
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	int t;
	std::cin >> t;

	for (int i = 3; i <= t; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	std::cout << dp[t - 1] << std::endl;

	return 0;
}