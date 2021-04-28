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
    double maxx=arr[0];
    int br=0;
    for(int i=1; i<n; i++){
        if(arr[i]>maxx){
        maxx=arr[i];
    }
    }
    for(int j=0; j<n; j++){
        if(arr[j]==maxx)
        br=br+1;
    }
    cout<<br;
    return 0;
}

