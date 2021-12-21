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

    string s ;
    cin>>s;

    int l=0 , r= s.size()-1;
    int ok=1;
  
    while (l<=r){
        if (s[l]!=s[r]){
            ok=0;
            break;
        }
        else
            l++ , r--;
    }
    if (ok) cout<<"YES";
    else    cout<<"NO";
}

/***************************************************************/


