#include <bits/stdc++.h>
using namespace std;

int main() {
    file();
    fast

    int t=1;
    //cin>>t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        bool ok = 0;
        for (long long i = l; i <= r; ++i) {
            long long x = i * i;

            string s = to_string(x);
            int d = s.size() / 2;
            long long a, b;

            if (d > 0) {
                a = stoll(s.substr(0, d));
                b = stoll(s.substr(d, s.size() - d));
            }
            if (a + b == i || i == 1)
                cout << i << " ", ok = 1;
        }

        if (ok==0) cout<<"INVALID RANGE";
    }

    }


