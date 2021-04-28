#include <iostream>
#include <cmath>
using namespace std;
int
main ()
{
  int n;
  cout << "n=";
  cin >> n;
  double arr[n];
  for (int i = 0; i < n; i++)
    {
      if (n > 125 || n < 2){
	cout << "Прочети условието отново";
	break;
      }else{
	cin >> arr[i];
      }
    }
      double s = arr[0];
      double p = arr[0];
      for (int i = 1; i < n; i++) {
	if (arr[i] > s)
	  s = arr[i];
      if (arr[i] < p)
	p = arr[i];
    }
  cout << s*p << " " <<s-p;
  return 0;
}
