using namespace std;
#include<iostream>

int main()
{
	int i, j, k, line, b, m;
	cout<<"ÇëÊäÈëÐÐÊý:";
	cin >> line;
	for (i = 0; i < line; i++)
	{
		b = 65;
		for (j = 0; j < line - i - 1; j++)
		{
			cout << " ";
		}
		for (k = 0; k < i + 1; k++)
		{
			cout << (char)b;
			b++;
		}
		for (k = i + 1, m = b - 2; k < 2 * (i + 1) - 1; k++)
		{
			cout << (char)m;
			m--;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
