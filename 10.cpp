#include<iostream>
using namespace std;

void max(int a[5][5])
{
	int maxi;
	int i, j;
	maxi = a[0][0];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] > maxi)
			{
				maxi = a[i][j];
			}
		}
		cout << maxi<<" ";
		maxi = a[i+1][0];
	}

}

int main()
{
	int a[5][5], i, j;
	cout << "请输入一个5*5的二维数组：" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}
	

	cout << "新的数组(每行最大)为：" << endl;
	max(a);


	system("pause");
	return 0;
}
