#include <iostream>
#include <vector>

int main()
{   
    using namespace std;
    int ma[3]={1,2,3};
    vector<int> a(ma,ma+3);
    for(int i = 0;i < a.size();i++)
    {
        cout << a[i] << ' ';
    }

    return 0;


}