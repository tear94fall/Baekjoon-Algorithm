/*
 * ���� 2293��
 * �����̸� : ���� 1
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>

int coin[101];
int dp[10001];

int main(void) {
	int n, k;
	dp[0] = 1;
	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
		std::cin >> coin[i];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++)
			if (coin[i] <= j)
				dp[j] = dp[j] + (dp[j - coin[i]]);

	std::cout << dp[k] << std::endl;

	return 0;
}