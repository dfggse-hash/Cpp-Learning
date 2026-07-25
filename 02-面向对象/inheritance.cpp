继承：
子类拥有父类属性和方法。
游戏：
Character

    |
    |
----------------
|       |       |
Warrior Mage Archer

代码：
#include <iostream>

using namespace std;

class Character
{

public:


    int hp;


    void move()
    {

        cout<<"Move"
            <<endl;

    }


};



class Warrior:public Character
{


public:


    void attack()
    {

        cout<<"Sword Attack"
            <<endl;

    }


};



int main()
{


    Warrior warrior;


    warrior.hp = 200;


    warrior.move();


    warrior.attack();



    return 0;
}

继承格式：
class 子类 : public 父类
{

};
例如：
class Enemy
{

};

class Boss:public Enemy
{

};
Boss拥有Enemy所有能力。
