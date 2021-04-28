#include <iostream>
using namespace std;
int main(){
    char str[71];
    cin.getline(str,71);
    int i=0, j, ima;
    while(str[i]!='\0'){
        ima=0;
        j=i+1;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                cout<<str[j]<<' '<<i<<' '<<j<<endl;
                ima=1;
                break;
                
            }
            j++;
            
        }
        if(ima)
            break;
        i++;
        
    }
    if(ima==0)
        cout<<"No";
    return 0;
}
