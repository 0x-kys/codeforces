#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;

	int counter = 0;

	std::string pre_inc = "++X";
	std::string post_inc = "X++";
	std::string pre_dec = "--X";
	std::string post_dec = "X--";

	for (int i = 0; i < n; i++) {
		std::string val;
		std::cin >> val;

		if (val == pre_inc || val == post_inc) {
			counter++;
		}

		if (val == pre_dec || val == post_dec) {
			counter--;
		}
	}

	std::cout << counter;

	return 0;
}
