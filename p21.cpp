#include<iostream>
using namespace std;

class A
{
    public:
        int a, b;
        void get_ab(int n, int m)
        {
            a = n;
            b = m;
        }
};

class B: public A
{
    public:
        int get_b()
        {
            int result = a*b;
            return result;
        }
};
class C: public A
{
    public:
        int get_c()
        {
            float result = a*b;
            return result;
        }
};

int main()
{
    B obj1;
    C obj2;
    obj1.get_ab(10,7);
    int m = obj1.get_b();
    cout<<"Class B : "<<m<<endl;
    obj2.get_ab(20,10);
    float n = obj2.get_c();
    cout<<"Class C : "<<n<<endl;
    return 0;
}