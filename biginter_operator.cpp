//
// Created by 晋毓麟 on 2018/12/18.
//
#include <bits/stdc++.h>
using namespace std;
string big_add(string a,string b)
{
    string s;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int sum = 0;
    for (int i = 0;i<b.length();i++)
    {
        sum = (a[i]-'0')+(b[i]-'0')+sum;
        s += char(sum%10 + '0');
        sum/=10;
    }
    for (int i = b.length();i<a.length();i++)
    {
        sum = (a[i]-'0') + sum;
        s += char(sum%10 + '0');
        sum/=10;
    }
    while(sum > 0)
    {
        s += char(sum%10 + '0');
        sum/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}