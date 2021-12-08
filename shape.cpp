#include<iostream>
using namespace std;
class shape
{
public:
void init()
{
cout<<"this is a shape\n";
}
};
class polygon :public shape
{
public :
void init()
{
cout<<"polygon is a shape\n";
}
};
class rectangle
{
public :
void init()
{
cout<<"rectangle is a polygon\n";
}
};
class traingle
{
public :
void init()
{
cout<<"traingle is a polygon\n";
}
};
class square
{
public :
void init()
{
cout<<"square is a rectangle\n";
}
};
int main()
{
shape s;
s.init();
polygon p;
p.init();
traingle t;
t.init();
rectangle r;
r.init();
square sq;
sq.init();
}