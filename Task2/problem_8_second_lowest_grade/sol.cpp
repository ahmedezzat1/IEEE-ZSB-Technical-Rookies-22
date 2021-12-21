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
    vector<pair<double , string>> v(n);

    for (int i = 0; i <n ; ++i) {
        cin>>v[i].second>>v[i].first;
    }

    sort(v.begin() , v.end());

    double firstLowest=v[0].first  , secondLowest=0;
    
    for (int i = 0; i <n ; ++i) {
        if (v[i].first!=firstLowest){
        secondLowest=v[i].first;
            break;
        }
    }
    for (int i = 0; i <n ; ++i) {
        if (v[i].first==secondLowest){
            
            cout<<v[i].second<<endl;
        }
    }
    }

/***************************************************************/
