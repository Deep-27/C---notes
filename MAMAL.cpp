#include <iostream>
using namespace std;
class Mammals {
public:
void fn1() {
cout << "I am mammal" << endl;
}
};
class MarineAnimals {
public:
void fn2() {
cout << "I am a marine animal" << endl;
}
};
class BlueWhale : public Mammals, public MarineAnimals {
public:
void fn3() {
cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;

}
};
int main()
{
Mammals mm;
MarineAnimals ma;
BlueWhale bw;
cout<<"func of Mammals by obj of Mammals"<<endl;
mm.fn1();
cout<<endl;
cout<<"func of MarineAnimals by obj of MarineAnimals"<<endl;
ma.fn2();
cout<<endl;
cout<<"func of BlueWhale by obj of BlueWhale"<<endl;
bw.fn3();
cout<<endl;
cout<<"func of Mammals by obj of BlueWhale"<<endl;
bw.fn1();
cout<<endl;
cout<<"func of MarineAnimals by obj of BlueWhale"<<endl;
bw.fn2();
return 0;
}