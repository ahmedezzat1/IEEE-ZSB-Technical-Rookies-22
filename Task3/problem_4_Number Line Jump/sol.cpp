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
    int x1 , x2 , v1 , v2;
    cin>>x1>>v1>>x2>>v2;

    if (x1 < x2){
        while (x1<=x2){
            if (x1==x2){
                cout<<"YES"<<endl;
                return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }

    else{
        while (x1>=x2){
            if (x1==x2){
                cout<<"YES"<<endl;
                return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }
        cout<<"NO"<<endl;
}



/***************************************************************/


