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
   // file();
   // IOS

    srand(time(0));
   int  random = rand() % 1000+100 ;
   int n=random;
   string s= to_string(n);
   s="132";
    int cnt=0;

    string a;
    do {
        cin>>a;
        int hit=0 , miss=0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j <3 ; ++j) {
                if (s[i]==a[j] and i==j)
                    hit++;
                else if(s[i]==a[j] and i!=j)
                    miss++;
            }
        }
        cout<< hit <<" hits" <<" ";
        cout<< miss <<" misses"<<endl;
        cnt++;

    }
    while (a!=s);

    cout<<cnt<<" guesses"<<endl;
}

/***************************************************************/


