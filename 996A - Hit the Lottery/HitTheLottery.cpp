#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, a, res;
    cin >> n;
    res = 0;

    if (n >= 100) {
        a = n / 100;
        res += a;
        n -= 100 * a;
    }
    if (n >= 20) {
        a = n / 20;
        res += a;
        n -= 20 * a;
    }
    if (n >= 10) {
        a = n / 10;
        res += a;
        n -= 10 * a;
    }
    if (n >= 5) {
        a = n / 5;
        res += a;
        n -= 5 * a;
    }
    if (n < 5) {
        res += n;
    }

    cout << res << "\n";
    return 0;
}
