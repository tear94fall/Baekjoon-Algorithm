/*
 * ���� 9461��
 * �����̸� : �ĵ��� ����
 * �˰��� �з� : ���̳��� ���α׷���
 */


#include<iostream>

int main(void) {
	int t;
	std::cin >> t;

	long long dp[100] = { 0, };

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	for (int k = 0; k < t; k++) {
		int num;
		std::cin >> num;
		for (int i = 5; i <= num + 1; i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}
		std::cout << dp[num] << std::endl;
	}

	return 0;
}