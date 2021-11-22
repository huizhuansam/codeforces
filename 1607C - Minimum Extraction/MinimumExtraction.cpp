#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int res = v[0];
        for (int i = 0; i < n - 1; i++) res = max(res, v[i + 1] - v[i]);
        cout << res << "\n";
    }

    return 0;
}