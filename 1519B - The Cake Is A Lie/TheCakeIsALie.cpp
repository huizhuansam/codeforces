#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, k;
    cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        (n * m) - 1 == k ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
