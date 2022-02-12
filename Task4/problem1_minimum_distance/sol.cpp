#include <bits/stdc++.h>
using namespace std;
int main() {
   
    int n ;
    cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

        map< int ,vector<int>>index;

    for (int i = 0; i < n; ++i) {
        index[v[i]].push_back(i);
    }
    int minDis=1e9;
    for (auto it : index) {
        for (int i = 0; i < it.second.size()-1; ++i) {
            minDis=min(minDis , it.second[i+1]-it.second[i]);
        }

    }

    cout<<minDis<<endl;

}

