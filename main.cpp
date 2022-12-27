#include <iostream>

using namespace std;

#include "Point.h"
#include "circle.h"
#include "test.h"



void fun()
{
    Point p1;
    Circle c1;
    p1.setx(10);
    p1.sety(12);
    c1.setcentx(10);
    c1.setcenty(0);
    c1.setcentr(10);
    Point p2(p1);

    cout<<p2.getx()<<p2.gety()<<endl;
    if(c1.calpoint(p2)==0)
    {
        cout<<"点在 圆上1233245"<<endl;

    }
    else if (c1.calpoint(p2)==1) {
        cout<<"点在   圆 22323外"<<endl;

    }
    else {
                cout<<"点在   圆 内"<<endl;
    }

}


//int main()
//{


////    test Test;
////    Test.PrintB();
////    Test.fun();
////    Test.A::fun();



////    system("pause");
////    return EXIT_FAILURE;
//}
int main()
{
    Son b;
    b.func();
    return 0;
}
