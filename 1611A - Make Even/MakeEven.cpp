#include <bits/stdc++.h>

using namespace std;

long long int reverse(long long int n) {
    long long int rev_num = 0;
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n /= 10;
    }
    return rev_num;
}

int solve(long long int n) {
    if (n % 2 == 0) {
        return 0;
    }

    if (reverse(n) % 2 == 0) {
        return 1;
    }

    while (n /= 10) {
        if (n % 2 == 0) {
            return 2;
        }
    }

    return -1;
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