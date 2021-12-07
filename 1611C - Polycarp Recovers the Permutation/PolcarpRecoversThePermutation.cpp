#include <bits/stdc++.h>

using namespace std;

void print_deque(deque<int> dq, int n) {
    for (int i : dq) cout << i << " ";
}

bool is_largest(vector<int> v, int l, int n) {
    for (int i : v) if (n < i) return false;
    return true;
}

void solve(vector<int> v, bool first, int len) {
    deque<int> dq;
    int l = 0;
    int r = len - 1;
    if (first) {
        dq.push_back(v[l]);
        l++;
    } else {
        dq.push_back(v[r]);
        r--;
    }

    while (l <= r) {
        if (v[l] < v[r]) {
            dq.push_front(v[l]);
            l++;
        } else {
            dq.push_back(v[r]);
            r--;
        }
    }

    print_deque(dq, len);
}

void solve(vector<int> v, int l) {
    int first = v[0];
    int last = v[l - 1];
    if (is_largest(v, l, first)) {
        solve(v, true, l);
    } else if (is_largest(v, l, last)) {
        solve(v, false, l);
    } else {
        cout << -1;
    }
}

int main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        solve(v, n);
        cout << "\n";
    }

    return 0;
}