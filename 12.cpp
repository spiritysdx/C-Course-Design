#include <iostream>
#include <string.h>
using namespace std;

void StrReplace(char* strSrc, const char* strFind, const char* strReplace)
//ԭ����ԭ���д��滻�Ĵ����滻�� (�滻���ʹ��滻�Ĵ����Ȳ�һ�����)
{
    int n = strlen(strFind);
    /*��ΪstrFind ��strReplace���Ȳ�һ����ȣ����Բ���ֱ����strSrc�д�����Ҫ���ⴴ��һ���ռ䣬�洢�滻����ַ���*/
    char* temp = new char[100];
    char* q = temp;
    char* s = strSrc;
    const char* p = strReplace;
    while (*s != '\0')
    {
        if (strncmp(s, strFind, n) == 0)   
            //strncmpԭ�ͷ�����string compare�����ڱȽ������ַ����Ƿ���ͬ����ͬ���˳�
        {
            while (*p != '\0')
            {
                *q = *p;
                q++;
                p++;
            }
            p = strReplace;
            s += n;
        }
        else
        {
            *q = *s;
            s++;
            q++;
        }
    }
    *q = '\0';
    strcpy(strSrc, temp);
}

int main()
{
    string strFind, strReplace;
    cout << "������ԭ�ַ���:" << endl;
    char* s = new char[100];
    /*gets(s)(��ֱ�ӵ��ã��������⸳ֵ���ַ�ָ��)��ֱ�Ӷ�ȡ�ַ�����buffer�У�������Ƿ�Խ�磬gets_s�жԳ��ȵĿ��ƣ������������ѣ�fgets()���ļ��ж�ȡ*/
    gets_s(s, 100);
    cout << "��������滻���Ӵ�:" << endl;
    getline(cin, strFind);
    const char* sub_str = strFind.c_str();
    cout << "�������滻���ִ�:" << endl;
    getline(cin, strReplace);
    const char* replace = strReplace.c_str();
    StrReplace(s, sub_str, replace);
    cout << "�滻����ַ���Ϊ:" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}



