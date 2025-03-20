#include <iostream>

int main()
{
    using namespace std;

    int *p = new int;
    *p = 23;
    cout << "p id :" << (int*)p << endl;

    for (int i = 0; i < 5 ;i++)
    {
        cout << i << endl;

    }

    for (int j = 0; j<5 ;++j)
    {
        cout << j << endl;

    }

    delete p;

    return 0;

}
