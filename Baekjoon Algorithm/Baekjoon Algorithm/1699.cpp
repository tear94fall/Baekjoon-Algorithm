/*
 * ���� 1699��
 * �����̸� : ���������� ��
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>
int dp[100001];

int main(void) {
	int num;
	std::cin >> num;

	for (int i = 0; i < num + 1; i++) {
		dp[i] = i;
		for (int j = 0; j*j < i + 1; j++) {
			if (dp[i - j * j] + 1 < dp[i]) {
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	std::cout << dp[num] << std::endl;

	return 0;
}