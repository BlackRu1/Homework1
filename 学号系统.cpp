#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    cout << "欢迎使用学生简易信息管理系统！\n";
    cout << "请输入数字\n";
    for (int i=1;i<255;i++ )
    {
        int input;
        std::cin>>input;

        if (input <= 255) {
            input <= 127 ? cout << "这位同学是一位男同学" << endl : cout << "这位同学是一位女同学" << endl;
        }
        else
            {
            cout << "输入了错误的学号！请重新输入！" << endl;
            continue;
        }
        cout << "这位同学的学号是" <<(bitset<8>) input<< endl;
    }
}


