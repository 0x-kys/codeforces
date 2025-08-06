#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;

	int probs[n][3];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin>>probs[i][j];
		}
	}

	int sols = 0;

	for (int i = 0; i < n; i++) {
		int counter = 0;
		for (int j = 0; j < 3; j++) {
			if (probs[i][j] == 1) {
				counter++;
			}
		}
		if (counter > 1) {
			sols++;
		}
	}

	std::cout << sols;

	return 0;
}
