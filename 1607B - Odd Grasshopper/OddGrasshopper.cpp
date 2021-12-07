#include <bits/stdc++.h>

using namespace std;

long long int solve(long long int x, long long int n) {
    return n % 4 == 0
        ? x
        : n % 4 == 1
        ? (x % 2 == 0 ? x - n : x + n)
        : n % 4 == 2
        ? (x % 2 == 0 ? x + 1 : x - 1)
        : (x % 2 == 0 ? x + n + 1 : x - n - 1);
}

int main()
{
    int t;
    long long int x, n;
    cin >> t;
    while (t--) {
        cin >> x >> n;
        cout << solve(x, n) << "\n";
    }
    return 0;
}