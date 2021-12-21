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
   //file();
    IOS

    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    int primaryDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                primaryDiagonal += a[i][j];

            if (i + j == n - 1)
                secondaryDiagonal += a[i][j];
        }
    }
        cout << abs(primaryDiagonal - secondaryDiagonal) << endl;

}
/***************************************************************/
