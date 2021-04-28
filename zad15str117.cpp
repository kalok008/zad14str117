#include <iostream>
using namespace std;
int main ()
{
  double sum = 0, br = 0;
  int n;
  cout << "n=";
  cin >> n;
  double arr[n];
  for (int i = 0; i <n; i++)
    {
      cin >> arr[i];
      if (n > 24 || n < 3)
	{
	  cout << "Прочети условието";
	  break;
	}
      if (arr[i]>=0){
      sum=arr[i]+sum;
	br = br + 1;
      }
    }
  if(n<25 && n>2 && br!=0)cout <<sum/br;
  if(br=0) cout<<"Няма положителни числа";
  return 0;
}
