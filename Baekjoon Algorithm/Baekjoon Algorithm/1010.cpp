/*
 * ���� 1010��
 * �����̸� : �ٸ� ����
 * �˰��� �з� : ���̳��� ���α׷���
 */

#include<iostream>
using namespace std;

long long companion(int a, int b) {
	if (b - a < a) {
		a = b - a;
	}
	long long num1 = 1, num2 = 1, result;
	for (int i = 1; i <= a; i++) {
		num1 *= b;
		num2 *= i;
		--b;
	}
	result = num1 / num2;
	return result;
}

int main(void) {
	int t, num1, num2;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num1 >> num2;
		std::cout << companion(num1, num2) << std::endl;
	}

	return 0;
}