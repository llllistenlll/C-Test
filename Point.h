#ifndef POINT_H
#define POINT_H
#include<iostream>
class Point
{

public:
    Point ()
{
    printf("��Ĺ��캯��������\n");
}
    int getx(){return x;}
    int gety(){return y;}

    void setx(int a){x=a;}
    void sety(int b){y=b;}

    ~Point ()
    {
        printf("����������������");
    }
private:
    int x;
    int y;
};

#endif // POINT_H
