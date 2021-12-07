#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long int u, v, x, y;
        cin >> u >> v;

        x = -(u * u);
        y = v * v;

        cout << x << " " << y << "\n";
    }

    return 0;
}
