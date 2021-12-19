#include <bits/stdc++.h>
using namespace std;

/***************************************************************/

int main()
{
    string s;
    getline(cin, s);

    vector<string>v;
    int indx=0;
    string x="";

    for (int i = 0; i <s.size(); ++i) {
        x="";
        if(s[i]==' '){
            for (int j = indx; j <i ; ++j) {
                x.push_back(s[j]);
            }
            v.push_back(x);
            indx=i+1;
        }
    }


    for (int i = indx; i <s.size() ; ++i) {
        x.push_back(s[i]);
    }
    v.push_back(x);



    int mxlength=0;
    for (int i = 0; i <v.size() ; ++i) {
        mxlength=max(mxlength, (int)v[i].length());
    }


    mxlength++;
    for (int i = 0; i <=mxlength+2; ++i) {
        cout<<"*";
    }

    cout<<endl;
    for (int i = 0; i <v.size() ; ++i) {
        cout<<"* "<<v[i];
        for (int j = 0; j <mxlength-v[i].length(); ++j) {
            cout<<" ";
        }
        cout<<"* "<<endl;
    }


    for (int i = 0; i <=mxlength+2; ++i) {
        cout<<"*";
    }
    cout<<endl;

}
/***************************************************************/
