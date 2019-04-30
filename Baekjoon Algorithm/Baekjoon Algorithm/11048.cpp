/*
 * 백준 11048번
 * 문제이름 : 이동하기
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include<iostream>
#include<algorithm>

int dp[1011][1011];
int arr[1011][1011];

int main(void) {

	int n, m;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> arr[i][j];

	dp[0][0] = arr[0][0];
	dp[1][0] = dp[0][0] + arr[1][0];
	dp[0][1] = dp[0][0] + arr[0][1];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dp[i][0] = dp[i - 1][0] + arr[i][0];
			dp[0][j] = dp[0][j - 1] + arr[0][j];
			dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]) + arr[i][j];
		}
	}
	std::cout << dp[n - 1][m - 1] << std::endl;

	return 0;
}