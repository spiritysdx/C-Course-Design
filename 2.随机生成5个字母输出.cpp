#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


int main()
{
	srand(time(0));
	cout << "������ɵ�5����ĸΪ��";
	for (int i = 0; i < 5; i++)
	{
		int b;
		
		b = rand() % 26;//����0-25�������
		b += 'A';
		cout << (char)b<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}
