#include<iostream>
using namespace std;

int main(){

    int vect[15];
    int mayor;
    int pos;

    for(int i=0; i<14; i++){
        cin>>vect[i];
        if(i==0){
            mayor = vect[i];
            pos = 0;
        }
        else if(vect[i] > mayor){
            mayor = vect[i];
            pos = i;
        }

    }
    cout<<endl;
    cout<<mayor<<" "<<pos<<endl;


    return 0;
}

