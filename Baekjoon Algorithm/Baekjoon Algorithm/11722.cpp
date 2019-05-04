/*
 * ���� 11722��
 * �����̸� : ���� �� �����ϴ� �κ� ����
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>

int arr[1000];
int dp[1000];

int main(void) {
	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> arr[i];
		dp[i] = 1;
	}

	int max = 1;

	for (int i = 1; i < t; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				if (dp[i] <= dp[j]) {
					dp[i] += 1;
				}
			}
		}
		if (max <= dp[i]) {
			max = dp[i];
		}
	}

	std::cout << max << std::endl;
	return 0;
}