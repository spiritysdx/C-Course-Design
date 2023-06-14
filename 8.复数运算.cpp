#include<iostream>
using namespace std;


typedef struct Complex   //定义结构体类型Complex 
{
    float real;  //实部 
    float image;   //虚部 
}Complex;

Complex InitComplex(float a, float b)/*给复数的实部和虛部复制，并返回复数。*/
{
    Complex c;
    c.real = a;
    c.image = b;
    return c;
}

Complex Add(Complex c1, Complex c2)   //加法 
{
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.image = c1.image + c2.image;
    return sum;
}

Complex Sub(Complex c1, Complex c2)  //减法 
{
    Complex dif;
    dif.real = c1.real - c2.real;
    dif.image = c1.image - c2.image;
    return dif;
}

Complex Mul(Complex c1, Complex c2)   //乘法 
{
    Complex product;
    product.real = c1.real * c2.real - c1.image * c2.image;
    product.image = c1.real * c2.image + c1.image * c2.real;
    return product;
}

Complex Div(Complex c1, Complex c2)   //除法
{
    Complex mer;
    mer.real = (c1.real * c2.real + c1.image * c2.image) / (c2.image * c2.image + c2.real * c2.real);
    mer.image = (c1.image * c2.real - c1.real * c2.image) / (c2.image * c2.image + c2.real * c2.real);
    return mer;
}

float GetReal(Complex c)
{/*取复数实部*/
    return c.real;
}

float GetImag(Complex c)
{ /*取复数虚部*/
    return c.image;
}

void Print_C(Complex c)
{/*复数输出*/
    if (GetImag(c) == 0.0)
        printf("%5.2f\n", GetReal(c));
    else if (GetReal(c) == 0.0)  
        printf("%5.2fi\n", GetImag(c));
    else 
        printf("%5.2f+%5.2fi\n", GetReal(c), GetImag(c));
}

int main()
{
    Complex z1, z2, sum, dif, pro,per;   //z1复数1，z2复数2，sum和，dif差，pro积,mer商
    float e1, e2, e3, e4;   //e1、e3实部，e2、e4虚部 
    int a[2], b[2];//存储实部、虚部和结果
    cout << "输入第1个复数" << endl;
    cout<< "z1=";   //提示输入第一个复数 
    scanf("%f+%fi", &e1, &e2);
    z1 = InitComplex(e1, e2);/***********提示输入复数z1，并存入变量中。*/

    cout << "输入第2个复数" << endl << "z2=";   //提示输入第二个复数 
    scanf("%f+%fi", &e3, &e4);
    z2 = InitComplex(e3, e4);/*****提示输入复数z2，并存入变量中。*/
    sum = Add(z1, z2); 
    cout << "加法运算结果为：";
    Print_C(sum);  //显示求和的结果 
    dif = Sub(z1, z2); 
    cout << "减法运算结果为：";
    Print_C(dif);   //显示求差的结果 
    pro = Mul(z1, z2); 
    cout << "乘法运算结果为：";
    Print_C(pro);   //显示求积的结果 
    per = Div(z1, z2); 
    cout << "除法运算结果为：";
    Print_C(per);   //显示求商的结果

    cout << "请输入第3个复数的实部和虚部;" << endl;
    cin >> a[0] >> b[0];
 
    cout << "您输入的复数为" << a[0] << "+" << b[0] << "i" << endl;
    cout << "请输入第4个复数:" << endl;
  
    cin >> a[1] >> b[1];
   
    cout << "第4个复数的实部是：" << a[1]<<endl;
    cout << "第4个复数的虚部是：" << b[1]<<endl;

    system("pause");
    return 0;

}
