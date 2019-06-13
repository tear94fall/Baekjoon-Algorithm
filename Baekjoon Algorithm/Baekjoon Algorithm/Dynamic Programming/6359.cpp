/*
 * 백준 6359번
 * 문제이름 : 만취한 상범
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>

int dp[101];

int main(void) {
	int num;
	std::cin >> num;

	while (num != 0) {
		int t;
		std::cin >> t;

		for (int i = 1; i < t + 1; i++) {
			dp[i] = 1;
		}

		for (int i = 2; i < t + 1; i++) {
			for (int j = 1; j*i < t + 1; j++) {
				int temp = i * j;
				if (dp[temp] == 0)
					dp[temp] = 1;
				else
					dp[temp] = 0;
			}
		}

		int count = 0;
		for (int i = 1; i < t + 1; i++) {
			if (dp[i] == 1) {
				count++;
			}
		}
		num--;
		std::cout << count << std::endl;
		count = 0;
	}
}