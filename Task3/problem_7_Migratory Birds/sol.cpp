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
    vector<int>frq(2e5+5,0) , v(n);

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        frq[v[i]]++;
    }
    int maxFrq=0 , ans=0;
    for (int i = 0; i <2e5+5 ; ++i) {
        if (frq[i]>maxFrq) {
            maxFrq = frq[i];
            ans=i;
        }
    }

    cout<<ans<<endl;
}

/***************************************************************/


