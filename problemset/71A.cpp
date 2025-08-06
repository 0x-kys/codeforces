#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;

	std::string words[n];

	for (int i = 0; i < n; i++) {
		std::cin >> words[i];
	}

	for (int i = 0; i < n; i++) {
		std::string current_word = words[i];

		int size = current_word.length();

		char arr[size + 1];

		std::strcpy(arr, current_word.c_str());

		if (size > 10) {
			int counter = 0;
			for (int i = 1; i < size-1; i++) {
				counter++;
			}
			std::cout << arr[0] << counter << arr[size-1] << std::endl;
		} else {
			for (int i = 0; i < size; i++) {
				std::cout << arr[i];
			}
			std::cout << std::endl;
		}
	}

	return 0;
}
