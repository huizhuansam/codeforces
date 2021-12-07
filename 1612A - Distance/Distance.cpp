#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, d, a, b;
    cin >> t;

    while (t--) {
        cin >> x >> y;
        a = -1;
        b = -1;

        for (int i = 0; i < 51; i++) {
            for (int j = 0; j < 51; j++) {
                if ((2 * (i + j) == (x + y)) && (2 * (abs(x - i) + abs(y - j))) == (x + y)) {
                    a = i;
                    b = j;
                }
            }
        }

        cout << a << " " << b << "\n";
    }

    return 0;
}
