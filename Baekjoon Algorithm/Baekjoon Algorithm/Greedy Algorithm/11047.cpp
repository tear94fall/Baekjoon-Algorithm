/*
 * 백준 11047번
 * 문제이름 : 동전 0
 * 알고리즘 분류 : 그리디 알고리즘
 */


#include <iostream>

int main(void) {
	int arr[10];
	int n, k;

	std::cin >> n >> k;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int cnt = 0;
	while (k != 0) {
		int big;
		for (int i = n-1; i >= 0; i--) {
			if (arr[i] <= k) {
				big = arr[i];
				break;
			}
		}

		while (k >= big) {
			k -= big;
			cnt++;
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}
