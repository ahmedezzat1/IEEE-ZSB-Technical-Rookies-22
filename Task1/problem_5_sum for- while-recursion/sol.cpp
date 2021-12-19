#include <bits/stdc++.h>
using namespace std;

/***************************************************************/

int sum_for_loop(int a[] ,int n)
{
    int sum=0;
    for (int i = 0; i <n ; ++i) {
        sum+=a[i];
    }
    return sum;

}

int sum_while_loop(int a[] , int n){
    int i=0 ,sum=0;
    while (i<n){
        sum+=a[i];
        i++;
    }
    return sum;

}
int sum_recursion(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (sum_recursion(a, n - 1) + a[n - 1]);
}


int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i <n; ++i) {
        cin>>a[i];
    }

    cout<<sum_for_loop(a , n)<<endl;
    cout<<sum_while_loop(a , n)<<endl;
    cout<<sum_recursion(a , n)<<endl;



}
/***************************************************************/
