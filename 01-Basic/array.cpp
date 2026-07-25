#include <iostream>

using namespace std;


int main()
{

    // =========================
    // 数组
    //
    // 游戏中：
    // 玩家背包
    // 技能栏
    // 敌人列表
    // 都可以使用数组保存
    // =========================


    string weapons[3] =
    {
        "Sword",
        "Bow",
        "Magic"
    };


    cout << "Weapon List:" << endl;


    for(int i = 0; i < 3; i++)
    {
        cout << i + 1
             << ". "
             << weapons[i]
             << endl;
    }


    return 0;
}
