#include<iostream> 
#include<iomanip>
using namespace std;

struct DATE 
{ 
int date; 
int month; 
int year; 
}; 
class patient 
{ 
protected: 
char name[40]; 
DATE admit; 
char disease[40]; 
DATE discharge; 
public: 
void enter() 
{ 
char c; 
int i; 
cout<<"Enter information:"<<endl; 
cout<<"Name:"; 
for(i=0;i<=38;i++) 
{ 
cin>>c; 
if(c=='\r') 
break; 
else 
name[i]=c; 
} 
name[i]='\0'; 
//cin.getline(name,40); 
//cin.ignore(100,'\n'); 
cout<<"Date of admission:"<<endl; 
cout<<" Date:"; 
cin>>admit.date; 
cout<<" Month:"; 
cin>>admit.month; 
cout<<" Year:"; 
cin>>admit.year; 
//cin.ignore(100,'\n'); 
cout<<"Disease:"; 
for(i=0;i<=38;i++) 
{
cin>>c; 
if(c=='\r') 
break; 
else 
disease[i]=c; 
} 
disease[i]='\0'; 
//cin.getline(disease,40); 
//cin.ignore(100,'\n'); 
cout<<"Date of discharge:"<<endl; 
cout<<" Date:"; 
cin>>discharge.date; 
cout<<" Month:"; 
cin>>discharge.month; 
cout<<" Year:"; 
cin>>discharge.year; 
} 
void display() 
{ 
cout<<setw(14); 
cout.setf(ios::left); 
cout<<name<<setw(12); 
cout.unsetf(ios::left); 
cout<<admit.date<<'-'<<admit.month<<'-'<<admit.year; 
cout<<setw(17); 
cout<<disease<<setw(13); 
cout<<discharge.date<<'-'<<discharge.month<<'-'<<discharge.year; 
} 
}; 
class pat_age:public patient 
{ 
int age; 
public: 
int get_age() 
{ 
return age; 
} 
void enter() 
{ 
patient::enter(); 
cout<<"Age:"; 
cin>>age; 
} 
void display() 
{ 
patient::display(); 
cout<<setw(6)<<age; 
} 
};