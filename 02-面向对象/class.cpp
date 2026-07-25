#include <iostream>

using namespace std;


/*
================================

类 Class

类是对象的模板

例如：

Character类
可以创建：

Player
Enemy
NPC

================================
*/


class Character
{

public:

    // 属性

    string name;

    int hp;


    // 方法

    void show()
    {
        cout << "Name:"
             << name
             << endl;


        cout << "HP:"
             << hp
             << endl;
    }

};



int main()
{

    // 创建对象

    Character player;


    // 给对象赋值

    player.name = "Knight";

    player.hp = 100;



    // 调用方法

    player.show();



    return 0;
}
