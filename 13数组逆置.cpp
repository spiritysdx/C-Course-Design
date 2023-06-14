#include<iostream>
using namespace std;

void reverse(int* a, int * b)
{
    int temp;
    while (a < b)
    {
        temp = *a;
        *a = *b;
        *b= temp;
        a++;
        b--;
    }    
}

int main()
{
    int m[10] = {1,2,3,4,5,6,7,8,9,10};
    int *a = &m[0];
    int *b = &m[9];
    reverse(a,b);
    for(int i = 0;i<10;i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
