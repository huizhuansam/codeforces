#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector<int> v) {
    for (int i = 0, j = v.size() - 1; i < j; i++, j--) 
        if (v[i] != v[j]) return false;

    return true;
}

vector<int> copyVect(vector<int> v, int n) {
    vector<int> r;

    for (int i = 0; i < v.size(); i++) 
        if (v[i] != n) r.push_back(v[i]);

    return r;
}

string solve(int n, vector<int> v) {
    for (int i = 0, j = v.size() - 1; i < j; i++, j--) 
        if (v[i] != v[j]) 
            return isPalindrome(copyVect(v, v[i])) || isPalindrome(copyVect(v, v[j])) 
                ? "YES" 
                : "NO";

    return "YES";
}

int main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin>> v[i];
        cout << solve(n, v) << "\n";
    }

    return 0;
}