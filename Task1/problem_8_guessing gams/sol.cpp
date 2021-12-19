#include <bits/stdc++.h>
using namespace std;

/***************************************************************/

int main()
{
    int n, guess, cnt = 0;
    srand(time(0)); 
    n = rand() % 10 + 1; 
    cout << "Enter a guess between 1 and 10 : "<<endl;
    do
    {
        cin >> guess;
        cnt++;
        if (guess != n)
            cout<<"Wrong guess"<<endl;
        else
            cout << "Yay You got it in " << cnt << " tries"<<endl;
    } while (guess != n);

    return 0;
}
/***************************************************************/
