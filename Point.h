#ifndef POINT_H
#define POINT_H
#include<iostream>
class Point
{

public:
    Point ()
{
    printf("点的构造函数被调用\n");
}
    int getx(){return x;}
    int gety(){return y;}

    void setx(int a){x=a;}
    void sety(int b){y=b;}

    ~Point ()
    {
        printf("点析构函数被调用");
    }
private:
    int x;
    int y;
};

#endif // POINT_H
