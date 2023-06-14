#include<iostream>
using namespace std;


int main() 
{
	int k = 0;
	for(int i = 100; i <= 1000; i++) 
    {
        int j;
		for(j = 2; j < i; j++) 
        {
			if(i % j == 0)
            {
				break;
            }
		}
		if (j == i)
        {
			k++;
			cout << i <<" ";
			if(k%5 == 0)
			{
				cout<<endl;
			}
        }
	}
	system("pause");
	return 0;
}