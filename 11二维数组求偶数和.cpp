//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;


int main()
{
    //显示中文
    SetConsoleOutputCP(65001);

    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int sum = 0;
    for(int a=0;a<4;a++)
    {
        for(int b=0;b<4;b++)
        {
            if((a+b)%2 == 0)
            {
                int *p = &m[a][b];
                sum += *p;
            }
        }
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}




