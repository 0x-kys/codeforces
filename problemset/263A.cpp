#include <bits/stdc++.h>
#include <vector>

int main() {
	std::vector<std::vector<int>> vals(5, std::vector<int>(5));

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cin >> vals[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (vals[i][j] == 1) {
				std::cout << abs(i-2)+abs(j-2);
			}
		}
	}

	return 0;
}
