#include <bits/stdc++.h>

using namespace std;

bool is_multiple(long long int n, int m) {
    return n % m == 0;
}

int solve(long long int n) {
    if (is_multiple(n, 25) || n < 25) {
        return 0;
    }

    long long int discard_lsb;
    long long int keep_lsb;
    long long int intermediate = n / 100;

    if (is_multiple(n, 10)) {
        discard_lsb = 1 + solve(n / 10);
        keep_lsb = 1 + solve(intermediate * 10);
        return min(discard_lsb, keep_lsb);
    }

    if (is_multiple(n, 5)) {
        discard_lsb = 1 + solve(n / 10);
        keep_lsb = 1 + solve(intermediate * 10 + 5);
        return min(discard_lsb, keep_lsb);
    }

    return 1 + solve(n / 10);
}

int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--) {
        cin >> n; 
        cout << solve(n) << "\n";
    }
    return 0;
}