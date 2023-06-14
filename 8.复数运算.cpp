#include<iostream>
using namespace std;


typedef struct Complex   //����ṹ������Complex 
{
    float real;  //ʵ�� 
    float image;   //�鲿 
}Complex;

Complex InitComplex(float a, float b)/*��������ʵ����̓�����ƣ������ظ�����*/
{
    Complex c;
    c.real = a;
    c.image = b;
    return c;
}

Complex Add(Complex c1, Complex c2)   //�ӷ� 
{
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.image = c1.image + c2.image;
    return sum;
}

Complex Sub(Complex c1, Complex c2)  //���� 
{
    Complex dif;
    dif.real = c1.real - c2.real;
    dif.image = c1.image - c2.image;
    return dif;
}

Complex Mul(Complex c1, Complex c2)   //�˷� 
{
    Complex product;
    product.real = c1.real * c2.real - c1.image * c2.image;
    product.image = c1.real * c2.image + c1.image * c2.real;
    return product;
}

Complex Div(Complex c1, Complex c2)   //����
{
    Complex mer;
    mer.real = (c1.real * c2.real + c1.image * c2.image) / (c2.image * c2.image + c2.real * c2.real);
    mer.image = (c1.image * c2.real - c1.real * c2.image) / (c2.image * c2.image + c2.real * c2.real);
    return mer;
}

float GetReal(Complex c)
{/*ȡ����ʵ��*/
    return c.real;
}

float GetImag(Complex c)
{ /*ȡ�����鲿*/
    return c.image;
}

void Print_C(Complex c)
{/*�������*/
    if (GetImag(c) == 0.0)
        printf("%5.2f\n", GetReal(c));
    else if (GetReal(c) == 0.0)  
        printf("%5.2fi\n", GetImag(c));
    else 
        printf("%5.2f+%5.2fi\n", GetReal(c), GetImag(c));
}

int main()
{
    Complex z1, z2, sum, dif, pro,per;   //z1����1��z2����2��sum�ͣ�dif�pro��,mer��
    float e1, e2, e3, e4;   //e1��e3ʵ����e2��e4�鲿 
    int a[2], b[2];//�洢ʵ�����鲿�ͽ��
    cout << "�����1������" << endl;
    cout<< "z1=";   //��ʾ�����һ������ 
    scanf("%f+%fi", &e1, &e2);
    z1 = InitComplex(e1, e2);/***********��ʾ���븴��z1������������С�*/

    cout << "�����2������" << endl << "z2=";   //��ʾ����ڶ������� 
    scanf("%f+%fi", &e3, &e4);
    z2 = InitComplex(e3, e4);/*****��ʾ���븴��z2������������С�*/
    sum = Add(z1, z2); 
    cout << "�ӷ�������Ϊ��";
    Print_C(sum);  //��ʾ��͵Ľ�� 
    dif = Sub(z1, z2); 
    cout << "����������Ϊ��";
    Print_C(dif);   //��ʾ���Ľ�� 
    pro = Mul(z1, z2); 
    cout << "�˷�������Ϊ��";
    Print_C(pro);   //��ʾ����Ľ�� 
    per = Div(z1, z2); 
    cout << "����������Ϊ��";
    Print_C(per);   //��ʾ���̵Ľ��

    cout << "�������3��������ʵ�����鲿;" << endl;
    cin >> a[0] >> b[0];
 
    cout << "������ĸ���Ϊ" << a[0] << "+" << b[0] << "i" << endl;
    cout << "�������4������:" << endl;
  
    cin >> a[1] >> b[1];
   
    cout << "��4��������ʵ���ǣ�" << a[1]<<endl;
    cout << "��4���������鲿�ǣ�" << b[1]<<endl;

    system("pause");
    return 0;

}
