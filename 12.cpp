#include <iostream>
#include <string.h>
using namespace std;

void StrReplace(char* strSrc, const char* strFind, const char* strReplace)
//原串、原串中待替换的串，替换串 (替换串和待替换的串长度不一定相等)
{
    int n = strlen(strFind);
    /*因为strFind 和strReplace长度不一定相等，所以不能直接在strSrc中处理，需要额外创建一个空间，存储替换后的字符串*/
    char* temp = new char[100];
    char* q = temp;
    char* s = strSrc;
    const char* p = strReplace;
    while (*s != '\0')
    {
        if (strncmp(s, strFind, n) == 0)   
            //strncmp原型翻译是string compare，用于比较两个字符串是否相同，相同则退出
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
    cout << "请输入原字符串:" << endl;
    char* s = new char[100];
    /*gets(s)(可直接调用，不用另外赋值给字符指针)是直接读取字符串到buffer中，不检查是否越界，gets_s有对长度的控制，超过会有提醒，fgets()从文件中读取*/
    gets_s(s, 100);
    cout << "请输入待替换的子串:" << endl;
    getline(cin, strFind);
    const char* sub_str = strFind.c_str();
    cout << "请输入替换的字串:" << endl;
    getline(cin, strReplace);
    const char* replace = strReplace.c_str();
    StrReplace(s, sub_str, replace);
    cout << "替换后的字符串为:" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}



