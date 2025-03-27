#include<iostream>
using namespace std;

int main(){

///Variables
    int pos = -1;
    int vect[85];
    int cod;

    for(int i=0; i<84; i++){
        cin>>vect[i];
    }

    cout<<endl;
    cin>>cod;
    cout<<endl;

    for(int i=0; i<84; i++){
        if(vect[i] == cod && pos==-1){
            pos = i;
        }
    }
    if(pos!=-1){
        cout<<"Se encontro el elemento en la posicion: "<<pos<<endl;
    }
    else{
        cout<<"No se encontro el elemento en el vector."<<endl;
    }



    return 0;
}
