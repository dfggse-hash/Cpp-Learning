学习：
C++算法库。
例如排序：
sort()
游戏：
排行榜排序。

代码：
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{


    vector<int> score =
    {
        100,
        300,
        200
    };


    sort(score.begin(),
         score.end());



    for(int s:score)
    {

        cout<<s<<endl;

    }
    return 0;

}
