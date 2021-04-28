#include <iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n, swap;
    cout << "n=";
    cin >> n;
    int arr[n];
    bool ima = false;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1] && arr[i]==0){
                cout<<"Yes";
                ima = true;
                break;
        }
    }
    if(ima==false)
        cout<<"No";
    return 0;
}
