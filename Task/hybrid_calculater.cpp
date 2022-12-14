#include <iostream>
using namespace std;

class A {
    public:
        int squre(int a) 
        {
            return a*a;
        }
};

class B: public A {
    public:
        int rect(int a,int b)
        {
            return a*b;
        }
};

class C {
    public:
        float cir(int r){
            return 3.14*r*r;
        }
};

class D: public B, public C {
    public:
        float tri(int a,int b)
        {
            return (a * b) * 0.5;
        }
};

int main() {
    D p;

    printf("Area of squre is %d\n",p.squre(6));    
    printf("Area of Reactangle is %d\n",p.rect(10,15)); 
    printf("Area of Circle is %.2f\n",p.cir(4));
    printf("Area of triangle is %.2f",p.tri(6,3)); 
}