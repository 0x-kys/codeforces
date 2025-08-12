#include <bits/stdc++.h>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  int n = s1.length();
  int result = 0;

  for (int i = 0; i < n; i++) {
    char c1 = std::tolower(s1[i]);
    char c2 = std::tolower(s2[i]);
    if (c1 < c2) {
      result = -1;
      break;
    } else if (c1 > c2) {
      result = 1;
      break;
    }
  }

  std::cout << result << std::endl;

  return 0;
}
