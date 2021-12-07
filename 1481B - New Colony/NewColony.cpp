#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    int boulders = k;
    vector<int> mountains(n);
    int max = -1;

    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        mountains[i] = curr;
        if (curr > max) max = curr;
    }

    if (n * max < k) return -1;

    int ans = n + 1;

    while (boulders--) {
        int stop = -2;

        for (int i = 0; i < n - 1; i++) {
            if (mountains[i] < mountains[i + 1]) {
                stop = i;
                break;
            }
        }
        
        ans = stop + 1;
        if (stop == -2) break;
        mountains[stop]++;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }

    return 0;
}