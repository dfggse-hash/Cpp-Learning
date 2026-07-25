知识点
map：键值对。
形式：
key -> value
游戏：
装备：
101 -> Sword
102 -> Shield

代码：
#include <iostream>
#include <map>

using namespace std;

int main()
{

    /*
    ============================

    map

    key-value结构


    游戏:

    ID -> 数据


    ============================
    */


    map<int,string> weapons;



    weapons[101]="Sword";

    weapons[102]="Bow";



    cout<<"Weapon 101:"
        <<weapons[101]
        <<endl;



    for(auto item:weapons)
    {

        cout<<"ID:"
            <<item.first
            <<" ";

        cout<<"Name:"
            <<item.second
            <<endl;

    }

    return 0;

}
