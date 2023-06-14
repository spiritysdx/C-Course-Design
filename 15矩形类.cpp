//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;


//定义一个矩形类，矩形的属性是左上角的顶点（点用结构体表示）、长、宽；方法有构造函数、拷贝构造函数、析构函数、显示矩形属性信息、计算矩形面积、周长、进行矩形平移、缩放等。编程测试该矩形类。

//点
struct Point
{
    int X;
    int Y;
    int incX;
    int incY;
};

class rectangle
{
public:
    //设置属性
    void set(Point &p)
    {
        cout<<"矩阵初始化"<<endl;
        cout<<"横坐标为";
        cin>>p.X;
        cout<<endl;
        cout<<"纵坐标为";
        cin>>p.Y;
        cout<<endl;
        cout<<"长为";
        cin>>p.incX;
        cout<<endl;
        cout<<"宽为";
        cin>>p.incY;
        cout<<endl;
    }

    //属性显示
    void attr(Point p)
    {
        cout<<"矩阵信息如下"<<endl;
        cout<<"左上角顶点横坐标为"<<p.X<<"纵坐标为"<<p.Y<<endl;
        cout<<"长为"<<p.incX<<"宽为"<<p.incY<<endl;
    }

    //周长
    void D(Point p)
    {
        cout<<"矩形周长为："<<(2*p.incX+2*p.incY)<<endl;
    }

    //面积
    void area(Point p)
    {
        cout<<"矩形面积"<<(p.incX*p.incY)<<endl;
    }


private:

    //点
    Point p;
};

int main()
{
    //显示中文
    SetConsoleOutputCP(65001);
    
    Point p;
    rectangle k;
    k.set(p);
    k.attr(p);
    k.D(p);
    k.area(p);
    system("pause");
    return 0;
}