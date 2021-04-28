#include <iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n;
    cout<<"n=";
    cin>>n;
    int arr[n];
    bool ima_takiva = false;//проверявам дали има такива, които се делят на всяка своя цифра//
    for(int i=0; i<n; i++){
        cin>>arr[i];
        int m, q, br=0, p;// с m и br ще разбера броя на цифрите на елемента// 
        m=arr[i];
        q=m; //с помощта на q ще въведа цифрите на елемната в масив arr[br]//
        p=q;// с p ще проверявам дали цифрите делят елемента//
        while(m!=0){
            br++;
            m=m/10;
        }//вече знаем теьният броя//
        int basetwo[br];//създавам масив с толкова елемента//
        for(int j=0; j<br; j++){
            basetwo[j]=q%10;
            q=q/10;
        }//вече клетките на масива са запълнени с цифрите на числото//
        bool deli = true; //проверява дали го дели//
        for(int j=0; j<br; j++){
            if(p%basetwo[j]!=0){
                deli= false;
                break;//ако намери цифра, която не го дали прекъсва цикъла//
            }
        
        }
        if(deli==true){
            cout<<arr[i]<<" ";
            ima_takiva = true;//ако не намери, извежда числото и показва, че има такива числа в масива//
        }
    }
    if(ima_takiva == false)
        cout<<"No"; //ако не е намерено такова число, пише "Не"//
    return 0;
}    
