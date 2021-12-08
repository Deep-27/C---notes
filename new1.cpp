#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"a";

          }  else
            {
                cout<<"c";
            }
            
        
        
    }
    else
    {
        if (b>a)
        {
            if (b>c)
            {
                /* code */cout<<"b";
            }
            
        }
        
    }
    
    return 0;
}