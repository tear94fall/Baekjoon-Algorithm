/*
 * ���� 9095��
 * �����̸� : 1,2,3 ���ϱ�
 * �˰��� �з� : ���̳��� ���α׷���
 */


#include<iostream>
using namespace std;

int *dp;

int result(int n);


int main(void) {
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int n;
		cin >> n;
		std::cout << result(n) << std::endl;
	}

	return 0;
}

int result(int n) {
	dp = new int[n + 1];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	return dp[n];
}