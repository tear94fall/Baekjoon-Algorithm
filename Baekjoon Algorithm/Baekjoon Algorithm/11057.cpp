/*
 * ���� 11057��
 * �����̸� : ������ �� 
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>

int dp[1000][10] = { 1,1,1,1,1,1,1,1,1,1, };

int main(void) {
	int t;
	std::cin >> t;

	dp[0][9] = 10;

	for (int i = 0; i < t + 1; i++) {
		for (int j = 1; j < 10; j++) {
			dp[i][0] = 1;
			dp[i][j] = ((dp[i][j - 1] % 10007) + (dp[i - 1][j] % 10007)) % 10007;
		}
	}

	std::cout << dp[t][9] << std::endl;

	return 0;
}