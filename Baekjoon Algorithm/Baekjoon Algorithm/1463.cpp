/* 
 * ���� 1463��
 * �����̸� : 1�� �����
 * �˰��� �з� : ���̳��� ���α׷���
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