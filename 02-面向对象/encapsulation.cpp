#include <iostream>

using namespace std;


class Player
{


private:

    int hp;



public:


    Player()
    {

        hp = 100;

    }



    void takeDamage(int damage)
    {

        hp -= damage;


        if(hp < 0)
            hp = 0;

    }



    int getHP()
    {

        return hp;

    }


};



int main()
{

    Player player;


    player.takeDamage(30);


    cout << "HP:"
         << player.getHP()
         << endl;



    return 0;
}


知识点
封装：
隐藏内部数据，只通过接口访问。

游戏：
玩家不能直接修改：
HP = 999999
应该：
TakeDamage()

Heal()


访问权限：
public
公开
任何地方可以访问。
private
私有
只能类内部访问。
protected
保护
继承时使用。
