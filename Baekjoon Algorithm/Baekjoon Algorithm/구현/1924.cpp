/*
 * ���� 1924��
 * �����̸� : 2007��
 * �˰��� �з� : ����
 */

#include <iostream>

using namespace std;

int main(void)
{
	int month;
	int day;

	std::cin >> month >> day;

	// 1�� 31��, 2�� 28��, 3�� 31��, 4�� 30��, 5�� 31��, 6�� 30��,
	// 7�� 31��, 8�� 31��, 9�� 30��, 10�� 31��, 11�� 30��, 12�� 31��
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
