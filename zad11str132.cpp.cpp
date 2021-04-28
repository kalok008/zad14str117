#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[1000000], a;
    cin>>str>>a;
    int i=0, br=0;
    while(str[i]!='\0'){
        if(str[i]==a)
            br++;
        i++;
    }
    cout<<br;
    return 0;
}