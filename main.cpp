#include <iostream>
#include <vector>
//#include "big_inter_operator.cpp"
#include "self_function.h"

int main()
{
    std::vector<int> test = {5,3,1,2,4};
    std::vector<int> result = nextExceed(test);
    for (auto x:result)
        cout<<x<<' ';
    return 0;
}