#include<iostream>
using namespace std;
class number{
    int x,y;
public:
    void set_val(){cin>>x>>y;}
    void print(){cout<<x<<" "<<y<<endl;}
    number operator = (number ob);
};
number number::operator = (number ob)
{
    x = ob.x;
    y = ob.y;
}
int main()
{
    number obj1,obj2;
    obj1.set_val();
    obj2.set_val();
    obj1.print();
    obj2.print();
    obj1 = obj2;
    obj1.print();
    obj2.print();
    return 0;

}
