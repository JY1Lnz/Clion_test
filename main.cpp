#include <bits/stdc++.h>
//#include "big_inter_operator.cpp"
#include "big_inter.h"
using namespace std;
//string big_add(string,string);
int main() {
    string a,b,c;
    cin>>a>>b;
    if (a.length()>b.length())
        c = big_add(a,b);
    else
        c = big_add(b,a);
    cout<<c<<endl;

    return 0;
}