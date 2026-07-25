#include <iostream>

using namespace std;


/*
=================================

C++指针学习

指针保存的是变量的内存地址

游戏开发中：

角色对象
武器对象
技能对象

都会涉及对象地址管理

=================================
*/


int main()
{

    // 普通变量

    int hp = 100;


    cout << "Player HP:"
         << hp
         << endl;



    // 获取变量地址

    cout << "HP Address:"
         << &hp
         << endl;



    /*
    =============================

    指针变量

    int* 表示：
    一个保存int类型地址的指针

    =============================
    */


    int* hpPointer = &hp;



    cout << "Pointer Address:"
         << hpPointer
         << endl;



    // 通过指针访问数据

    cout << "Pointer Value:"
         << *hpPointer
         << endl;



    /*
    =============================

    修改指针指向的数据

    游戏中：

    技能改变角色血量

    本质就是修改对象数据

    =============================
    */


    *hpPointer = 50;


    cout << "New HP:"
         << hp
         << endl;



    return 0;
}
