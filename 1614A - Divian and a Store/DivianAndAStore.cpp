#include <bits/stdc++.h>

using namespace std;

int solve(int *arr, int n, int l, int r, int k) {
    sort(arr, arr + n);
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (k <= 0) break;
        if (arr[i] >= l && arr[i] <= r && (k - arr[i] >= 0)) {
            res++;
            k -= arr[i];
        }
    }

    return res;
}

int main()
{
    int t, n, l, r, k;
    cin >> t;

    while (t--) {
        cin >> n >> l >> r >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, n, l, r, k) << "\n";
    }

    return 0;
}
