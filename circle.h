#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include<iostream>

class Circle
{
public:
    Circle ();
    ~Circle ();

    int getcentx(){return cent.getx();}
    int getcenty(){return cent.gety();}
    int getcentr(){return R;}

    void setcentx(int a){cent.setx(a);}
    void setcenty(int b){cent.sety(b);}
    void setcentr(int c){R=c;}


    int calpoint(Point &a)
    {
        int RR=R*R;
        int sum=(cent.getx()-a.getx())*(cent.getx()-a.getx())+(cent.gety()-a.gety())*(cent.gety()-a.gety());
        if(RR==sum)
        {
            return 0;
        }
        else if(RR<sum)
        {
            return 1;
        }
        else
        {
            return 2;


        }
    }
private:
   Point cent;
   int R;
};

#endif // CIRCLE_H
