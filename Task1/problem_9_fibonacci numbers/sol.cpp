#include <bits/stdc++.h>
using namespace std;

long long fib(long num){
    if(num==0 ||num==1)
        return num;
    else
        return fib(num-1)+fib(num-2);
}

/***************************************************************/

int main() {
 
    int n ;
    cin>>n;

    for (int i = 0; i <n ; ++i) {
        cout<<fib(i)<<" ";
    }
}
/***************************************************************/
