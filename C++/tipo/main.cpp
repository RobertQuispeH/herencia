#include <iostream>

using namespace std;

class B{        
  public:              
    void print() {  
      cout << "class B\n";
    }
};

class C{        
  public:              
    void print() {  
      cout << "class C\n";
    }
};

template <class T>
class A{
  T* a;
  public:
    A(T* t){
        a = t;
    }
    void print() {
       a->print(); 
    }
};


int main()
{
    A<B> b = new B;
    A<C> c = new C;
    b.print(); //class B
    c.print(); //class C
    return 0;
}