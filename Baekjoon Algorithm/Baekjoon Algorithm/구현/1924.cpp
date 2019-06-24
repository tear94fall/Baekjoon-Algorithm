/*
 * 백준 1924번
 * 문제이름 : 2007년
 * 알고리즘 분류 : 구현
 */

#include <iostream>

using namespace std;

int main(void)
{
	int month;
	int day;

	std::cin >> month >> day;

	// 1월 31일, 2월 28일, 3월 31일, 4월 30일, 5월 31일, 6월 30일,
	// 7월 31일, 8월 31일, 9월 30일, 10월 31일, 11월 30일, 12월 31일
	int arr[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };

	std::string seven[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	int all_day = day;

	for (int i = 0; i < month; i++) {
		all_day += arr[i];
	}

	all_day %= 7;

	std::cout << seven[all_day] << std::endl;

	return 0;
}
