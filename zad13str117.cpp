#include <iostream>
using namespace std;
int
main ()
{
    int n;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if (n > 36)
        {
            cout<<"Прочети условието отново";
            break;

        }
        else
        {
            cin>>arr[i];
        }
    }
    int x;
    cout<<"x=";
    cin>>x;
    bool ravno_na_x = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            ravno_na_x=true;
            cout<<i+1;
            break;
        }
    }
    if(ravno_na_x == false)
        cout<<"No";
    return 0;
}
