#include<iostream>
#include<bitset>
using namespace std;

int management();       //“学号管理系统”
int multiplication();   //“15乘法表”
int arr();              //“数组倒换”

int management()
{
    cout << "欢迎使用学生简易信息管理系统！\n";
    cout << "请输入数字\n";
    for (int i = 0; i < 10; i++)
    {
        int input;
        std::cin >> input;

        if (input <= 255) {
            input <= 127 ? cout << "这位同学是一位男同学" << endl : cout << "这位同学是一位女同学" << endl;
        }
        else
        {
            cout << "输入了错误的学号！请重新输入！" << endl;
            cout << "剩余次数：" << 9 - i << endl;
                continue; 
        }
        cout << "这位同学的学号是" << (bitset<8>) input << endl;
        cout << "剩余次数：" << 9 - i << endl;
        if (i == 10)
        {
            break;
        }
    }
    return 0;
}

int multiplication()
{
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << 15 + 10 * j << "x" << 15 + 10 * i << "=" << (15 + 10 * j) * (15 + 10 * i) << "   ";
        }
        std::cout << endl;
    }
    system("pause");
    return 0;
}
int arr()
{
    int i, t;
    std::cout << "请输入数字:";
    int array[10];             //输入

    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    for (i = 0; i < 5; i++)            //倒置
    {
        t = array[i];
        array[i] = array[10 - 1 - i];
        array[10 - 1 - i] = t;

    }
    std::cout << "倒出来：";
    for (int n = 0; n < 10; n++)
    {
        std::cout << array[n] << " ";       //输出
    }
    std::cout << endl;
    return 0;
}

int main()

{
    int choice;
    
    
    for (int i = 1;; i++)
    {   
        std::cout << "请输入你想进入的项目：" << std::endl;
    cin >> choice;
        if (choice == 0)
        {
            std::cout << "退出了嗷！" << endl;
            return 0;
        }
        else
            if (choice == 1)
            {
                std::cout << "go to 学号管理系统" << std::endl;
                management();
                    continue;
            }
            else
                if (choice == 2) {
                    std::cout << "go to 15乘法表" << std::endl;
                    multiplication();
                        continue;
                }
                else
                    if (choice == 3)
                    {
                        std::cout << "go to 10个数字的倒置器" << std::endl;
                        arr();
                            continue;
                    }
                    else
                    {
                        std::cout << "似乎没有选择到函数呢……重新试一下吧！" << endl;
                            break;
                    }
    }

}
