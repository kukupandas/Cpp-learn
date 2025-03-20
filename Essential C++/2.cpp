#include <iostream>
#include <vector>
using namespace std;
void display(const vector<int> &vec)
{
    for(int i = 0 ; i < vec.size() ; i++)
    {
        cout << vec[i] << ' ';
    }

    cout << endl;
}

void swap(int &vail1,int &vali2)
{
    int t = vali2;
    vali2 = vail1;
    vail1 = t;
}

void bubble_sort(vector<int> &vec)
{
    for(int i = 0 ; i < vec.size() ; i++)
        for(int j = i+1 ; j < vec.size() ; j++)
        {
            if(vec[i]>vec[j])
            {
                swap(vec[i],vec[j]);
            }
        }
}

int main()
{
    int ia[8] = {8,34,3,13,2,1,5,6};
    vector<int> vec(ia,ia+8);

    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    cout << "vector after sort: ";
    display(vec);
}