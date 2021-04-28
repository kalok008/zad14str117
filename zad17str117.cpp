#include <iostream>
using namespace std;
int main ()
{
  int n, m=0;
  cout << "n=";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      if (n > 100 || n < 2)
	{
	  cout << "Прочети условието";
	  break;
	}
      else
	{ cin>>arr[i];
	}
    }
    int max = arr[0];
 for(int i=1; i<n; i++){
     if(arr[i]>max)
     {
         max=arr[i];
         m=i;
     }
 }

	  if (n < 101 && n > 1)
    cout << max <<" "<< m;
  return 0;
}
