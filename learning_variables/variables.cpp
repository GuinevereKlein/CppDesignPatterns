#include <iostream>

using namespace std;

int main(){
    int a=1;
    double b=2.5;
    cout << "a="<<a<<" b="<<b<<endl;
    a=static_cast<int>(2.5);
    b=static_cast<double>(1);
    cout << "a="<<a<<" b="<<b<<endl;
}