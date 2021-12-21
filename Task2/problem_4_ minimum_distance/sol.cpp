#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define loop(n)          for(int i = 0; i < (n); i++)
#define IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

/***************************************************************/

int main() {
    file();
    IOS

    int n;
    cin >> n;
    map<int, vector<int>> mp;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        mp[x].push_back(i);
    }
    int minDistance = 1e9;

    for (auto element : mp) {
        for (int i = 0; i < element.second.size() - 1; ++i) {
            minDistance = min(minDistance, abs(element.second[i] - element.second[i + 1]));
        }
    }
    cout << minDistance << endl;
}

/***************************************************************/


