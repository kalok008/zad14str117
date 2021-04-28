#include <iostream>
using namespace std;
int
main ()
{
  int n, proiz = 1;
  cout << "n=";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {

      if (n > 39 || n < 3)
	{
	  cout << "Прочети условието";
	  break;
	}
      else
	{
	  cin >> arr[i];
	  if (arr[i] % 7 == 0)
	    {
	      proiz = arr[i] * proiz;

	    }
	}
    }
  if (n < 25 && n > 2 && proiz != 1)
    cout << proiz;
  if (proiz == 1 && n>2 && n<40)
    cout << "No";
  return 0;
}
