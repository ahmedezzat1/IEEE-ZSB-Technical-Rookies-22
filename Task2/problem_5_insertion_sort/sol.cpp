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
    cin>>n;
    vector<int>v(n);

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }


    for ( int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    for (int i = 0; i <n ; ++i) {
        cout<<v[i]<<" ";
    }
}


/***************************************************************/


