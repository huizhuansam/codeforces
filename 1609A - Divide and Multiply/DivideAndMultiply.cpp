#include <bits/stdc++.h>

using namespace std;

long long int sum_vect(vector<long long int> nums, int n) {
    long long int res = 0;
    for (int i = 0; i < n; i++) res += nums[i];
    return res;
}

long long int solve(vector<long long int> nums, int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        while (nums[i] % 2 == 0) {
            nums[i] /= 2;
            k++;
        }
    }
    sort(nums.begin(), nums.end());
    nums[n - 1] <<= k;
    return sum_vect(nums, n);
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        cout << solve(nums, n) << "\n";
    }
    return 0;
}