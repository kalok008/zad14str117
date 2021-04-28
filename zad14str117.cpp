#include <iostream>
using namespace std;
int main ()
{
  int n, br = 0;
  cout << "n=";
  cin >> n;
  int arr[n];
  for (int i = 0; i <n; i++)
    {
      if (n > 29 || n < 3)
	{
	  cout << "Прочети условието";
	  break;
	}else{
	    cin >> arr[i];
      if (arr[i] % 2 == 0 || (arr[i] *-1)%2 == 0)
	br = br + 1;
    }
    }
  if (n<30 && n>2)
  cout << br;
  return 0;
}

