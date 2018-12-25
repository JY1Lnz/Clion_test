#include <iostream>
#include <vector>
//#include "big_inter_operator.cpp"
#include "self_function.h"

int main()
{
    std::vector<int> test = {10,3,7,4,12,2};
    std::vector<int> result = nextExceed(test);
    for (auto x:result)
        cout<<x<<' ';
    cout<<endl;
    cout<<count_factor(24)<<endl;
    return 0;
}