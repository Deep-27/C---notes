#include <iostream>

using namespace std;

inline int Max(int a, int b, int c) {

   return (a > b && a > c ? a : (b > c ? b : c));
}
inline int Min(int m, int n, int o) {
   return (m < n && m < o ? m : (n < o ? n : o));
}

int main(int x, int y, int z) {
  cin >> x >> y >> z ;
   cout << "Max:"<< Max(x,y,z) << endl;
   cout << "Min:" << Min(x,y,z) << endl;

   return 0;
}