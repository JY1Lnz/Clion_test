//
// Created by 晋毓麟 on 2019/1/3.
//
//树状数组
//树状数组以二进制查询
//C[i] = A[i-2^k+1]+A[i-2^k+2]+...+A[i] (k为i的二进制中从最低位到高位连续零的长度)
//例如i=8时，k=3;

const int n = 8;//数组长度
int C[n];
int pre[n];//前缀和数组

int lowbit(int x)
{
    //求2^k 原理
    //-x为x去反码后加1
    //原码 01101000
    //反码 10010111 加1后
    //补码 10011000 与 x进行且运算
    return x&-x;
}

void plus(int pos,int num)
{
    //对树状数组进行加法运算
    while(pos <= n)
    {
        C[pos] += num;
        pos += lowbit(pos);//找到对应的的父节点维护其值
    }
}

int Sum(int end)
{
    //区间0-end 的和
    //从高位不断累加
    int sum = 0;
    while (end > 0)
    {
        sum += C[end];
        end -= lowbit(end);
    }
    return sum;
}

void init()
{
    //初始化树状数组
    for (int i = 1;i<=n;i++)
        C[i] = pre[i]-pre[i-lowbit(i)];//利用树状数组性质
}