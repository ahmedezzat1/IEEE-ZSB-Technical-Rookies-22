#include <bits/stdc++.h>
using namespace std;

int main() {
        file();
        fast;

        int n , k , q;
        cin>>n>>k>>q;
        vector<int>v(n);
        deque<int >r;

    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }

    k%=n;
    for (int i = 0; i < k; ++i) {
        r.push_front(v[n-1-i]);
    }
    for (int i = 0; i < n-k; ++i) {
        r.push_back(v[i]);
    }
    int x;
    while (q--){
        cin>>x;
        cout<<r[x]<<endl;
    }

}

