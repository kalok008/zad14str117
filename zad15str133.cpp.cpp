#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[51];
    cin.getline(str,51);
    int n, i;
    bool polindrom = true;
    n=strlen(str);
    for(i=0;i<n/2;i++)
        if(str[i]!=str[n-1-i]){
            polindrom = false;
            cout<<"No";
            break;
        }
    if(polindrom)
        cout<<"Yes";
    return 0;
}
