//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;


//点和圆关系
class Point
{
public:
    void setX(int x)
    {
        m_X = x;
    }

    void setY(int y)
    {
        m_Y = y;
    }

    int getX()
    {
        return m_X;
    }

    int getY()
    {
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
};
//圆类
class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        m_R  = r;
    }

    //设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }

    //获取圆心
    Point getCenter()
    {
        return m_Center;
    }

    //获取半径
    int getR()
    {
        return m_R;
    }
private:

    int m_R;

    //在类中可以让另一个类作为本类中的成员
    Point m_Center;
};




//判断点和圆的关系
void isIncircle(Circle &c,Point &p)
{
    //计算两点之间的距离的平方
    int distance = 
        (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径的平方
    int rDistance = c.getR() * c.getR();

    //判断关系
    if(distance == rDistance)
    {
        cout<<"点在圆上"<<endl;
    }
    else if (distance < rDistance)
    {
        cout<<"点在圆内"<<endl;
    }
    else
    {
        cout<<"点在圆外"<<endl;
    }
    
    
}
int main()
{
    //显示中文
    SetConsoleOutputCP(65001);

    //创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断关系
    isIncircle(c,p);

    system("pause");
    return 0;
}