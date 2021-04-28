#include <iostream>
#include <string>
using namespace std;
int main()
{
    char niz[100];
    cin.getline (niz, 100);
    int i=0;
    while(niz[i]!='\0'){
        cout<<niz[i];
        if(niz[i]==' ')
            cout<<endl;
        i++;    
    }
    return 0;
}