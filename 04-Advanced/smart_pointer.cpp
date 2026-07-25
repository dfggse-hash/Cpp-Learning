#include <iostream>
#include <memory>

using namespace std;


/*
=================================

智能指针

自动管理内存


现代C++推荐方式


=================================
*/


class Enemy
{

public:

    Enemy()
    {

        cout<<"Enemy Created"
            <<endl;

    }


    ~Enemy()
    {

        cout<<"Enemy Destroyed"
            <<endl;

    }


};



int main()
{


    unique_ptr<Enemy> enemy =
        make_unique<Enemy>();



    cout<<"Game Running"
        <<endl;



    return 0;

}


知识笔记
unique_ptr
特点：一个对象只能一个拥有者。
游戏：
一个Player对象
一个管理者
shared_ptr
多个地方引用：
例如：
角色
 |
技能系统
 |
动画系统
共同使用一个对象。
