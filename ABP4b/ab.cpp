#include <bits/stdc++.h>
using namespace std;

// struct
struct MyPair
{
    int x;
    string y;

    // member function
    void print()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

    // constructor
    MyPair()
    {
        cout << "constructor called" << endl;
    }
    MyPair(int num, string str)
    {
        x = num;
        y = str;
    }
    // copy constructor
    MyPair(const MyPair &old)
    {
        cout << "copy constructor called" << endl;
        x = old.x + 1;
        y = old.y + " new";
    }

    // operator overload
    MyPair operator+(const MyPair &other)
    {
        MyPair ret;
        ret.x = x + other.x;
        ret.y = y + other.y;
        return ret;
    }
};

int main()
{
    MyPair p;
    p.x = 12345;
    p.y = "hello";
    p.print();

    MyPair q(67890, "APG4b");
    q.print();

    MyPair r = {11111, "Good Bye"};
    r.print();

    MyPair s(p);
    cout << "s.x = " << s.x << endl;
    cout << "s.y = " << s.y << endl;

    MyPair t = s;
    cout << "t.x = " << t.x << endl;
    cout << "t.y = " << t.y << endl;

    MyPair u = p + q;
    cout << "u.x = " << u.x << endl;
    cout << "u.y = " << u.y << endl;
}