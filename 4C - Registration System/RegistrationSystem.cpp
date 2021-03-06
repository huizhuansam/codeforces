#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> dict;

    while (n--) {
        string name;
        cin >> name;
        if (dict[name]) {
            cout << name + to_string(dict[name]) + "\n";
            dict[name] = dict[name] + 1;
        } else {
            cout << "OK\n";
            dict[name] = 1;
        }
    }

    return 0;
}
