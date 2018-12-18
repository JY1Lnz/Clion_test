#include <bits/stdc++.h>
//#include "big_inter_operator.cpp"
#include "self_function.h"
using namespace std;

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