#include <iostream>
using namespace std;
int main () {
   int n;
   cout<<"n=";
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   bool symetry = true;
   for (int i = 0; i < n; i++) {
      if (arr[i] != arr[n - i - 1]) {
         symetry = false;
         break;
      }
   }
   if (symetry) {
      cout << "YES";
   } else {
      cout << "NO";
   }
   return 0;
}
