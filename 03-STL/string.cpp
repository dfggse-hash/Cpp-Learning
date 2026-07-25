#include <iostream>
#include <string>


using namespace std;


/*
==============================

string

C++字符串类

游戏应用：

角色名字
装备名称
任务描述

==============================
*/


int main()
{

    string playerName="Hero";


    // 拼接

    playerName += "_Knight";

    cout<<playerName
        <<endl;



    // 获取长度

    cout<<"Length:"
        <<playerName.length()
        <<endl;


    // 查找

    if(playerName.find("Knight")
       != string::npos)
    {

        cout<<"Find Class"
            <<endl;

    }


    return 0;
}
