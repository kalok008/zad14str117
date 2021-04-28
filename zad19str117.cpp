#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    double minn, maxx;
    int p, q;//индексите на min и max//
    for(int i=0; i<n; i++){
        if(arr[i]<minn){
        minn=arr[i];
        p=i;
        }
        if(arr[i]>maxx){
        maxx=arr[i];
        q=i;
    }
    }
    swap(arr[p], arr[q]);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}
