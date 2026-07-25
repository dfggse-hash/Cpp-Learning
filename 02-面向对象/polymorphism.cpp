###知识点
多态：
同一个接口，不同表现。
游戏：
所有角色：
attack()
但是：
战士：挥剑
法师：释放魔法

代码：
#include <iostream>

using namespace std;

class Character
{

public:


    virtual void attack()
    {

        cout<<"Normal Attack"
            <<endl;

    }


};



class Mage:public Character
{

public:


    void attack() override
    {

        cout<<"Magic Attack"
            <<endl;

    }


};



int main()
{


    Character* player;


    Mage mage;



    player=&mage;



    player->attack();



    return 0;
}

关键：
virtual
虚函数。
允许子类重新实现。
override
表示重写父类函数。
