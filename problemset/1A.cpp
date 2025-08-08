#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long len = (n + a - 1) / a;
    long long wid = (m + a - 1) / a;

    long long res = len * wid;

    cout << res;

    return 0;
}
