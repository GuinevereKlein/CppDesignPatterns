#include <string>
#include <iostream>
using namespace std;

//see https://learnmoderncpp.com/classes-friends-and-polymorphism/
struct Date{
    int year,month,day;
};

class Person {
    Date dob;
    string familyname,firstname;
};


int main(){
    Person genius = new Person({1998,05,18},"Guinevere","Klein");
    cout<<"Person is"<<genius<<endl;
};