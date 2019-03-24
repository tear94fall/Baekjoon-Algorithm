/*
 * ���� 11053��
 * �����̸� : ���� �� �����ϴ� �κ� ����
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include <iostream>

using namespace std;

int arr[1000];
int dp[1000];

int main(void) {
	int t, count;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> arr[i];
		dp[i] = 1;
	}

	for (int i = 1; i < t; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && dp[i] <= dp[j]) {
				dp[i] = dp[j] + 1;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < t; i++) {
		if (max < dp[i]) {
			max = dp[i];
		}
	}

	std::cout << max << std::endl;

	return 0;
}