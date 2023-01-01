#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
      complex(int x,int y){
         a=x;
         b=y;
      }
      complex(int x){
        a=x;
        b=0;
      }
      complex(){
        a=0;
        b=0;
      }
      void print(){
        cout<<"the complex number is:"<<a<<" + i"<<b<<endl;
      }
};
int main() {
    complex c1(3,5);
    c1.print();
    complex c2= complex(4);
    c2.print();
    complex c3;
    c3.print();
    return 0;
}