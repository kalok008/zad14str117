#include <iostream>
#include <string>
using namespace std;
int main()
{
    string niz;
    cin>>niz;
    int i=0;
    while(niz[i]!='\0'){
        i++;
    }
    cout<<i;
    return 0;
}