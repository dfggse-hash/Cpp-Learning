#include <iostream>

using namespace std;


/*
=================================

动态内存

new:
申请内存


delete:
释放内存


游戏开发：

创建对象

销毁对象

管理资源


=================================
*/


class Player
{

public:

    int hp;


    Player()
    {

        hp=100;

        cout<<"Player Created"
            <<endl;

    }


    ~Player()
    {

        cout<<"Player Destroyed"
            <<endl;

    }


};

int main()
{


    // 动态创建对象

    Player* player =
        new Player();

    cout<<"HP:"
        <<player->hp
        <<endl;

    // 释放内存

    delete player;

    return 0;

}


知识笔记
栈内存
例如：Player player;
自动管理：
创建：
↓
使用
↓
自动销毁

堆内存
例如：Player* player=new Player();
需要：delete player;
否则：内存泄漏。

游戏中的对应关系
例如：
玩家进入游戏：new Player()
退出游戏：delete Player
