/*
 * ���� 11052��
 * �����̸� : ī�� �����ϱ�
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include<iostream>
#include<algorithm>

int fish[10000] = { 0, };

int main(void) {
	int t;
	std::cin >> t;
	for (int i = 1; i <= t; i++) {
		std::cin >> fish[i];
	}

	int dp[10000] = { 0, };
	int result = 0;
	for (int i = 1; i <= t; i++) {
		result = 0;
		for (int j = 1; j <= i; j++) {
			result = std::max(result, fish[j] + dp[i - j]);
		}
		dp[i] = result;
	}
	std::cout << dp[t] << std::endl;

	return 0;
}