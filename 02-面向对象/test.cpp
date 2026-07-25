#include <iostream>

using namespace std;

class Player
{
public:
    string name;
    int level;

    void show()
    {
        cout << name << " Level:" << level << endl;
    }
};


int main()
{
    Player player;

    player.name = "Hero";
    player.level = 1;

    player.show();

    return 0;
}
