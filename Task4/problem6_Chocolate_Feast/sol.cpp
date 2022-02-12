#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin>>t;
    while (t--) {
        int n, c, m;
        cin >> n >> c >> m;

        int ans =n/c , w=ans;

        while (w>=m){
            w-=m;
            ans++;
            w++;
        }

        cout<<ans<<endl;
    }
}

