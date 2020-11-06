// Pointer

#include <bits/stdc++.h>
using namespace std;

struct A
{
    int data;
    void print()
    {
        cout << data << endl;
    }
};

void sub()
{
    int x = 1;
    int *p1;
    p1 = &x;
    *p1 = 2;
    cout << x << endl;

    int y;
    y = *p1;
    cout << y << endl;

    A a = A{1};
    A *p2 = &a;
    p2->print();
    p2->data = 2;
    p2->print();
}

int main()
{
    uint8_t x = 1;

    uint8_t *p;
    p = &x;
    cout << p << endl;
}