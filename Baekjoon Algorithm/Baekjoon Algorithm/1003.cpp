/*
 * 백준 1003번
 * 문제이름 : 피보나치 함수
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include<iostream>
using namespace std;

int main(void) {
	int t_case;
	std::cin >> t_case;
	int num;
	int zero[41];
	int one[41];
	zero[0] = 1;
	zero[1] = 0;
	one[0] = 0;
	one[1] = 1;
	for (int i = 2; i <= 40; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}
	for (int i = 0; i < t_case; i++) {
		std::cin >> num;

		if (num >= 0 && num <= 40) {
			std::cout << zero[num] << " " << one[num] << std::endl;
		}
	}
	return 0;
}