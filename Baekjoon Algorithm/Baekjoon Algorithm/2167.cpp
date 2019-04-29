/*
 * 백준 2167번
 * 문제이름 : 2차원 배열의 합
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
using namespace std;

int solution(int minX, int minY, int maxX, int maxY);
int arr[300][300];

int main(void) {
	int n, m;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> arr[i][j];

	int k, minX, minY, maxX, maxY;
	std::cin >> k;
	for (int i = 0; i < k; i++) {
		std::cin >> minX >> minY >> maxX >> maxY;
		int answer;
		answer = solution(minX, minY, maxX, maxY);
		std::cout << answer << std::endl;
	}

	return 0;
}

int solution(int minX, int minY, int maxX, int maxY) {
	int sum = 0;
	for (int i = minX - 1; i <= maxX - 1; i++) {
		if (minY - 1 == maxY - 1) {
			sum += arr[i][minY - 1];
		}
		else {
			for (int j = minY - 1; j <= maxY - 1; j++) {
				sum += arr[i][j];
			}
		}
	}

	return sum;
}