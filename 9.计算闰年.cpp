//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;


struct date
{
	int year;
	int month;
	int day;
};

int main()
{
    //显示中文
    SetConsoleOutputCP(65001);

    date p;
    int year,month,day;
    cout<<"以空格分开，输入年 月 日（例子:2021 1 12）：";
    cin>>p.year>>p.month>>p.day;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum,i;
    sum = p.day;
    for(i=0;i<p.month-1;i++)//之前所有月份总天数累加
    {
    	sum+=m[i];
    }
    if(((p.year%4==0  &&  p.year%100!=0)  ||  p.year%400==0)  &&  p.month>2)
    {
        cout<<sum+1<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    system("pause");
    return 0;
}
