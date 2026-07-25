#include <iostream>

using namespace std;

int main()
{
    // ==============================
    // for循环
    // 游戏中常用于：
    // 遍历玩家列表、技能列表、背包物品
    // ==============================

    cout << "For Loop:" << endl;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enemy " << i << endl;
    }


    // ==============================
    // while循环
    // 游戏中的主循环思想：
    //
    // while(gameRunning)
    // {
    //     更新游戏状态
    //     渲染画面
    // }
    //
    // ==============================

    cout << endl;

    int hp = 3;

    while(hp > 0)
    {
        cout << "Player HP: "
             << hp
             << endl;

        hp--;
    }


    return 0;
}
