#include<iostream>
using namespace std;


int main() 
{
    int a,b;
    b = 0;
    while (true)
    {
        cout<<"num"<<":";
        cin>>a;
        if(a>b)
        {
            b = a;
        }
        if(a == 0)
        {
            cout<<"max num:"<<b<<endl;
            break;
        }
    }
    system("pause");
	return 0;
}