#include<iostream>
#include<bitset>
using namespace std;

int management();       //��ѧ�Ź���ϵͳ��
int multiplication();   //��15�˷���
int arr();              //�����鵹����

int management()
{
    cout << "��ӭʹ��ѧ��������Ϣ����ϵͳ��\n";
    cout << "����������\n";
    for (int i = 0; i < 10; i++)
    {
        int input;
        std::cin >> input;

        if (input <= 255) {
            input <= 127 ? cout << "��λͬѧ��һλ��ͬѧ" << endl : cout << "��λͬѧ��һλŮͬѧ" << endl;
        }
        else
        {
            cout << "�����˴����ѧ�ţ����������룡" << endl;
            cout << "ʣ�������" << 9 - i << endl;
                continue; 
        }
        cout << "��λͬѧ��ѧ����" << (bitset<8>) input << endl;
        cout << "ʣ�������" << 9 - i << endl;
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
    std::cout << "����������:";
    int array[10];             //����

    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    for (i = 0; i < 5; i++)            //����
    {
        t = array[i];
        array[i] = array[10 - 1 - i];
        array[10 - 1 - i] = t;

    }
    std::cout << "��������";
    for (int n = 0; n < 10; n++)
    {
        std::cout << array[n] << " ";       //���
    }
    std::cout << endl;
    return 0;
}

int main()

{
    int choice;
    
    
    for (int i = 1;; i++)
    {   
        std::cout << "����������������Ŀ��" << std::endl;
    cin >> choice;
        if (choice == 0)
        {
            std::cout << "�˳���໣�" << endl;
            return 0;
        }
        else
            if (choice == 1)
            {
                std::cout << "go to ѧ�Ź���ϵͳ" << std::endl;
                management();
                    continue;
            }
            else
                if (choice == 2) {
                    std::cout << "go to 15�˷���" << std::endl;
                    multiplication();
                        continue;
                }
                else
                    if (choice == 3)
                    {
                        std::cout << "go to 10�����ֵĵ�����" << std::endl;
                        arr();
                            continue;
                    }
                    else
                    {
                        std::cout << "�ƺ�û��ѡ�񵽺����ء���������һ�°ɣ�" << endl;
                            break;
                    }
    }

}
