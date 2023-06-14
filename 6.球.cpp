using namespace std;
#include<iostream>

int main()
{
	float b = 100;
	float s = 100;
	for (int i = 1; i < 10; i++)
	{
		
		b/= 2;
		s += 2*b;
	}
	cout << s << endl;
	system("pause");
	return 0;
}