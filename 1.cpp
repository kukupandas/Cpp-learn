#include <iostream>//声明，引用该文件

int main(void) //函数头
{
    using namespace std;//std（存在于iostream）包含cin、cout、endl等等……
    /*指定引用std命名空间里的特定对象
    using std::cin
    using std::cout
    using std::endl
    */
    int carrots; //定义声明
    cout << "how many" << endl;
    cin >> carrots;
    cout << "here are two more" << endl;
    carrots = carrots + 2;
    

    return 0; //函数体
}