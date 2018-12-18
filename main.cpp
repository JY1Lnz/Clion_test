#include <bits/stdc++.h>
//#include "big_inter_operator.cpp"
#include "self_function.h"
using namespace std;

int main() {
    string a, b;
    while(cin>>a>>b)
    {
        cout<<big_add(a,b)<<endl;
        cout<<big_sub(a,b)<<endl;
    }


    return 0;
}