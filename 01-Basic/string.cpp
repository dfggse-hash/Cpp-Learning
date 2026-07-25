#include <iostream>
#include <string>

using namespace std;


int main()
{

    // ===============================
    // string字符串
    //
    // 游戏中：
    // 玩家名字
    // 技能名称
    // 装备名称
    // ===============================


    string playerName = "Knight";


    cout << "Player:"
         << playerName
         << endl;



    // 获取字符串长度

    cout << "Name Length:"
         << playerName.length()
         << endl;



    // 字符串拼接

    string title = "Hero ";

    string fullName = title + playerName;


    cout << fullName
         << endl;



    return 0;
}
