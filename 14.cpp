using namespace std;
#include<iostream>
#include<string>



int main()
{
	string str = " ";
	
	cout << "请输入一串字符：";
	cin >> str;
	int len = str.size();
	int start = 0, end = len - 1;
	for (; start < end; start++, end--)
	{
		char tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
	}
	cout << "翻转后：" << str << endl;
	

	system("pause");
	return 0;
}