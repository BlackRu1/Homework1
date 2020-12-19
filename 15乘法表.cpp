#include<iostream>
using namespace std;
int main(){
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= i; j++)
			{
				std::cout << 15+10*j << "x" << 15+10*i << "=" << (15+10*j) *(15+10*i) << "   ";
			}
		std::cout << endl;		
	}
	system("pause");
		return 0;
}
