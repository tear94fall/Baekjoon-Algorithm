/*
 * 백준 1764번
 * 문제이름 : 듣보잡
 * 알고리즘 분류 : 구현
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	std::ios_base::sync_with_stdio();

	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> N;
	std::vector<std::string> answer;
	std::vector<std::string>::iterator ans_iter;

	N.resize(n);

	for (int i = 0; i < n; i++) {
		std::cin >> N[i];
	}
	std::sort(N.begin(), N.end());

	std::string str;

	for (int i = 0; i < m; i++) {
		std::cin >> str;

		if (std::binary_search(N.begin(), N.end(), str)) {
			answer.push_back(str);
		}
	}

	std::sort(answer.begin(), answer.end());

	std::cout << answer.size() << std::endl;
	for (ans_iter = answer.begin(); ans_iter != answer.end(); ans_iter++) {
		std::cout << *ans_iter << "\n";
	}

	return 0;
}