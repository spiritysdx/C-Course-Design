//显示中文
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
#include<iostream>
using namespace std;

//立方体设计
/*
1.创建立方体类
2.设计属性
3.设计行为  获取立方体面积和体积
4.分别利用全局函数和成员函数 判断两个立方体是否相等
*/

class Cube
{
public:
    //设置长宽高
    //获取长宽高
    void setL(int l)
    {
        m_L = l;
    };

    int getL()
    {
        return m_L;
    };

    void setW(int w)
    {
        m_W = w;
    };

    int getW()
    {
        return m_W;
    };

    void setH(int h)
    {
        m_H = h;
    };

    int getH()
    {
        return m_H;
    };
    
    //获取立方体面积
    int calculateS()
    {
        return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
    }

    //获取立方体体积
    int calculateV()
    {
        return m_H*m_L*m_W;
    }

    //利用成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c)
    {
        if(m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
        {
            return true;
        }
        else
        {
            return false;
        }
    }


private:
    int m_L;//长
    int m_W;//宽
    int m_H;//高
};

//利用全局函数和成员函数 判断两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{
    //显示中文
    SetConsoleOutputCP(65001);
    
    //创建立方体对象
    Cube c1;
    
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout<<"c1的面积是："<<c1.calculateS()<<endl;
    cout<<"c1的体积是："<<c1.calculateV()<<endl;

    //创建第二个立方体
    Cube c2;

    c2.setL(10);
    c2.setW(10);
    c2.setH(11);

    cout<<"c2的面积是："<<c2.calculateS()<<endl;
    cout<<"c2的体积是："<<c2.calculateV()<<endl;

    bool ret = isSame(c1,c2);

    //利用全局函数判断
    if(ret)
    {
        cout<<"c1和c2相等"<<endl;
    }
    else
    {
        cout<<"c1和c2不相等"<<endl;
    }

    //利用成员函数判断
    ret = c1.isSameByClass(c2);
    if(ret)
    {
        cout<<"c1和c2相等"<<endl;
    }
    else
    {
        cout<<"c1和c2不相等"<<endl;
    }

    system("pause");
    return 0;
}