#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int gcd_arr(vector<int> v, int i) {
    return i == v.size() - 1 ? v[i] : gcd(v[i], i + 1);
}

int solve(vector<int> v) {
    vector<int> diff_arr;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff > 0) diff_arr.push_back(diff);
    } 
    return diff_arr.size() > 0 ? gcd_arr(diff_arr, 0) : -1;  
}

int main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << solve(v) << "\n";
    }

    return 0;
}