//
// Created by 晋毓麟 on 2018/12/23.
//

/*
给一个数组，返回一个大小相同的数组。
 返回的数组的第i个位置的值应当是，对于原数组中的第i个元素，至少往右走多少步，才能遇到一个比自己大的元素
 （如果之后没有比自己大的元素，或者已经是最后一个元素，则在返回数组的对应位置放上-1）
*/
#include<stack>
#include<vector>

std::vector<int> nextExceed(std::vector<int> &input)
{
    std::vector<int> result(input.size(),-1);
    std::stack<int> monoStack;
    for (int i = 0;i<input.size();i++)
    {
        while(!monoStack.empty()&&input[i] > input[monoStack.top()])
        {
            result[monoStack.top()] = i-monoStack.top();
            monoStack.pop();
        }
        monoStack.push(i);
    }
    return result;
}