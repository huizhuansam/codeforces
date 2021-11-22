#include <iostream>
#include <unordered_map>
#include <math.h>

using namespace std;

int solve(string keyboard, string s) {
    unordered_map<char, int> map;
    int res = 0;
    int len = s.size();

    if (len < 2) {
        return res;
    }
    
    for (int i = 0; i < 26; i++) {
        map[keyboard[i]] = i + 1;
    }

    for (int i = 0; i < len - 1; i++) {
        res += abs(map[s[i]] - map[s[i + 1]]);
    }
    
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string keyboard;
        string s;
        cin >> keyboard >> s;
        cout << solve(keyboard, s) << "\n";
    }

    return 0;
}
