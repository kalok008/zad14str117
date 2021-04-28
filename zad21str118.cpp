#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    double arr[n], sum;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    double ave=sum/n;
    int br=0;
    for(int i=1; i<n; i++){
        if(arr[i]>ave){
        br++;
    }
    }
    cout<<br;
    return 0;
}


