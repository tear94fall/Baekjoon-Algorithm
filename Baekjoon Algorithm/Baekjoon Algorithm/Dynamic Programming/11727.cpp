/*
 * ���� 11727��
 * �����̸� : 2 x n Ÿ�ϸ� 2
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>

int main() {
	int t;
	std::cin >> t;

	long long dp[1001] = { 1,3, };

	for (int i = 2; i < t; i++) {
		dp[i] = (dp[i - 1] % 10007) + ((dp[i - 2] * 2) % 10007);
	}
	std::cout << dp[t - 1] % 10007 << std::endl;
	return 0;
}