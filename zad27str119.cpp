#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cout << "n=";
    cin >> n;
    double arr[n], swap;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    double minn=arr[0], maxx=arr[0];
    for(int i=0; i<n; i++){
        if(minn>arr[i]){
            minn=arr[i];
        }
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    cout<<maxx-minn<<endl;
    for(int i=0; i<n; i++){
        if(i<1){
            i=1;
        }
        if(arr[i-1]>arr[i]){
            swap=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=swap;
            i=i-3;
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
