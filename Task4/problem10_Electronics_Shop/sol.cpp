#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int b , n , m;
    cin>>b>>n>>m;

    vector<int>k(n) , u(m);
    for (int i = 0; i < n; ++i) {
        cin>>k[i];
    }

    for (int i = 0; i < m; ++i) {
        cin>>u[i];
    }
    int maxCost=-1 ,cost=-1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (k[i]+u[j]<=b)
                 cost=k[i]+u[j];
                maxCost=max(maxCost , cost);
        }
    }
    cout<<maxCost<<endl;
}


