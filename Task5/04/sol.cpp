#include <bits/stdc++.h>
using namespace std;

int main() {
        file();
        fast;

        int n  , d;
        cin>>n>>d;

        vector<int>v(n);

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int ans=0;
    for (int i = 0; i < n; ++i) {
        int x=v[i]+d;
        if(binary_search(v.begin() , v.end() , x)){
            if(binary_search(v.begin() , v.end() , x+d))
                ans++;
        }
    }
    cout<<ans<<endl;
}
