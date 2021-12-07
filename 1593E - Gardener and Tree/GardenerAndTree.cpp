#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int solve(unordered_map<int, unordered_set<int>> adj_list, unordered_set<int> leaves, int k) {
    while (k-- && leaves.size() > 0) {
        unordered_set<int> new_leaves;
        for (auto& leaf : leaves) {
            if (adj_list[leaf].size() > 0) {
                int adj = *adj_list[leaf].begin();
                adj_list[adj].erase(leaf);
                if (adj_list[adj].size() < 2) new_leaves.insert(adj);
            } 
            adj_list.erase(leaf);
        }
        leaves = new_leaves;
    }
    return adj_list.size();
}

int main() 
{
    int t, n, k, u, v;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        unordered_map<int, unordered_set<int>> adj_list;
        unordered_set<int> leaves;
        while (n-- > 1) {
            cin >> u >> v;
            adj_list[u].insert(v);
            adj_list[v].insert(u);
            if (adj_list[u].size() < 2) leaves.insert(u);
            else leaves.erase(u);
            if (adj_list[v].size() < 2) leaves.insert(v);
            else leaves.erase(v);
        }
        cout << solve(adj_list, leaves, k) << "\n";
    }

    return 0;
}