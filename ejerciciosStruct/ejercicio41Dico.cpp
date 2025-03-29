#include<iostream>
using namespace std;

int main(){

//Variables
    int cod[100];
    int stock[100];
    int cantMin[100];
    char r;
    int c;
    char tipo[100];
    int cant;
    int pos = -1;

    for(int i=0; i<99; i++){
        cin>>cod[i]>>stock[i]>>cantMin[i];
    }


    cin>>r;

    while(r=='s'){
        cin>>c>>tipo>>cant;
        int d = 0;
        int h = 99;
        int me = (d+h)/2;

        while(d<=h && pos==-1){
            if(cod[me] == c){
                pos = me;
            }
            else if(cod[me] > c){
                h = me - 1;
            }
            else{
                d = me + 1;
            }
            me = (d+h)/2;
        }
        if(pos != -1){
            if(tipo == "INGRESO"){
                stock[pos] = stock[pos] + cant;
            }
            else if(stock[pos]>=cant){
                stock[pos] = stock[pos] - cant;
            }
            else{
                cout<<"NO HAY STOCK SUFICIENTE\n";
            }
        }
        else{
            cout<<"CODIGO NO ENCONTRADO!\n";
        }
        cin>>r;
    }

    for(int i=0; i<99; i++){
        if(stock[i]>= cantMin[i]){
            cout<<"Stock suficiente\n";
        }
        else{
            cout<<"Stock faltante\n";
        }
    }

    return 0;
}
