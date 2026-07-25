#include <iostream>

using namespace std;


// ===============================
// 函数
//
// 将重复代码封装
//
// 游戏开发中：
// 攻击
// 移动
// 技能释放
// 都会封装成函数
// ===============================


void attack()
{
    cout << "Player attacks!" << endl;
}


int calculateDamage(int attackPower)
{
    int damage = attackPower * 2;

    return damage;
}



int main()
{

    attack();


    int damage = calculateDamage(50);


    cout << "Damage:"
         << damage
         << endl;


    return 0;
}
