#include <iostream>
using namespace std;
int main ()
{
    int n, br=0;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++){
  	    int sum=0;
        while(arr[i]!=0){
            if(arr[i]<0){
		        arr[i]=arr[i]*-1;
            }
        sum=arr[i]%10+sum;
    	arr[i]=arr[i]/10;
        }
    if(sum>9 && sum<100)
    br++;
    }
    if(br!=0)
    cout << br;else
    cout<<"No";
    return 0;
}
