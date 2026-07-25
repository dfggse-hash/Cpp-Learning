知识点
栈：
先进后出。
应用：
游戏撤销
战斗状态恢复

代码：
#include <iostream>
#include <stack>

using namespace std;


int main()
{


    stack<string> states;


    states.push("Idle");

    states.push("Run");

    states.push("Attack");



    while(!states.empty())
    {

        cout<<states.top()
            <<endl;


        states.pop();

    }


    return 0;

}
