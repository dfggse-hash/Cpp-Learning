知识点
vector：
动态数组
普通数组
int arr[10];
大小固定。
vector<int>
大小可以变化。


代码：
#include <iostream>
#include <vector>

using namespace std;


/*
================================

vector

动态数组

特点：

1. 自动扩容
2. 可以添加删除元素
3. 支持随机访问


游戏应用：

玩家列表
技能列表
装备列表

================================
*/


int main()
{

    vector<string> players;


    // 添加玩家

    players.push_back("Knight");

    players.push_back("Mage");

    players.push_back("Archer");



    cout<<"Player List:"
        <<endl;


    // 遍历vector

    for(string player : players)
    {

        cout<<player<<endl;

    }



    // 获取数量

    cout<<"Player Count:"
        <<players.size()
        <<endl;


    // 删除最后一个

    players.pop_back();



    cout<<"After Remove:"
        <<endl;



    for(string player : players)
    {

        cout<<player<<endl;

    }

    return 0;
}
