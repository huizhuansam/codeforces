#include <bits/stdc++.h>

using namespace std;

int solve(int a , int b) {
    return min(min(a, b), (a + b) / 4);
}

int main()
{
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }

    return 0;
}