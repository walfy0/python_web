//模版方法模式
#include<stdio.h>

class A
{
    public:
    bool fun1(){return 1;}
    void fun3(){}
    void fun5(){}
    virtual ~A(){}
};

class B: public A
{
    public:
    void fun2(){}
    void fun4(){}
    ~B(){}
};

int main()
{
    A *a = new A();
    B *b = new B();
    if (a->fun1()){
        b->fun2();
    }
    a->fun3();
    for(int i=1;i<=5;i++)
        b->fun4();
    a->fun5();
}
