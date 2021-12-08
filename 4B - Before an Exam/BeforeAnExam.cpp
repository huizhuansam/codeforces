#include <bits/stdc++.h>

using namespace std;

void print(vector<int> vect, int d) {
    for (int i = 0; i < d; i++) cout << vect[i] << " ";
}

void solve(vector<int> minTimes, vector<int> maxTimes, int d, int sumTime) {
    vector<int> res = minTimes;
    int remain = sumTime;
    for (int i = 0; i < d; i++) remain -= res[i];
    if (remain == 0) {
        cout << "YES" << "\n";
        print(res, d);
    } else if (remain > 0) {
        for (int i = 0; i < d; i++) {
            int diff = maxTimes[i] - res[i];
            if (diff < remain) {
                res[i] = maxTimes[i];
                remain -= diff;
            } else {
                res[i] += remain;
                cout << "YES" << "\n";
                print(res, d);
                return;
            }
        }
        cout << "NO";
    } else cout << "NO";
}

int main()
{
    int d, sumTime, minTime, maxTime;
    vector<int> minTimes;
    vector<int> maxTimes;
    cin >> d >> sumTime;
    for (int i = 0; i < d; i++) {
        cin >> minTime >> maxTime;
        minTimes.push_back(minTime);
        maxTimes.push_back(maxTime);
    }
    solve(minTimes, maxTimes, d, sumTime);
    return 0;
}