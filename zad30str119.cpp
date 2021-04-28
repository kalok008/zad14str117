#include <iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n, sum=0;
    cout << "n=";
    cin >> n;
    int arr[n];
    bool ima = false;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
        if(arr[i]>=0){
            cout<<arr[i]<<" "<<sum - arr[i];
            ima = true;
            break;
        }
    }
    if(ima==false)
        cout<<"No";
    return 0;
}
