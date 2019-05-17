/*
 * 백준 9507번
 * 문제이름 : Generations of Tribbles
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include <iostream>

int main(void) {
	long long fibo[69];
	int arr[69];

	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> arr[i];
	}

	fibo[0] = 1;
	fibo[1] = 1;
	fibo[2] = 2;
	fibo[3] = 4;

	for (int i = 4; i < 68; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2] + fibo[i - 3] + fibo[i - 4];
	}

	for (int i = 0; i < t; i++) {
		std::cout << fibo[arr[i]] << std::endl;
	}

	return 0;
}