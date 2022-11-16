#include <iostream>

using namespace std;

class A{
    public:
        virtual void print(){
            cout<<"class A\n";
        }
};

class B: public A{
    public:
        void print(){
            cout<<"class B\n";
        }
};

class C: public B{
    public:
        void print(){
            cout<<"class C\n";
        }
};

int main(){
    A* b = new B;
	A* c = new C;
	b->print(); //class B
	c->print(); //class c
    return 0;
}