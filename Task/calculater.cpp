#include <iostream>
using namespace std;

class area_cal{
    public:
        int squre(int a)
        {
            return a*a;
        }
        int rect(int l,int b)
        {
            return l*b;
        }
        float cir(float r)
        {
            return 3.14*r*r;
        }
        float tri(float l,float b)
        {
            return 0.5*l*b;
        }
};

class std_cal : public area_cal {
    
    public:
        int add(int n1,int n2) 
        {
            return n1 + n2;
        }

         int sub(int n1,int n2) 
        {
              return n1 - n2;
        }
        int multi(int n1,int n2) 
        {
              return n1 * n2;
        }
        int div(int n1,int n2) 
        {
              return n1 / n2;
        }
};    

int main() 
{
    // object of Person
    std_cal p;
       
    printf("Addition is %d\n",p.add(20,10));   
    printf("Subtraction is %d\n",p.sub(30,20)); 
    printf("Multiplication is %d\n",p.multi(9,10));
    printf("Division is %d",p.div(100,5)); 

    printf("Area of squre is %d\n",p.squre(9)); 
    printf("Area of rectangle is %d\n",p.rect(10,15)); 
    printf("Area of Circle is %.2f\n",p.cir(5));
    printf("Area of triangle is %.2f",p.tri(5,2)); 
    
}
