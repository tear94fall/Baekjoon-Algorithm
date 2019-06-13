/*
 * 백준 11055번
 * 문제이름 : 가장 큰 증가 부분 수열
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <cstdio>

int arr[1000];
int dp[1000];

int main(void) {
	int t;
	long long sum = 0;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &arr[i]);
	}

	dp[0] = arr[0];

	for (int i = 0; i < t; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if ((arr[i] > arr[j]) && (dp[i] < arr[i] + dp[j])) {
				dp[i] = dp[j] + arr[i];
			}
		}
	}

	sum = dp[0];
	for (int i = 0; i < t; i++) {
		if (sum < dp[i]) {
			sum = dp[i];
		}
	}

	printf("%d\n", sum);

	return 0;
}