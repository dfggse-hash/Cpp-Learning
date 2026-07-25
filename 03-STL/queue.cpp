知识点
队列：
先进先出。
FIFO:First In First Out
游戏：
技能释放：
技能1
 ↓
技能2
 ↓
技能3

代码：
#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> skills;

    skills.push("Fire");

    skills.push("Ice");

    skills.push("Thunder");



    while(!skills.empty())
    {


        cout<<skills.front()
            <<endl;



        skills.pop();


    }



    return 0;

}
