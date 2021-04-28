#include<iostream>
using namespace std;
int main(){
    char str[81];
    cin.getline(str,81);
    int br=0, i=0;
    while(str[i]!='\0'){
        if(str[i]==' ')
        br++;
        i++;
        
    }  
    cout<<br+1;
    return 0;
}