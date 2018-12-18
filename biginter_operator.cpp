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
    for (int i = s.length()-1;i>=0;i--)
        if (s[i] != '0')
            break;
        else
            s[i] = 0;
    reverse(s.begin(),s.end());
    return s;
}

string big_sub(string a,string b)//忽视正负问题
{
    string s;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int overflow = 0;
    for (int i = 0;i<b.length();i++)
    {
        a[i] = a[i] - overflow;
        if (a[i] < b[i])
        {
            overflow = 1;
            s += char((10-(b[i]-'0'))+(a[i]-'0')+'0');
        }
        else if (a[i] > b[i])
        {
            overflow = 0;
            s += char((a[i]-'0')-(b[i]-'0')+'0');
        }
        else
        {
            overflow = 0;
            s += '0';
        }
    }
    for (int i = b.length();i<a.length();i++)
    {
        a[i] = a[i] - overflow;
        if ((a[i]-'0') < 0)
        {
            overflow = 1;
            s += '9';
        }
        else
        {
            overflow = 0;
            s += a[i];
        }
    }
    for (int i = s.length()-1;i>=0;i--)
        if (s[i] != '0'||i == 0)
            break;
        else
            s.erase(i);
    reverse(s.begin(),s.end());
    return s;
}