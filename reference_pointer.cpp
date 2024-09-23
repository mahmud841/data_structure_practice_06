#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // *p = 30;
    *p = NULL;
};

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;
    return 0;
}