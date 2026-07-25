#include <iostream>
#include <fstream>

using namespace std;

int main()
{


    ofstream saveFile;


    saveFile.open("save.txt");


    saveFile<<"Player Level:10";


    saveFile.close();



    cout<<"Save Complete"
        <<endl;


    return 0;

}
