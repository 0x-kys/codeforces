#include <bits/stdc++.h>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> vals;

  int val, counter = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    vals.push_back(val);
  }

  for (int i = 0; i < n; i++) {
    if (!(vals[i] <= 0) && vals[i] >= vals[k - 1]) {
      counter++;
    }
  }

  std::cout << counter;

  return 0;
}
