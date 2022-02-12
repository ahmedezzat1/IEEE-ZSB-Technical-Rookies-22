#include <bits/stdc++.h>
using namespace std;

int main() {
    //file();
    fast

    int t;
    cin>>t;
    while (t--){
        string cn ;
        cin>>cn;
        int n=stoi(cn);

        vector<int>digits;

        for (int i = 0; i < cn.size(); ++i) {
            digits.push_back(cn[i]-'0');
        }
        int cnt=0;
        for (int i = 0; i < digits.size(); ++i) {
            if (digits[i]!=0)
            if (n%digits[i]==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}

