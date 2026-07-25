#include <iostream>

using namespace std;



class Player
{

public:


    string name;

    int hp;



    // 构造函数

    Player()
    {

        name = "Unknown";

        hp = 100;

        cout << "Player Created"
             << endl;

    }


};



int main()
{


    Player player;



    cout << player.name
         << endl;


    cout << player.hp
         << endl;



    return 0;
}
