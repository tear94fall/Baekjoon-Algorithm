/*
 * 백준 11726번
 * 문제이름 : 2 x n 타일링
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include<iostream>
using namespace std;

long long memo[10000];

long long fibonacci(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		if (memo[n] > 0) {
			return memo[n];
		}
		memo[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % 10007;
		return memo[n];
	}
};

int main(void) {
	int n;
	cin >> n;
	std::cout << fibonacci(n) % 10007 << std::endl;

	return 0;
}