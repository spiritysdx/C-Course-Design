//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;


int main()
{
    //显示中文
    SetConsoleOutputCP(65001);
    
    
    //比较完后最后一个数比前面数都大，下次不用比较了
    int arr[]={4,2,8,0,5,7,1,3,9};
    cout<<"排序前"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //排序总轮数 = 元素数 - 1
    //每轮对比次数 = 元素个数 - 排序轮数 - 1
    //开始冒泡排序  总轮数 = 元素数 - 1
    for (int i = 0; i < 9 - 1; i++)
    {
        //内层循环对比  对比次数 = 元素个数 - 排序轮数 - 1
        for (int j = 0; j < 9 - i -1; j++)
        {
            //如果第一个数字比第二个大，交换次序
            if(arr[j]>arr[j+1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    };
    cout<<"排序后"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}