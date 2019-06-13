/*
 * ���� 1912��
 * �����̸� : ������
 * �˰��� �з� : ���̳��� ���α׷���
 */


#include <iostream>
#include <algorithm>

long long arr[100001];
long long dp[100001];

int main(void) {
	int t;
	long long sum;
	std::cin >> t;
	for (int i = 0; i < t; i++)
		std::cin >> arr[i];

	dp[0] = arr[0];
	sum = dp[0];
	for (int i = 1; i < t; i++) {
		if (dp[i - 1] + arr[i] > arr[i])
			dp[i] = dp[i - 1] + arr[i];
		else
			dp[i] = arr[i];

		if (sum <= dp[i])
			sum = dp[i];
	}

	std::cout << sum << std::endl;

	return 0;
}