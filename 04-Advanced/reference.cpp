#include <iostream>

using namespace std;

/*
=================================

引用 Reference

引用是变量的别名

不会创建新的空间


游戏应用：

避免复制大型对象

提高性能

=================================
*/

void changeHP(int& hp)
{

    hp -= 50;

}



int main()
{


    int playerHP = 100;


    cout<<"Before:"
        <<playerHP
        <<endl;



    // 传递引用

    changeHP(playerHP);



    cout<<"After:"
        <<playerHP
        <<endl;

    return 0;

}

知识笔记:
普通变量
int hp=100;
内存：
hp
|
100
引用
int& ref=hp;
效果：
hp
|
100

ref
|
同一个100
修改：
ref=50;
hp也变成50;
