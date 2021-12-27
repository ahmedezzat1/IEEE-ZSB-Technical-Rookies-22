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
string mask(int a){
    string s=to_string(a);
    string ans="";
    for (int i = 0; i <s.size() ; ++i) {
        if (s[i]=='4' || s[i]=='7')
            ans+=s[i];
    }
    return ans;
}

int main() {
    file();
    IOS
    int n , m ;
    cin>>n>>m;
        vector<int>a(n) , b(m);

    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }

        sort(all(a)) , sort(all(b));
    vector<int> ans1;

    for (int i = 1; i <=b[0] ; ++i) {
        bool ok=1;
        for (int j = 0; j <n ; ++j) {
            if (i%a[j]!=0){
                ok=0;
                break;
            }
        }
        if (ok)
            ans1.push_back(i);
    }

    int ans=0;
    for (int i = 0; i < ans1.size(); ++i) {
        bool ok=1;
        for (int j = 0; j <m ; ++j) {
            if (b[j]%ans1[i]!=0) {
                ok = 0;
                break;
            }
        }
        if (ok)
            ans++;
    }

    cout<<ans<<endl;
    }


/***************************************************************/


