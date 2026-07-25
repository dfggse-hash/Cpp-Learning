知识点
set：自动去重。
游戏：
玩家获得成就：
Achievement:
First Kill
Dragon Slayer

代码：
#include <iostream>
#include <set>

using namespace std;

int main()
{


    set<string> achievements;

    achievements.insert("First Kill");

    achievements.insert("First Kill");

    achievements.insert("Dragon Slayer");



    for(string a:achievements)
    {

        cout<<a<<endl;

    }



    return 0;

}
