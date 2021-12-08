#include<iostream>
using namespace std;
// A class in C++ is the building block It is a user-defined data type,
// which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. 
class Employee
{
    private:
        int a ,b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};



void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

    int main(){
        Employee pranjal;
        
        pranjal.d=27;
        pranjal.e=14;
        pranjal.setData(1, 5, 7);
        pranjal.getData();
        
        return 0;

    }l