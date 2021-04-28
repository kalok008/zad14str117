#include <iostream>
#include<cmath>
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
        bool prosto = true;
        for(int j=2; j*j<=arr[i]; j++){
            if(arr[i]%j==0){
            prosto = false;
            }
        }
        if(prosto == true){
            cout<<arr[i]<<" ";
            br++;
            break;
        }
    }
    if(br==0)
        cout<<"No";
    return 0;
}
