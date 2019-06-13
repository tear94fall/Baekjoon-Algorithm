/*
 * 백준 1309번
 * 문제이름 : 동물원
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include<iostream>

int arr[100001][3];

int main(void) {
	int t;
	std::cin >> t;

	arr[1][0] = arr[1][1] = arr[1][2] = 1;

	for (int i = 2; i < t + 1; i++) {
		arr[i][0] = (arr[i - 1][0] + arr[i - 1][1] + arr[i - 1][2]) % 9901;
		arr[i][1] = (arr[i - 1][0] + arr[i - 1][2]) % 9901;
		arr[i][2] = (arr[i - 1][0] + arr[i - 1][1]) % 9901;
	}
	std::cout << (arr[t][0] + arr[t][1] + arr[t][2]) % 9901 << std::endl;

	return 0;
}