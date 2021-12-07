#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, co, ce, lo, le, c;
    co = 0;
    ce = 0;
    lo = -1;
    le = -1;
    cin >> n;

    for (int i = 1; i <=n; i++) {
        cin >> c;
        if (c % 2) {
            co++;
            lo = i;
        } else {
            ce++;
            le = i;
        }
    }

    if (co < ce) cout << lo;
    else cout << le;

    return 0;
}