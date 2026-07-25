#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);

    for(int x : nums)
    {
        cout << x << endl;
    }

    return 0;
}
