#include <iostream>
using namespace std;
int main() {
    int i,t;
    std::cout<<"请输入数字:";
     int array[10];             //输入

    for(i=0;i<10;i++)
    {
    std::cin>>array[i];
    }
    for(i=0;i<5;i++)            //倒置
    {
        t=array[i];
        array[i]=array[10-1-i];
        array[10-1-i]=t;

    }
    std::cout<<"倒出来：";
    for(int n=0;n<10;n++)
    {
        std::cout<<array[n]<<" ";       //输出
    }
    std::cout<<endl;

    std::cout << "Hello, DynamicX!" << std::endl;
    return 0;
}
