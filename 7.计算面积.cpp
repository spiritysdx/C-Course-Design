#include<iostream>
using namespace std;


float area(float r)
{
    const float PI = 3.1415926;
    return PI*r*r;
}

float area(float a, float b)
{
    return a*b;
}

int main()
{
    cout<<"圆的面积："<<area(1.0)<<endl;
    cout<<"矩形面积："<<area(1,1)<<endl;
    system("paues");
    return 0;
}
