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
    int n, p;
    cin >> n >> p;
    int l, r;

    l = p / 2;

    if (n % 2 == 0)
        r = (n - p + 1) / 2;
    else
        r = (n - p) / 2;

    cout << min(r, l) << endl;

}

/***************************************************************/


