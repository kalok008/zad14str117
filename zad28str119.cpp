#include <iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n, swap;
    cout << "n=";
    cin >> n;
    int arr[n];
    int basetwo[n];
    int br = 0;
    for(int i=0; i<n; i++){
        bool deli = false;
        cin>>arr[i];
        if(arr[i]>2){
            for(int j=3; j<=arr[i]; j=j+2){
                if(arr[i]%j==0){
                    deli = true;
                    break;
                }
            }
        }
        if(arr[i]<=0){
            deli = true;
        }
        if(deli == false || arr[i]==1 || arr[i]==2){
            basetwo[br]=arr[i];
            br++;
        }
    }
    sort (basetwo, basetwo+br);
    for(int i=0; i<br; i++)
        cout<<basetwo[i]<<" ";
    return 0;
}
