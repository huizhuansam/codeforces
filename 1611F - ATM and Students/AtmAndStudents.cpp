#include <iostream>
#include <vector>

using namespace std;

// SLIDING WINDOW TECHNIQUE ON DISPLAY
vector<int> solve(int *arr, int n, int s) {
    int l = 0;
    int r = 0;
    int lo = -1;
    int hi = -1;
    int nums_between = 0;
    long long int rem = s;
 
    while (r < n) {
        rem += arr[r];
        if (rem < 0) {
            while (rem < 0 && l <= r) {
                rem -= arr[l];
                l++;
            }
        } else {
            if (nums_between < r - l + 1) {
                nums_between = r - l + 1;
                lo = l;
                hi = r;
            }
        }
        r++;
    }
 
    return {lo, hi};
}

int main() 
{
    int t, n, s;
    cin >> t;
    
    while (t--) {
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        vector<int> sol = solve(arr, n, s);
        if (sol[0] == -1) cout << -1;
        else cout << sol[0] + 1 << " " << sol[1] + 1;
        cout << "\n";
    }
 
    return 0;
}
