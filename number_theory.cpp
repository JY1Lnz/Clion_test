//
// Created by 晋毓麟 on 2018/12/25.
//
//数论代码总汇


//求一个数的因子数量
//数论
//6 = 2^1*3^1 因子数量 = (1+1)*(1+1)
//24 = 2^3*3^1 因子数量 = (1+3)*(1+1)
int count_factor(int n)
{
    int sum = 1;//因子数
    int now = 0;//当前素数的阶乘
    int x = 2;//素数
    while(n>1)
    {
        if (n%x == 0)
        {
            now++;
            n/=x;
            if (n != 1)
                continue;//为了让while下层可以在最后一次运行
        }

        sum = sum*(now+1);
        now = 0;
        x++;
    }
    return sum;
}
