/*
 * ���� 1904��
 * �����̸� : 01Ÿ��
 * �˰��� �з� : ���̳��� ���α׷���
 */


#include<iostream>

int arr[1000001] = { 0, };

int main(void) {
	int t;
	std::cin >> t;
	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i < t + 1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] > 15746)
			arr[i] %= 15746;
	}
	std::cout << arr[t] << std::endl;
}