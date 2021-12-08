#include<iostream>
using namespace std;
class marks
{
public:
int roll,j;
string name[10];
int marks[5];
void ini()
{
for(j=0;j<5;j++)
{
cout<<"enter name :";
cin>>name[j];
}
}
string nmr(int j)
{
return(name[j]);
}
};
class physics :public marks
{
public:
int i;
void init1()
{
for(i=0;i<5;i++)
{
cout<<"student roll no "<<i+1;
cout<<"\nenter marks ";
cin>>marks[i];
}
}
int ph(int i)
{
return(marks[i]);
}
};
class chemistry :public marks
{
public :
int i;
void init2()
{
for(i=0;i<5;i++)
{
cout<<"student roll no "<<i+1<<name[i];
cout<<"\nenter marks ";
cin>>marks[i];
}
}
int ch(int i)
{
return(marks[i]);
}
};
class math :public marks
{
public :
int i;
void init3()
{
for(i=0;i<5;i++)
{
cout<<"student roll no "<<i+1<<name[i];
cout<<"\nenter marks ";
cin>>marks[i];
}
}
int mh(int i)
{
return(marks[i]);
}
};
int main()
{
int sum=0;
marks mr;
mr.ini();
physics p;
chemistry c;
math m;
cout<<"ENTER THE MARKS IN PHYSICS \n";
p.init1();
cout<<"ENTER THE MARKS IN CHEMISTRY \n";
c.init2();
cout<<"ENTER THE MARKS IN MATHEMATICS \n";
m.init3();
cout<<"TOTAL AND AVERAGE MARKS OF THE STUDENTS \n";
for(int i=0;i<5;i++)
{
cout<<"\nstudent roll no"<<i;
cout<<"\ntotal marks :";
sum=p.ph(i)+c.ch(i)+m.mh(i);
cout<<sum;
cout<<"\nAVERAGE MARKS :";
cout<<sum/3;
}
}