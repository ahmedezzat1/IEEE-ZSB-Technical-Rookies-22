#include <bits/stdc++.h>
using namespace std;

int main() {
    file();
    fast;

    string s;
    cin>>s;
    int n = s.size() , x;
    cin>>x;
    int ans=0;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='r')
            ans++;
    }
    int d=x/n , r= x%n;

    ans*=d;
    for (int i = 0; i < r; ++i) {
        if (s[i]=='r')
            ans++;
    }

    cout<<ans<<endl;

}


