#include<iostream>
using namespace std;
int main(){
    char str[100], s;
    cin.getline(str,100);
    int i=0, max=1, br=1;
    s=str[0];
    do{
        i++;
        if(str[i]==str[i-1])
        br++; else{
            if(br>max){
                max=br;
                s=str[i-1];
                
            }
            br=1;
            
        }
       
    }
    while(str[i]!='\0');
    cout<<max<<' '<<s<<endl;
    return 0;
}