
#include<iostream>
#include<conio.h>
#include<math.h>    

using namespace std;

int main() {

    
    int n;

    
    cout << "Enter the Number :";
    cin>>n;

    cout << "List Of Prime Numbers Below " << n << endl;

    

    for (int i = 2; i < n; i++)
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0)
                break;-
            else if (j + 1 > sqrt(i)) {
                cout << i << endl;
            }
        }

    
    getch();
    return 0;
}