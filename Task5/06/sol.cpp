#include <bits/stdc++.h>
using namespace std;

int main() {
    file();
    fast;

    int n, m;
    cin >> n;

    map<int, int> vis;
    vector<int> a;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        vis[x]++;
        if (vis[x] == 1)
            a.push_back(x);
    }
    sort(a.begin(), a.end());
    int sz = a.size();
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        int ans =upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << sz - ans + 1 << endl;
    }
}

