#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    while(t--) {
       int n , c , d;
        cin >> n >> c >> d;
        set<int>s;
        int a = min(c,d);
        int b = max(c,d);

        for (int i = 0; i < n; i++) {
            s.insert(i * b + ((n-1) - i) * a);
        }
        for (auto it:s) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
