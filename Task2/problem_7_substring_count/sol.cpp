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

    string s , x;
    cin>>s>>x;

    int n=s.size() , m = x.size();
    int ans=0;
    
    for (int i = 0; i <=n-m ; ++i) {
        
        if (x==s.substr(i , m))
            ans++;
    }
    cout<<ans<<endl;
}

/***************************************************************/


