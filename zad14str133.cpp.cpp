#include <iostream>
#include <string>
using namespace std;
int main()
{
    char niz[81];
    cin.getline (niz, 81);
    int i=2 , br=0;
    while(niz[i]!='.'){
        if(niz[i]==' ' && niz[i-2]==' ')
            br++;;
        i++;    
    }
    if(niz[1]==' ')
    br=br+1;
    cout<<br;
    return 0;
}