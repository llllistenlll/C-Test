#include <iostream>

#ifndef TEST_H
#define TEST_H
using namespace std ;

//基类
class A{
public:
    int mA=56;

    static void fun(){
        cout<<"fulei--------"<<endl;
    }
protected:
    int mB=78;
private:
    int mC;

};

////1. 公有(public)继承
//class B : public A{
//public:

//	}
//};

class test:public A //派生类
{
public:
    test();
    static void fun(){
        cout<<"Son--------"<<endl;
    }
        void PrintB()
        {
            cout << mA << endl;//可访问基类public属性
            cout << mB << endl; //可访问基类protected属性
            cout << A::mA<<endl;
//          cout << mC << endl; //不可访问基类private属性
        }
public:
    int mA=69;
};

class Base {
public:
    virtual void func() {
        cout << "Base func\n";
    }
};

class Son : public Base {
public:
    void func() {
        Base::func();
        cout << "Son func\n";
    }
};



#endif // TEST_H
