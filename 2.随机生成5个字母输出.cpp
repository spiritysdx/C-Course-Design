#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


int main()
{
	srand(time(0));
	cout << "随机生成的5个字母为：";
	for (int i = 0; i < 5; i++)
	{
		int b;
		
		b = rand() % 26;//生成0-25的随机数
		b += 'A';
		cout << (char)b<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}
