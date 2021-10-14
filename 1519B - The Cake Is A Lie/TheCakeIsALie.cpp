#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int n, m, k;
        cin >> n;
        cin >> m;
        cin >> k;
        (n * m) - 1 == k ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}