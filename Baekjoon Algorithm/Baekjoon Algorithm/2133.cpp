/*
 * ���� 2133��
 * �����̸� : Ÿ�� ä���
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include<iostream>

int main(void) {
	int arr[31] = {};
	int dp[31] = {};
	int N;
	std::cin >> N;

	arr[0] = 1;
	arr[2] = 3;
	dp[0] = 1;

	for (int i = 2; i < N + 1; i += 2) {
		if (i != 2)
			arr[i] = 2;
		for (int j = 2; j < N + 1; j += 2) {
			dp[i] += arr[j] * dp[i - j];
		}
	}

	std::cout << dp[N] << std::endl;
	return 0;
}