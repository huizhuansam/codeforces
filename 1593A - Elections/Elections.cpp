#include <bits/stdc++.h>

using namespace std;

int solve(int candidate, int competitor1, int competitor2) {
    int max_vote = max(candidate, max(competitor1, competitor2));
    return candidate == max_vote && max_vote > competitor1 && max_vote > competitor2
        ? 0
        : max_vote - candidate + 1;
}

int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << solve(a, b, c) << " " << solve(b, a, c) << " " << solve(c, a, b) << "\n";
    }
    return 0;
}
